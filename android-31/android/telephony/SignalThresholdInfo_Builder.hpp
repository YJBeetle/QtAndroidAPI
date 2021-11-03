#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class SignalThresholdInfo;
}

namespace android::telephony
{
	class SignalThresholdInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SignalThresholdInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SignalThresholdInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		SignalThresholdInfo_Builder();
		
		// Methods
		android::telephony::SignalThresholdInfo build();
		android::telephony::SignalThresholdInfo_Builder setRadioAccessNetworkType(jint arg0);
		android::telephony::SignalThresholdInfo_Builder setSignalMeasurementType(jint arg0);
		android::telephony::SignalThresholdInfo_Builder setThresholds(jintArray arg0);
	};
} // namespace android::telephony

