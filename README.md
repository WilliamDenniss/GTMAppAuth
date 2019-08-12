# AppAuth for tvOS

AppAuth for tvOS is an extension of AppAuth for iOS and macOS that adds RFC 8628
device authorization flows to bootstrap an AppAuth `OIDAuthState` object 
directly on the Apple TV.

It requires the AppAuth library to be usable. This library is only used for the 
initial authorization, and the resulting output objects are pure AppAuth 
objects. As a result, the authorization state can be used with any upstream 
AppAuth extension in the ecosystem, such as 
[GTMAppAuth](https://github.com/google/GTMAppAuth).

Historical note: this code was originally part of GTMAppAuth where it 
implemented Google’s device flow protocol. It was forked to its own repository, 
and revised to support the standard RFC 8628 protocol (which Google’s 
authorization server also implements). This library is maintained by volunteers 
in the OpenID community, and is not an official Google product.
