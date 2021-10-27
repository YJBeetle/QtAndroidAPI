#include "./AdvertisingSetParameters.hpp"
#include "./AdvertisingSetParameters_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	AdvertisingSetParameters_Builder::AdvertisingSetParameters_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AdvertisingSetParameters_Builder::AdvertisingSetParameters_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.AdvertisingSetParameters$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AdvertisingSetParameters_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/AdvertisingSetParameters;"
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setAnonymous(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAnonymous",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setConnectable(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setConnectable",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setIncludeTxPower(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIncludeTxPower",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setInterval(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setInterval",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setLegacyMode(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setLegacyMode",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setPrimaryPhy(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setPrimaryPhy",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setScannable(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setScannable",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setSecondaryPhy(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSecondaryPhy",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setTxPowerLevel(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTxPowerLevel",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

