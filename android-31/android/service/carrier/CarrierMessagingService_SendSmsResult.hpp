#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::service::carrier
{
	class CarrierMessagingService_SendSmsResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierMessagingService_SendSmsResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CarrierMessagingService_SendSmsResult(QAndroidJniObject obj);
		
		// Constructors
		CarrierMessagingService_SendSmsResult(jint arg0, jint arg1);
		
		// Methods
		jint getMessageRef();
		jint getSendStatus();
	};
} // namespace android::service::carrier

