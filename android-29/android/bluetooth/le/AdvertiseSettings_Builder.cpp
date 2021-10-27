#include "./AdvertiseSettings.hpp"
#include "./AdvertiseSettings_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	AdvertiseSettings_Builder::AdvertiseSettings_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AdvertiseSettings_Builder::AdvertiseSettings_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.AdvertiseSettings$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AdvertiseSettings_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/AdvertiseSettings;"
		);
	}
	QAndroidJniObject AdvertiseSettings_Builder::setAdvertiseMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setAdvertiseMode",
			"(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertiseSettings_Builder::setConnectable(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setConnectable",
			"(Z)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertiseSettings_Builder::setTimeout(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTimeout",
			"(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertiseSettings_Builder::setTxPowerLevel(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTxPowerLevel",
			"(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

