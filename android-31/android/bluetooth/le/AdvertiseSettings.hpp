#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::bluetooth::le
{
	class AdvertiseSettings : public JObject
	{
	public:
		// Fields
		static jint ADVERTISE_MODE_BALANCED();
		static jint ADVERTISE_MODE_LOW_LATENCY();
		static jint ADVERTISE_MODE_LOW_POWER();
		static jint ADVERTISE_TX_POWER_HIGH();
		static jint ADVERTISE_TX_POWER_LOW();
		static jint ADVERTISE_TX_POWER_MEDIUM();
		static jint ADVERTISE_TX_POWER_ULTRA_LOW();
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AdvertiseSettings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdvertiseSettings(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getMode();
		jint getTimeout();
		jint getTxPowerLevel();
		jboolean isConnectable();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth::le

