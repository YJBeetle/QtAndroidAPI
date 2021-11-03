#include "./PeriodicAdvertisingParameters.hpp"
#include "./PeriodicAdvertisingParameters_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QAndroidJniObject forward
	PeriodicAdvertisingParameters_Builder::PeriodicAdvertisingParameters_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PeriodicAdvertisingParameters_Builder::PeriodicAdvertisingParameters_Builder()
		: JObject(
			"android.bluetooth.le.PeriodicAdvertisingParameters$Builder",
			"()V"
		) {}
	
	// Methods
	android::bluetooth::le::PeriodicAdvertisingParameters PeriodicAdvertisingParameters_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/PeriodicAdvertisingParameters;"
		);
	}
	android::bluetooth::le::PeriodicAdvertisingParameters_Builder PeriodicAdvertisingParameters_Builder::setIncludeTxPower(jboolean arg0) const
	{
		return callObjectMethod(
			"setIncludeTxPower",
			"(Z)Landroid/bluetooth/le/PeriodicAdvertisingParameters$Builder;",
			arg0
		);
	}
	android::bluetooth::le::PeriodicAdvertisingParameters_Builder PeriodicAdvertisingParameters_Builder::setInterval(jint arg0) const
	{
		return callObjectMethod(
			"setInterval",
			"(I)Landroid/bluetooth/le/PeriodicAdvertisingParameters$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

