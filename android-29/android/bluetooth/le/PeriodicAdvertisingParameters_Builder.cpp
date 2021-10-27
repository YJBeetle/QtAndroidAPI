#include "./PeriodicAdvertisingParameters.hpp"
#include "./PeriodicAdvertisingParameters_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	PeriodicAdvertisingParameters_Builder::PeriodicAdvertisingParameters_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PeriodicAdvertisingParameters_Builder::PeriodicAdvertisingParameters_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.PeriodicAdvertisingParameters$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject PeriodicAdvertisingParameters_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/PeriodicAdvertisingParameters;"
		);
	}
	QAndroidJniObject PeriodicAdvertisingParameters_Builder::setIncludeTxPower(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIncludeTxPower",
			"(Z)Landroid/bluetooth/le/PeriodicAdvertisingParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject PeriodicAdvertisingParameters_Builder::setInterval(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setInterval",
			"(I)Landroid/bluetooth/le/PeriodicAdvertisingParameters$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

