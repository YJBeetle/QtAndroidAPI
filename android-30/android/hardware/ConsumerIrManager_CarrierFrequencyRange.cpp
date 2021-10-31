#include "./ConsumerIrManager.hpp"
#include "./ConsumerIrManager_CarrierFrequencyRange.hpp"

namespace android::hardware
{
	// Fields
	
	// QAndroidJniObject forward
	ConsumerIrManager_CarrierFrequencyRange::ConsumerIrManager_CarrierFrequencyRange(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ConsumerIrManager_CarrierFrequencyRange::ConsumerIrManager_CarrierFrequencyRange(android::hardware::ConsumerIrManager arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.hardware.ConsumerIrManager$CarrierFrequencyRange",
			"(Landroid/hardware/ConsumerIrManager;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	jint ConsumerIrManager_CarrierFrequencyRange::getMaxFrequency()
	{
		return callMethod<jint>(
			"getMaxFrequency",
			"()I"
		);
	}
	jint ConsumerIrManager_CarrierFrequencyRange::getMinFrequency()
	{
		return callMethod<jint>(
			"getMinFrequency",
			"()I"
		);
	}
} // namespace android::hardware

