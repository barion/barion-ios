//
//  ViewController.swift
//  FastPaymentDemo
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
        // You need to initialize the FastPayment object with the clientSecret.
        let fastPayment = await FastPayment(paymentClientSecret: clientSecret)
        // After the FastPayment object initialization is done you can show the inline gateway to your customer.
        // The result of the payment attempt will be returned in the callback function, and you MUST validate it on your backend as well.
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
    }
    
    func startBarionSDKWithCustomization(clientSecret: String) async {
        
        // Subscribe for SDK events in the FastPaymentConfiguration:
        let fastPaymentConfiguration = prepareFastPaymentConfiguration()
        
        // Customize the SDK with the FastPaymentOptions:
        let fastPaymentOptions = prepareFastPaymentOptions()
        
        // You need to initialize the FastPayment object with the clientSecret and the configuration.
        let fastPayment = await FastPayment(paymentClientSecret: clientSecret, configuration: fastPaymentConfiguration)
        
        // After the FastPayment object initialization is done you can show the inline gateway to your customer.
        // Pass the paymentOptions parameter to fit the Barion SDK into your UI.
        // The result of the payment attempt will be returned in the callback function, and you MUST validate it on your backend as well.
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
    }
    
    func prepareFastPaymentConfiguration() -> FastPaymentConfiguration {
        // In the FastPaymentConfiguration object you can subscribe to Barion SDK events.
        let fastPaymentConfiguration = FastPaymentConfiguration(sdkEventListener: self)
        return fastPaymentConfiguration
    }
    
    func onEvent(_ event: String) {
        print("BarionSDK event: \(event)")
    }
    
    /*
     You can customize the SDK to fit into your application perfectly.
     */
    func prepareFastPaymentOptions() -> FastPaymentOptions {
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
        
        let renderOptions = RenderOptions(font: UIFont(name: "Noteworthy", size: 15), colors: colors, primaryButton: primaryButton)
        let fastPaymentOptions = FastPaymentOptions(renderOptions: renderOptions)
        return fastPaymentOptions
    }
}

