#include "./ConsumerIrManager.hpp"
#include "./ConsumerIrManager_CarrierFrequencyRange.hpp"

namespace android::hardware
{
	// Fields
	
	ConsumerIrManager_CarrierFrequencyRange::ConsumerIrManager_CarrierFrequencyRange(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConsumerIrManager_CarrierFrequencyRange::ConsumerIrManager_CarrierFrequencyRange(android::hardware::ConsumerIrManager arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.ConsumerIrManager$CarrierFrequencyRange",
			"(Landroid/hardware/ConsumerIrManager;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	jint ConsumerIrManager_CarrierFrequencyRange::getMaxFrequency()
	{
		return __thiz.callMethod<jint>(
			"getMaxFrequency",
			"()I"
		);
	}
	jint ConsumerIrManager_CarrierFrequencyRange::getMinFrequency()
	{
		return __thiz.callMethod<jint>(
			"getMinFrequency",
			"()I"
		);
	}
} // namespace android::hardware

