/*! @file AppAuth.h
 @brief AppAuth iOS SDK
 @copyright
 Copyright 2015 Google Inc. All Rights Reserved.
 @copydetails
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <Foundation/Foundation.h>

//! Project version number for AppAuthFramework-iOS.
FOUNDATION_EXPORT double GTMAppAuthVersionNumber;

//! Project version string for AppAuthFramework-iOS.
FOUNDATION_EXPORT const unsigned char GTMAppAuthVersionString[];

#import <GTMAppAuth/GTMAppAuthFetcherAuthorization.h>
#import <GTMAppAuth/GTMAppAuthFetcherAuthorization+Keychain>
#import <GTMAppAuth/GTMKeychain.h>
#import <GTMAppAuth/GTMTVAuthorizationRequest.h>
#import <GTMAppAuth/GTMTVAuthorizationResponse.h>
#import <GTMAppAuth/GTMTVAuthorizationService.h>
#import <GTMAppAuth/GTMTVServiceConfiguration.h>


#if TARGET_OS_TV
#elif TARGET_OS_WATCH
#elif TARGET_OS_IOS
#import <GTMAppAuth/GTMOAuth2KeychainCompatibility.h>
#elif TARGET_OS_MAC
#import <GTMAppAuth/GTMOAuth2KeychainCompatibility.h>

#else
#error "Platform Undefined"
#endif

