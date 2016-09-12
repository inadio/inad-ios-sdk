# Inad SDK Example Project for iOS
======================================
## About
inad.io is a dedicated incentive adnetwork which provides a win-win solution to easily get revenue and improve user satisfastion for your mobile app. For more information see [the website](http://inad.io/)

## Examples
This iOS application project provides an example of the inad.io SDK integration. It is compiled with iOS 8.0 and supports any device running this iOS version or higher. When integrating the SDK with your application, please make sure to use the latest SDK version, which can be downloaded from our developers portal. Please also follow the integration manual which comes with the SDK.

## Integrate SDK
Get up and running in 4 easy steps:
###1) Implement the Offerwall Listener
The Inad SDK fires several events to inform you of ad availability. By implementing theOfferwallListener you will receive Offerwall events.
The SDK will notify your listener of all possible events listed below:

###2) Initialize the Offerwall Unit
Once the Offerwall Ad Unit is initialized, you will able to call functions on it. We recommend initializing the Offerwall on application launch.

###3) Present the Offerwall
After you receive the onOfferwallInitSuccess callback, you are ready to show the Offerwall to your users. When you want to show the Offerwall (typically done after a user clicks on some in-app button), you do so by calling the showOfferwall method on mInAdNetworkInstance:

###4) Reward the User
Inad.io supports two methods to reward your users.
####1) Client-Side Callbacks
  If you want to do something or update your UI immediately when credited, you should use this client-callback method:

####2) Server-Side Callbacks:
  For the better security, we recommend using the server-to-server callbacks for Offerwall. With server-to-server callbacks, you will have better control over the rewarding process as the user navigates out of your app to complete the offer. 
  Note: If you use server-to-server callbacks, remember optional custom parameters above and not to reward the user more than once for the same completion.

## Documentation

Check out our [developers site](http://inad.io/Home/Publisher)
for documentation on using the Inad SDK.

## GitHub issue tracker

Please report bugs or issues to [GitHub's issue tracker](https://github.com/inadio/inad-ios-sdk/issues).

## License

[Apache 2.0 License](http://www.apache.org/licenses/LICENSE-2.0.html)

## Contact
For any question or assistance, please contact us at support@inad.io
