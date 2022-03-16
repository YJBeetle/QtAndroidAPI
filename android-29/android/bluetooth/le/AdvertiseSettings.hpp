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
		AdvertiseSettings(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getMode() const;
		jint getTimeout() const;
		jint getTxPowerLevel() const;
		jboolean isConnectable() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth::le

