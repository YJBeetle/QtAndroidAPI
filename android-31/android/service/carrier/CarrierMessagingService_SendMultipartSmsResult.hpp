#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::service::carrier
{
	class CarrierMessagingService_SendMultipartSmsResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierMessagingService_SendMultipartSmsResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CarrierMessagingService_SendMultipartSmsResult(QAndroidJniObject obj);
		
		// Constructors
		CarrierMessagingService_SendMultipartSmsResult(jint arg0, jintArray arg1);
		
		// Methods
		jintArray getMessageRefs();
		jint getSendStatus();
	};
} // namespace android::service::carrier
