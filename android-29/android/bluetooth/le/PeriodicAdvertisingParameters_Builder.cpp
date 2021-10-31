#include "./PeriodicAdvertisingParameters.hpp"
#include "./PeriodicAdvertisingParameters_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QAndroidJniObject forward
	PeriodicAdvertisingParameters_Builder::PeriodicAdvertisingParameters_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PeriodicAdvertisingParameters_Builder::PeriodicAdvertisingParameters_Builder()
		: __JniBaseClass(
			"android.bluetooth.le.PeriodicAdvertisingParameters$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject PeriodicAdvertisingParameters_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/PeriodicAdvertisingParameters;"
		);
	}
	QAndroidJniObject PeriodicAdvertisingParameters_Builder::setIncludeTxPower(jboolean arg0)
	{
		return callObjectMethod(
			"setIncludeTxPower",
			"(Z)Landroid/bluetooth/le/PeriodicAdvertisingParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject PeriodicAdvertisingParameters_Builder::setInterval(jint arg0)
	{
		return callObjectMethod(
			"setInterval",
			"(I)Landroid/bluetooth/le/PeriodicAdvertisingParameters$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

