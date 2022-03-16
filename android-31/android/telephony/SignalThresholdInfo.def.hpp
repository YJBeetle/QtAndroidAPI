#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony
{
	class SignalThresholdInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SIGNAL_MEASUREMENT_TYPE_RSCP();
		static jint SIGNAL_MEASUREMENT_TYPE_RSRP();
		static jint SIGNAL_MEASUREMENT_TYPE_RSRQ();
		static jint SIGNAL_MEASUREMENT_TYPE_RSSI();
		static jint SIGNAL_MEASUREMENT_TYPE_RSSNR();
		static jint SIGNAL_MEASUREMENT_TYPE_SSRSRP();
		static jint SIGNAL_MEASUREMENT_TYPE_SSRSRQ();
		static jint SIGNAL_MEASUREMENT_TYPE_SSSINR();
		static jint SIGNAL_MEASUREMENT_TYPE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit SignalThresholdInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SignalThresholdInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint getMaximumNumberOfThresholdsAllowed();
		static jint getMinimumNumberOfThresholdsAllowed();
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getRadioAccessNetworkType() const;
		jint getSignalMeasurementType() const;
		JIntArray getThresholds() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

