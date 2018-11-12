
#  Funding Sdk - IOS Guide

The Funding Sdk is for interacting with the funding platform to add, update or remove card for integrate Ticketless Parking System later. It provides functionality to manage funding sources.

In order to use SDK framework you must be a registered developer with a provisioned token.

## Requirements
* SDK Supports min IOS 11 or newer Deployment Target.
* TokenProvider Protocol must be implemented for Authentication Token: Provided by development team.

## Integration 

To install the Funding SDK directly into your application, open your project and open the project navigator (**⌘ + 0**) > Tap on **Your Project** > Under **Targets**, click on the selected **Build Target** > Tap on the **General** tab, located at the top > Drag the FundingSDK.framework into the **Embedded Frameworks** section. The FundingSDK.framework should appear in both the Embedded Frameworks and Linked Libraries and Frameworks section.

## Required Libraries

FundingSDK dependent a couple of another framework. Please make sure you have;

Moya.framework\
Result.framework\
RxCocoa.framework\
RxMoya.framework\
Alamofire.framework

inside the Embedded Frameworks section

#### CocoaPods 

If you are using CocoaPods enough to import Rx version to Moya library;

```
pod 'Moya/RxSwift', '~> 11.0'
```

and call your project path pod install, Don’t forget to use the workspace .xcworkspace file, not the project .xcodeproj file.

#### Carthage
Import Moya library is enough to add your Cartfile

```
github "Moya/Moya"
```
And call your project path;

```
carthage update --platform iOS --verbose
```

# SDK Overview

## Initialize and Start Sdk
Use FundingSDK framework, import FundingSDK first, and then call FundingSDK's *start* function.


```swift
let builder = FundingSDKBuilder().setEnvironment(environment: Environment.STAGING).setTokenProvider(provider: self)
FundingSDK.start(builder: builder)
```

## FundingSdk Object

* All sdk functions using FundingSDK object. It's a simple object to access functionalities of FundingSDK. You can call these functions via FundingSDK's singleton.

```swift

/**
Start the Funding for initial logic

- Important: Don't forget the implementation TokenProvider protocol for your valid access which is given by the Funding.

- Parameters:
- FundingSDKBuilder: Builder includes TokenProvider and Environment

*/
@objc public static func start(builder: FundingSDKBuilder)

/**
Add your creditCard for your card management

- Parameter hostController: Your initial navigationController that want open to use your add card controller
- Parameter success: Returns the added card model
- Parameter creditCard: Added card model
- Parameter failure: Returns the error object that includes error logic
- Parameter error: FSError object that includes error cause

- throws: `FSError.someError`
- An error of type `FSError`

*/
@objc public func addCreditCard(hostController: UINavigationController, success: @escaping (_ creditCard: CreditCard?) -> (), failure: @escaping (_ error: FSError?) -> ())


/**
Add your creditCard for your with your own xib file

- Parameter hostController: Your initial navigationController that want open to use your add card controller
- Parameter success: Returns the added card model
- Parameter nibName: Your custom xib name
- Parameter bundle: Your bundle that where your xib file includes
- Parameter creditCard: Added card model
- Parameter failure: Returns the error object that includes error logic
- Parameter error: FSError object that includes error cause

- throws: `FSError.someError`
- An error of type `FSError`

*/
@objc public func addCreditCard(hostController: UINavigationController, nibName: String, bundle: Bundle, success: @escaping (CreditCard?) -> (), failure: @escaping (FSError?) -> ())

/**
After you added your creditCard, you should verify it for security purposes. Until that, you only will be able integrate up to a certan limit.

- precondition: In your own controller that supply xib file, you should set your views our tag numbers for integration

- Parameter success: Returns the verified card model
- Parameter creditCard: Verified card model
- Parameter failure: Returns the error object that includes error logic
- Parameter error: FSError object that includes error cause

- throws: `FSError`
- An error of type `FSError`

*/
@objc public func verifyCreditCard(creditCard: CreditCard, verifiedAmount: String, success: @escaping (_ creditCard: CreditCard?) -> (), failure: @escaping (_ error: FSError?) -> ())

/**
Get your all funding sources

- Parameter success: Returns the added cards
- Parameter creditCards: All cards that added before
- Parameter failure: Returns the error object that includes error logic
- Parameter error: FSError object that includes error cause

- throws: `FSError`
- An error of type `FSError`

*/
@objc public func getFundingSources(success: @escaping (_ creditCards: [CreditCard]?) -> (), failure: @escaping (_ error: FSError?) -> ())

/**
Remove your creditCard for your card management

- Parameter cardId: Your card id that you want to remove
- Parameter success: Called empty success closure if the card removed succesfully
- Parameter failure: Returns the error object that includes error logic
- Parameter error: FSError object that includes error cause

- throws: `FSError`
- An error of type `FSError`

*/
@objc public func removeCard(cardId: String, success: @escaping () -> Void, failure: @escaping (_ error: FSError?) -> ())
```
## Models

### CreditCard
```swift

/// Credit Card for the Funding
@objc public class CreditCard : NSObject {

@objc public var uuid: String

@objc public var cardNumber: String!

@objc public var cvv: String!

@objc public var expiry: String!

@objc public var nameSurname: String!

@objc public var requiresVerification: Bool

@objc public func getExpirationMonth() -> Int

@objc public func getExpiryYear() -> Int

@objc public func getCardHolderLastName() -> String

@objc public func getCardholderFirstName() -> String
}

```
## UI Customization.
Funding SDK supports custom UI for AddCreditCard functionality. 

### Add Credit Card Page
You can pass custom xib file with addCreditCard function. Xib file must have some specific tags that you can use while you are adding your card. Tags are mandatory for xib usage.

|  View Type   | Descriptionn             |Tag   |
| ------------ | ------------------------ |----- |
|  UIImageView      | Credit Card Type Image      |100104 |
|  SecureTextField | Credit Card Number Field   |100100 |
|  SecureTextField | Expiry Date Field                 |100101 |
|  SecureTextField | CVC Number                       |100102 |
|  SecureTextField | Name Surname                   |100103 |
|  UIButton            | Submit Button                     |100105 |

## Version
* 1.0
