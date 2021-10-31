#include "./AdvertiseSettings.hpp"
#include "./AdvertiseSettings_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QJniObject forward
	AdvertiseSettings_Builder::AdvertiseSettings_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AdvertiseSettings_Builder::AdvertiseSettings_Builder()
		: __JniBaseClass(
			"android.bluetooth.le.AdvertiseSettings$Builder",
			"()V"
		) {}
	
	// Methods
	android::bluetooth::le::AdvertiseSettings AdvertiseSettings_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/AdvertiseSettings;"
		);
	}
	android::bluetooth::le::AdvertiseSettings_Builder AdvertiseSettings_Builder::setAdvertiseMode(jint arg0)
	{
		return callObjectMethod(
			"setAdvertiseMode",
			"(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
	android::bluetooth::le::AdvertiseSettings_Builder AdvertiseSettings_Builder::setConnectable(jboolean arg0)
	{
		return callObjectMethod(
			"setConnectable",
			"(Z)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
	android::bluetooth::le::AdvertiseSettings_Builder AdvertiseSettings_Builder::setTimeout(jint arg0)
	{
		return callObjectMethod(
			"setTimeout",
			"(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
	android::bluetooth::le::AdvertiseSettings_Builder AdvertiseSettings_Builder::setTxPowerLevel(jint arg0)
	{
		return callObjectMethod(
			"setTxPowerLevel",
			"(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

