#include "./AdvertisingSetParameters.hpp"
#include "./AdvertisingSetParameters_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QJniObject forward
	AdvertisingSetParameters_Builder::AdvertisingSetParameters_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AdvertisingSetParameters_Builder::AdvertisingSetParameters_Builder()
		: JObject(
			"android.bluetooth.le.AdvertisingSetParameters$Builder",
			"()V"
		) {}
	
	// Methods
	android::bluetooth::le::AdvertisingSetParameters AdvertisingSetParameters_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/AdvertisingSetParameters;"
		);
	}
	android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setAnonymous(jboolean arg0) const
	{
		return callObjectMethod(
			"setAnonymous",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setConnectable(jboolean arg0) const
	{
		return callObjectMethod(
			"setConnectable",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setIncludeTxPower(jboolean arg0) const
	{
		return callObjectMethod(
			"setIncludeTxPower",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setInterval(jint arg0) const
	{
		return callObjectMethod(
			"setInterval",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setLegacyMode(jboolean arg0) const
	{
		return callObjectMethod(
			"setLegacyMode",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setPrimaryPhy(jint arg0) const
	{
		return callObjectMethod(
			"setPrimaryPhy",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setScannable(jboolean arg0) const
	{
		return callObjectMethod(
			"setScannable",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setSecondaryPhy(jint arg0) const
	{
		return callObjectMethod(
			"setSecondaryPhy",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	android::bluetooth::le::AdvertisingSetParameters_Builder AdvertisingSetParameters_Builder::setTxPowerLevel(jint arg0) const
	{
		return callObjectMethod(
			"setTxPowerLevel",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

