#include "./PeriodicAdvertisingParameters.hpp"
#include "./PeriodicAdvertisingParameters_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QJniObject forward
	PeriodicAdvertisingParameters_Builder::PeriodicAdvertisingParameters_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PeriodicAdvertisingParameters_Builder::PeriodicAdvertisingParameters_Builder()
		: __JniBaseClass(
			"android.bluetooth.le.PeriodicAdvertisingParameters$Builder",
			"()V"
		) {}
	
	// Methods
	android::bluetooth::le::PeriodicAdvertisingParameters PeriodicAdvertisingParameters_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/PeriodicAdvertisingParameters;"
		);
	}
	android::bluetooth::le::PeriodicAdvertisingParameters_Builder PeriodicAdvertisingParameters_Builder::setIncludeTxPower(jboolean arg0)
	{
		return callObjectMethod(
			"setIncludeTxPower",
			"(Z)Landroid/bluetooth/le/PeriodicAdvertisingParameters$Builder;",
			arg0
		);
	}
	android::bluetooth::le::PeriodicAdvertisingParameters_Builder PeriodicAdvertisingParameters_Builder::setInterval(jint arg0)
	{
		return callObjectMethod(
			"setInterval",
			"(I)Landroid/bluetooth/le/PeriodicAdvertisingParameters$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

