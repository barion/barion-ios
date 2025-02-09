//
//  ViewController.swift
//  BarionGatewayPluginDemo
//

import UIKit
import BarionSDK

class ViewController: UIViewController, SDKClientEventListener {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    /**
     This method shows the simplest integration of the Barion SDK.
     The clientSecret parameter comes from your backend.
     */
    func startBarionSDK(clientSecret: String) async {
        // You need to initialize the BarionGatewayPlugin object with the clientSecret.
        let barionGatewayPlugin = await BarionGatewayPlugin(paymentClientSecret: clientSecret)
        // After the BarionGatewayPlugin object initialization is done you can show the inline gateway to your customer.
        // The result of the payment attempt will be returned in the callback function, and you MUST validate it on your backend as well.
        barionGatewayPlugin.present(from: self){ result in
            switch result {
            case .success(let paymentResult):
                // TODO handle successful payment result and validate it on your backend
                print("success")
            case .failure(let paymentError):
                // TODO handle the error
                print("error")
            }
        }
    }
    
    func startBarionSDKWithCustomization(clientSecret: String) async {
        
        // Subscribe for SDK events in the FastPaymentConfiguration:
        let barionGatewayPluginConfiguration = prepareBarionGatewayPluginConfiguration()
        
        // Customize the SDK with the FastPaymentOptions:
        let barionGatewayPluginOptions = prepareBarionGatewayPluginOptions()
        
        // You need to initialize the BarionGatewayPlugin object with the clientSecret and the configuration.
        let barionGatewayPlugin = await BarionGatewayPlugin(paymentClientSecret: clientSecret, configuration: barionGatewayPluginConfiguration)
        
        // After the BarionGatewayPlugin object initialization is done you can show the inline gateway to your customer.
        // Pass the paymentOptions parameter to fit the Barion SDK into your UI.
        // The result of the payment attempt will be returned in the callback function, and you MUST validate it on your backend as well.
        barionGatewayPlugin.present(from: self, paymentOptions: barionGatewayPluginOptions){ result in
            switch result {
            case .success(let paymentResult):
                // TODO handle successful payment result and validate it on your backend
                print("success")
            case .failure(let paymentError):
                // TODO handle the error
                print("error")
            }
        }
    }
    
    func prepareBarionGatewayPluginConfiguration() -> BarionGatewayPluginConfiguration {
        // In the BarionGatewayPluginConfiguration object you can subscribe to Barion SDK events.
        let barionGatewayPluginConfiguration = BarionGatewayPluginConfiguration(sdkEventListener: self)
        return barionGatewayPluginConfiguration
    }
    
    func onEvent(_ event: String) {
        print("BarionSDK event: \(event)")
    }
    
    /*
     You can customize the SDK to fit into your application perfectly.
     */
    func prepareBarionGatewayPluginOptions() -> BarionGatewayPluginOptions {
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
        let shadow: Shadow = Shadow(shadowColor: UIColor.darkGray, shadowOffset: CGSize(width: 2, height: 2), shadowOpacity: 0.5, shadowRadius: 6)
        let primaryButton = PrimaryButton(titleColor: UIColor.white,
                                          backgroundColor: UIColor.blue,
                                          shadow: shadow,
                                          font: UIFont(name: "Noteworthy", size: 15))
        
        let renderOptions = RenderOptions(font: UIFont(name: "Noteworthy", size: 15), colors: colors, primaryButton: primaryButton)
        let barionGatewayPluginOptions = BarionGatewayPluginOptions(renderOptions: renderOptions)
        return barionGatewayPluginOptions
    }

}

