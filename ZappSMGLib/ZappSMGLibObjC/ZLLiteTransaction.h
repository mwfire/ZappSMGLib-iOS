//
//  ZLLiteTransaction.h
//  ZappSMGLib
//
//  Created by Alexandru Maimescu on 12/14/15.
//  Copyright © 2015 Zapp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZLValidatable.h"

/**
 *  Lite payment response model class.
 */
@interface ZLLiteTransaction : NSObject <ZLValidatable>

/**
 *  This is a unique id for the payment request generated by Zapp, mainly to be used by machine as it is a 37 characters long string.
 *  Note: this is the data that needs to be passed to the CFI App in the mobile device as part of the Zapp URL.
 */
@property (nonatomic, copy) NSString *aptId;

/**
 *  This is a unique id for the payment request generated by Zapp, mainly to be used by human as t is an 18 characters long string, this ID is used to
 *  retrieve payment status. A polling mechanism every 3-5 seconds is recommended.
 */
@property (nonatomic, copy) NSString *aptrId;

/**
 *  This data is in seconds. It is for the merchant for information purposes only. It is used by Zapp to mark a payment request as 'late retrieved' after
 *  this interval.
 */
@property (nonatomic, assign) NSInteger retrievalExpiryInterval;

/**
 *  This data is in seconds. It is for the merchant to poll for payment notification until this interval runs out and initiate an payment request enquiry
 *  after this.
 */
@property (nonatomic, assign) NSInteger confirmationExpiryInterval;

/**
 *  This is a unique id generated by Zapp for all payment requests. It should be used to enquire a payment status for the request which has been reached its
 *  confirmation expiry interval timeout.
 */
@property (nonatomic, copy) NSString *settlementRetrievalId;

- (instancetype)initWithAptId:(NSString *)aptId
                       aptrId:(NSString *)aptrId
      retrievalExpiryInterval:(NSInteger)retrievalExpiryInterval
   confirmationExpiryInterval:(NSInteger)confirmationExpiryInterval
        settlementRetrievalId:(NSString *)settlementRetrievalId;

@end
