#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class SignalStrengthUpdateRequest;
}

namespace android::telephony
{
	class SignalStrengthUpdateRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SignalStrengthUpdateRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SignalStrengthUpdateRequest_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SignalStrengthUpdateRequest_Builder();
		
		// Methods
		android::telephony::SignalStrengthUpdateRequest build() const;
		android::telephony::SignalStrengthUpdateRequest_Builder setReportingRequestedWhileIdle(jboolean arg0) const;
		android::telephony::SignalStrengthUpdateRequest_Builder setSignalThresholdInfos(JObject arg0) const;
	};
} // namespace android::telephony

