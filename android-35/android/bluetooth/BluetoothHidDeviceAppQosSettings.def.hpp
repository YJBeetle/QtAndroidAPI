#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::bluetooth
{
	class BluetoothHidDeviceAppQosSettings : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint MAX();
		static jint SERVICE_BEST_EFFORT();
		static jint SERVICE_GUARANTEED();
		static jint SERVICE_NO_TRAFFIC();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothHidDeviceAppQosSettings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothHidDeviceAppQosSettings(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BluetoothHidDeviceAppQosSettings(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		jint describeContents() const;
		jint getDelayVariation() const;
		jint getLatency() const;
		jint getPeakBandwidth() const;
		jint getServiceType() const;
		jint getTokenBucketSize() const;
		jint getTokenRate() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth

