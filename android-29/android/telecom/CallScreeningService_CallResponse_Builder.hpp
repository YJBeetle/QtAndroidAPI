#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::telecom
{
	class CallScreeningService_CallResponse;
}

namespace android::telecom
{
	class CallScreeningService_CallResponse_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CallScreeningService_CallResponse_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CallScreeningService_CallResponse_Builder(QAndroidJniObject obj);
		
		// Constructors
		CallScreeningService_CallResponse_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDisallowCall(jboolean arg0);
		QAndroidJniObject setRejectCall(jboolean arg0);
		QAndroidJniObject setSilenceCall(jboolean arg0);
		QAndroidJniObject setSkipCallLog(jboolean arg0);
		QAndroidJniObject setSkipNotification(jboolean arg0);
	};
} // namespace android::telecom

