//
//  SCPSetupIntentConfiguration.h
//  StripeTerminal
//
//  Created by Michael Shafrir on 8/28/23.
//  Copyright © 2023 Stripe. All rights reserved.
//
//  Use of this SDK is subject to the Stripe Terminal Terms:
//  https://stripe.com/terminal/legal
//

#import <Foundation/Foundation.h>

#import <StripeTerminal/SCPBuilder.h>
#import <StripeTerminal/SCPJSONDecodable.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * The `SetupIntentConfiguration` contains configuration information relevant to collecting a payment
 * method for an SCPSetupIntent.
 */
NS_SWIFT_NAME(SetupIntentConfiguration)
@interface SCPSetupIntentConfiguration : NSObject <NSCopying>

/**
 Whether to show a cancel button in transaction UI on Stripe smart readers.

 Defaults to NO.
 */
@property (nonatomic, assign, readonly) BOOL enableCustomerCancellation;

/**
 Collect and process the SetupIntent as a Mail Order/Telephone Order payment on Stripe smart readers. Contact Stripe support to enable this feature on your account.
 @see https://docs.stripe.com/terminal/features/mail-telephone-orders/overview
 */
@property (nonatomic, assign, readonly, getter=isMoto) BOOL moto;

/**
 Use `SCPSetupIntentConfigurationBuilder`.
 */
- (instancetype)init NS_UNAVAILABLE;

/**
 Use `SCPSetupIntentConfigurationBuilder`.
 */
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 The `SetupIntentConfigurationBuilder` is used to create a `SetupIntentConfiguration` object.
 */
NS_SWIFT_NAME(SetupIntentConfigurationBuilder)
@interface SCPSetupIntentConfigurationBuilder : SCPBuilder <SCPSetupIntentConfiguration *>

/// Set the enableCustomerCancellation property for the `SetupIntentConfiguration` object that will be built.
- (SCPSetupIntentConfigurationBuilder *)setEnableCustomerCancellation:(BOOL)enableCustomerCancellation;

/// Set the moto property for the `SetupIntentConfiguration` object that will be built.
- (SCPSetupIntentConfigurationBuilder *)setMoto:(BOOL)moto;

@end

NS_ASSUME_NONNULL_END
