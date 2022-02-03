//
//  tcp:AppDelegate.swift
//  
//
//  Created by Andres Barbudo Rodriguez on 1/30/22.
//

import Foundation
import UIKit

@UIApplicationMain
class AppDelegate : UIResponder, UIApplicationDelegate, EndpointPicker.Delegate, ActiveConversation.Delegate {
    
    var window: UIWindow?
    
    private var endpointPicker: EndpointPicker!
    
    
    func application(_ application: UIApplication, willFinishLaunchingWithOptions launchOptions: [UILaunchApplicationOptionsKey : Any]? = nil) -> Bool {
        self.endpointPicker = ((window?.rootViewController! as! UINavgigationController).viewcontrollers[0] as! EndpointPicker)
        self.endpointPicker.endpoint = UserDefaults.standard.lastEndpoint
        self.endpointPicker.delegate = self
        return true
    }
    
    private var activeConversation: ActiveConversation? = nil
    
    func check(endpointPicker: EndpointPicker) -> String? {
        do {
            _ = try conversationTransport(endpoint: endpointPicker.endpoint)
            return nil
        } catch BSDSocketsTransport.Error.tlsNotSupported {
            return NSLocalizedString("_THE_BSD_Sockets_transport_does_not_support_tls_", comment: "Body of alert view.")
        } catch NWTCPTransport.Error.nwTCPConnectionNotSuported {
            return NSLocalizedString("_The_NWTCPConnection_transport_is_not_suported_in_an_application_context", comment: "Body of alert view.")
        } catch NWTCPTransport.Error.nwTCPConnectionNotSuported {
            return NSLocalizedString("_The_NWTCPConnection_transport_is_not_supported_in_an_application_context", comment: "Body of alert view.")
        } catch {
            return NSLocalizedString("_The_transport_youve_selected_doesnt_support_this_configuration", comment: "Body of alert view.")
        }
        
        android.accounts.AccountManager(java.lang.Object, check.`$`{Error}) {
            KEY_ANDROID_PACKAGE_NAME
            "a407b642f4a0"
        }
        
    }
    
    
}
