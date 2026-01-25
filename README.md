
# Barion iOS

Barion iOS provides you with the building blocks to create a checkout experience for your shoppers, allowing them to pay using the payment method of their choice.


## Installation

Barion iOS is available through [Swift Package Manager](https://swift.org/package-manager/).

### Minimum Requirements

- iOS 15.6
- Xcode 15.0
- Swift 5.7

### Swift Package Manager

1. Follow Apple's [Adding Package Dependencies to Your App](
https://developer.apple.com/documentation/xcode/adding_package_dependencies_to_your_app
) guide on how to add a Swift Package dependency.
2. Use `https://github.com/barion/barion-ios` as the repository URL.

### Usage

#### Setting up the BarionGatewayPlugin

The BarionGatewayPlugin needs a client secret at least. You can get a client secret from the Barion API, read more [here](https://docs.barion.com).

Create an instance of `BarionGatewayPlugin` with the `clientSecret`. The SDK can decide which environment used to get the client secret.

```swift
let barionGatewayPlugin = await BarionGatewayPlugin(paymentClientSecret: clientSecret)
```

Call the `present` function of the `BarionGatewayPlugin` instance to present the inline gateway in your app, which will asynchronously return with the result of the payment attempt. You MUST validate the result on your backend as well

```swift
barionGatewayPlugin.present(
        from: rootVC,
        paymentOptions: paymentOptions,
        onSuccess: { result in
            print("Payment result: \(result)")
        },
        onFailure: { result in
            print("Payment result: \(result)")
        }
    )
```

The `paymentResult` will contain the funding source of the last payment attempt (even if it was unsuccessful).
If there was an error during the payment flow the `paymentError` will contain what the error was. 

You can subscribe to events from the SDK. You can use it to log the progress of the payment flow.
You should create a `BarionGatewayPluginConfiguration` object and pass it to the `BarionGatewayPlugin` initialization method.
Also, you need to implement the `SDKClientEventListener` protocol to catch the events.

```swift
let barionGatewayPluginConfiguration = BarionGatewayPluginConfiguration(sdkEventListener: self)
let barionGatewayPlugin = await BarionGatewayPlugin(paymentClientSecret: clientSecret, configuration: barionGatewayPluginConfiguration)
```

#### Customize the BarionGatewayPlugin

You can customize the SDK to fit into your application perfectly. Choose your own fonts, colors etc.
The SDK automatically turns into dark or light mode if you leave the `appearance` on the default value. If your application supports only light mode, we recommend configuring this to `.light` and our SDK will fit into your application.
You can customize the order of the available payment methods. The default order is: Apple Pay, new card. If you missed some payment methods don't worry the SDK will put the rest of the available payment methods at the end of the list.
The `paymentMethodOrder` possible values are:
```swift
["applePay", "bankCard", "barionWallet", "newCard"]
```
The `appearance` possible values are (the default value is `.automatic`):
```swift
.automatic, .dark, .light
```

:warning: _The Apple Pay won't be in the payment method list if your device doesn't support it._

Pass it to the `BarionGatewayPlugin` object `present` function.

```swift
let colors = Colors(
            background: UIColor.white,
            primary: UIColor.blue,
            title: UIColor.black,
            subtitle: UIColor.gray,
            text: UIColor.black,
            secondaryText: UIColor.black,
            inputColors: InputColors(background: UIColor.white,
                                     border: UIColor.black,
                                     placeholder: UIColor.black,
                                     label: UIColor.black,
                                     error: UIColor.red,
                                     link: UIColor.blue),
            fundingSourceColors: FundingSourceColors(title: UIColor.black,
                                                     subtitle: UIColor.darkGray,
                                                     background: UIColor.lightGray)
        )

let shadow: Shadow = Shadow(shadowColor: UIColor.darkGray, 
                            shadowOffset: CGSize(width: 2, height: 2), 
                            shadowOpacity: 0.5, 
                            shadowRadius: 6)

let primaryButton = PrimaryButton(titleColor: UIColor.white,
                                  backgroundColor: UIColor.blue,
                                  shadow: shadow,
                                  font: UIFont(name: "Noteworthy", size: 15))
        
let renderOptions = RenderOptions(font: UIFont(name: "Noteworthy", size: 15), 
                                  colors: colors, 
                                  primaryButton: primaryButton,
                                  paymentMethodOrder: ["bankCard", "applePay"], 
                                  hidePoweredByLabel: false,
                                  appearance: .automatic)

let barionGatewayPluginOptions = BarionGatewayPluginOptions(renderOptions: renderOptions, locale: "en_US")

barionGatewayPlugin.present(from: self, paymentOptions: barionGatewayPluginOptions,
        onSuccess: { result in
            // TODO handle successful payment result and validate it on your backend
            print("success")
        },
        onFailure: { result in
            // TODO handle the error
            print("error")
        }
)
```

:warning: _The font family of the fonts is used throughout the SDK. The SDK uses this font at multiple weights (e.g., regular, medium, semibold) if they exist._

#### Apple Pay Component
The Barion SDK supports presenting an Apple Pay button directly in your UI.

##### Usage

Using the Apple Pay–only flow is almost identical to using the full BarionGatewayPlugin. You still need to initialize the SDK, but you must set the `useApplePayButton` parameter:
```swift
let barionGatewayPlugin = await BarionGatewayPlugin(paymentClientSecret: clientSecret, useApplePayButton: true)
```
After the `barionGatewayPlugin` instance is created, you can retrieve the Apple Pay button by calling:
```swift
barionGatewayPlugin.getApplePayButton(onSuccess: { result in
                            print("Apple Pay Success: \(result)")
                        }, onFailure: { error in
                            print("Apple Pay Failure: \(error)")
                        })
```
That’s it! When the customer taps the button, the SDK will handle the complete Apple Pay payment flow and will return the payment result.
You MUST validate this result on your backend as well.

##### Customization

You can customize the Apple Pay button by passing an `ApplePayButtonOptions` instance to the `getApplePayButton()` method. You can configure the button type and style. The available values match those provided by PassKit.

```swift
barionGatewayPlugin.getApplePayButton(
    buttonOptions: ApplePayButtonOptions(
        buttonRenderOptions: ApplePayButtonRenderOptions(
            buttonType: .checkout, 
            buttonStyle: .automatic
        )
    ), 
    onSuccess: { result in        
        print("Apple Pay Success: \(result)")
    }, 
    onFailure: { error in
        print("Apple Pay Failure: \(error)")
    }
)
```
:warning: _The .checkout button type and .automatic button style are the default values._

## Localization

The SDK supports these languages:
English, Hungarian, Czech, German, Slovak, Polish, Romanian


## See also

* [Complete Documentation](https://docs.barion.com)


## Support

If you have a feature request, or spotted a bug or a technical problem, create a GitHub issue. For other questions, contact our [support team](https://barion.com).


## License
