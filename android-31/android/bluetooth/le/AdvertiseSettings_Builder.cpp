#include "./AdvertiseSettings.hpp"
#include "./AdvertiseSettings_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// Constructors
	AdvertiseSettings_Builder::AdvertiseSettings_Builder()
		: JObject(
			"android.bluetooth.le.AdvertiseSettings$Builder",
			"()V"
		) {}
	
	// Methods
	android::bluetooth::le::AdvertiseSettings AdvertiseSettings_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/AdvertiseSettings;"
		);
	}
	android::bluetooth::le::AdvertiseSettings_Builder AdvertiseSettings_Builder::setAdvertiseMode(jint arg0) const
	{
		return callObjectMethod(
			"setAdvertiseMode",
			"(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
	android::bluetooth::le::AdvertiseSettings_Builder AdvertiseSettings_Builder::setConnectable(jboolean arg0) const
	{
		return callObjectMethod(
			"setConnectable",
			"(Z)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
	android::bluetooth::le::AdvertiseSettings_Builder AdvertiseSettings_Builder::setTimeout(jint arg0) const
	{
		return callObjectMethod(
			"setTimeout",
			"(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
	android::bluetooth::le::AdvertiseSettings_Builder AdvertiseSettings_Builder::setTxPowerLevel(jint arg0) const
	{
		return callObjectMethod(
			"setTxPowerLevel",
			"(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

