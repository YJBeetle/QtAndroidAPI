#pragma once

#include "../../../JObject.hpp"

namespace android::bluetooth::le
{
	class AdvertisingSetParameters;
}

namespace android::bluetooth::le
{
	class AdvertisingSetParameters_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AdvertisingSetParameters_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdvertisingSetParameters_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AdvertisingSetParameters_Builder();
		
		// Methods
		android::bluetooth::le::AdvertisingSetParameters build() const;
		android::bluetooth::le::AdvertisingSetParameters_Builder setAnonymous(jboolean arg0) const;
		android::bluetooth::le::AdvertisingSetParameters_Builder setConnectable(jboolean arg0) const;
		android::bluetooth::le::AdvertisingSetParameters_Builder setIncludeTxPower(jboolean arg0) const;
		android::bluetooth::le::AdvertisingSetParameters_Builder setInterval(jint arg0) const;
		android::bluetooth::le::AdvertisingSetParameters_Builder setLegacyMode(jboolean arg0) const;
		android::bluetooth::le::AdvertisingSetParameters_Builder setPrimaryPhy(jint arg0) const;
		android::bluetooth::le::AdvertisingSetParameters_Builder setScannable(jboolean arg0) const;
		android::bluetooth::le::AdvertisingSetParameters_Builder setSecondaryPhy(jint arg0) const;
		android::bluetooth::le::AdvertisingSetParameters_Builder setTxPowerLevel(jint arg0) const;
	};
} // namespace android::bluetooth::le

