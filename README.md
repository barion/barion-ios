
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

#### Setting up the FastPayment

The FastPayment needs a client secret at least. You can get a client secret from the Barion API, read more [here](https://docs.barion.com).

Create an instance of `FastPayment` with the `clientSecret`. The SDK can decide which environment used to get the client secret.

```swift

let fastPayment = await FastPayment(paymentClientSecret: clientSecret)

```swift

Call the `present` function of the `FastPayment` instance to present the inline gateway in your app, which will asynchronously return with the result of the payment attempt. You MUST validate the result on your backend as well

```swift

fastPayment.present(from: self){ result in
    switch result {
    case .success(let paymentResult):
        // TODO handle successful payment result and validate it on your backend
        print("success")
    case .failure(let paymentError):
        // TODO handle the error
        print("error")
    }
}

```swift

You can subscribe to events from the SDK. You can use it to log the progress of the payment flow.
You should create a `FastPaymentConfiguration` object and pass it to the `FastPayment` initialization method.
Also, you need to implement the `SDKClientEventListener` protocol to catch the events.

```swift

let fastPaymentConfiguration = FastPaymentConfiguration(sdkEventListener: self)
let fastPayment = await FastPayment(paymentClientSecret: clientSecret, configuration: fastPaymentConfiguration)

```swift

#### Customize the FastPayment

You can customize the SDK to fit into your application perfectly. Choose your own fonts, colors etc.
Pass it to the `FastPayment` object `present` function.

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
let primaryButton = PrimaryButton(titleColor: UIColor.white,
                                  backgroundColor: UIColor.blue,
                                  shadowColor: UIColor.darkGray,
                                  font: UIFont(name: "Noteworthy", size: 15))
        
let renderOptions = RenderOptions(font: UIFont(name: "Noteworthy", size: 15), 
                                  colors: colors, 
                                  primaryButton: primaryButton)

let fastPaymentOptions = FastPaymentOptions(renderOptions: renderOptions)

fastPayment.present(from: self, paymentOptions: fastPaymentOptions){ result in
    switch result {
    case .success(let paymentResult):
        // TODO handle successful payment result and validate it on your backend
        print("success")
    case .failure(let paymentError):
        // TODO handle the error
        print("error")
    }
}

```swift

:warning: _The font family of the fonts is used throughout the SDK. The SDK uses this font at multiple weights (e.g., regular, medium, semibold) if they exist._

## Localization

The SDK support these languages:
English, Hungarian, Czech, German, Slovak


## See also

* [Complete Documentation](https://docs.barion.com)


## Support

If you have a feature request, or spotted a bug or a technical problem, create a GitHub issue. For other questions, contact our [support team](https://barion.com).


## License
