#pragma once

#include "../../JObject.hpp"

class JIntArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit SignalThresholdInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SignalThresholdInfo_Builder(QJniObject obj);
		
		// Constructors
		SignalThresholdInfo_Builder();
		
		// Methods
		android::telephony::SignalThresholdInfo build() const;
		android::telephony::SignalThresholdInfo_Builder setRadioAccessNetworkType(jint arg0) const;
		android::telephony::SignalThresholdInfo_Builder setSignalMeasurementType(jint arg0) const;
		android::telephony::SignalThresholdInfo_Builder setThresholds(JIntArray arg0) const;
	};
} // namespace android::telephony

