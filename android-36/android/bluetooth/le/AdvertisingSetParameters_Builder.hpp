#pragma once

#include "./AdvertisingSetParameters.def.hpp"
#include "./AdvertisingSetParameters_Builder.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// Constructors
	inline AdvertisingSetParameters_Builder::AdvertisingSetParameters_Builder()
		: JObject(
			"android.bluetooth.le.AdvertisingSetParameters$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::bluetooth::le::AdvertisingSetParameters AdvertisingSetParameters_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/AdvertisingSetParameters;"
		);
	}
	inline android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setAnonymous(jboolean arg0) const
	{
		return callObjectMethod(
			"setAnonymous",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setConnectable(jboolean arg0) const
	{
		return callObjectMethod(
			"setConnectable",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setDiscoverable(jboolean arg0) const
	{
		return callObjectMethod(
			"setDiscoverable",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setIncludeTxPower(jboolean arg0) const
	{
		return callObjectMethod(
			"setIncludeTxPower",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setInterval(jint arg0) const
	{
		return callObjectMethod(
			"setInterval",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setLegacyMode(jboolean arg0) const
	{
		return callObjectMethod(
			"setLegacyMode",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setPrimaryPhy(jint arg0) const
	{
		return callObjectMethod(
			"setPrimaryPhy",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setScannable(jboolean arg0) const
	{
		return callObjectMethod(
			"setScannable",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setSecondaryPhy(jint arg0) const
	{
		return callObjectMethod(
			"setSecondaryPhy",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setTxPowerLevel(jint arg0) const
	{
		return callObjectMethod(
			"setTxPowerLevel",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth::le;
#endif
