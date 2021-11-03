#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::bluetooth::le
{
	class AdvertisingSetParameters : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint INTERVAL_HIGH();
		static jint INTERVAL_LOW();
		static jint INTERVAL_MAX();
		static jint INTERVAL_MEDIUM();
		static jint INTERVAL_MIN();
		static jint TX_POWER_HIGH();
		static jint TX_POWER_LOW();
		static jint TX_POWER_MAX();
		static jint TX_POWER_MEDIUM();
		static jint TX_POWER_MIN();
		static jint TX_POWER_ULTRA_LOW();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AdvertisingSetParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdvertisingSetParameters(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getInterval() const;
		jint getPrimaryPhy() const;
		jint getSecondaryPhy() const;
		jint getTxPowerLevel() const;
		jboolean includeTxPower() const;
		jboolean isAnonymous() const;
		jboolean isConnectable() const;
		jboolean isLegacy() const;
		jboolean isScannable() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth::le

