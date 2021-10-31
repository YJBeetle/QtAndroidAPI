#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::telephony
{
	class SignalStrengthUpdateRequest;
}

namespace android::telephony
{
	class SignalStrengthUpdateRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SignalStrengthUpdateRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SignalStrengthUpdateRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		SignalStrengthUpdateRequest_Builder();
		
		// Methods
		android::telephony::SignalStrengthUpdateRequest build();
		android::telephony::SignalStrengthUpdateRequest_Builder setReportingRequestedWhileIdle(jboolean arg0);
		android::telephony::SignalStrengthUpdateRequest_Builder setSignalThresholdInfos(__JniBaseClass arg0);
	};
} // namespace android::telephony

