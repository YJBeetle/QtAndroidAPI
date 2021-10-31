#include "./AdvertisingSetParameters.hpp"
#include "./AdvertisingSetParameters_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QAndroidJniObject forward
	AdvertisingSetParameters_Builder::AdvertisingSetParameters_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AdvertisingSetParameters_Builder::AdvertisingSetParameters_Builder()
		: __JniBaseClass(
			"android.bluetooth.le.AdvertisingSetParameters$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject AdvertisingSetParameters_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/AdvertisingSetParameters;"
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setAnonymous(jboolean arg0)
	{
		return callObjectMethod(
			"setAnonymous",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setConnectable(jboolean arg0)
	{
		return callObjectMethod(
			"setConnectable",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setIncludeTxPower(jboolean arg0)
	{
		return callObjectMethod(
			"setIncludeTxPower",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setInterval(jint arg0)
	{
		return callObjectMethod(
			"setInterval",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setLegacyMode(jboolean arg0)
	{
		return callObjectMethod(
			"setLegacyMode",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setPrimaryPhy(jint arg0)
	{
		return callObjectMethod(
			"setPrimaryPhy",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setScannable(jboolean arg0)
	{
		return callObjectMethod(
			"setScannable",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setSecondaryPhy(jint arg0)
	{
		return callObjectMethod(
			"setSecondaryPhy",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setTxPowerLevel(jint arg0)
	{
		return callObjectMethod(
			"setTxPowerLevel",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

