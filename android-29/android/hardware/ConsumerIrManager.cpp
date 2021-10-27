#include "./ConsumerIrManager.hpp"

namespace android::hardware
{
	// Fields
	
	ConsumerIrManager::ConsumerIrManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jarray ConsumerIrManager::getCarrierFrequencies()
	{
		return __thiz.callObjectMethod(
			"getCarrierFrequencies",
			"()[Landroid/hardware/ConsumerIrManager$CarrierFrequencyRange;"
		).object<jarray>();
	}
	jboolean ConsumerIrManager::hasIrEmitter()
	{
		return __thiz.callMethod<jboolean>(
			"hasIrEmitter",
			"()Z"
		);
	}
	void ConsumerIrManager::transmit(jint arg0, jintArray arg1)
	{
		__thiz.callMethod<void>(
			"transmit",
			"(I[I)V",
			arg0,
			arg1
		);
	}
} // namespace android::hardware

