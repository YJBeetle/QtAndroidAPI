#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "./ConsumerIrManager.hpp"

namespace android::hardware
{
	// Fields
	
	// QAndroidJniObject forward
	ConsumerIrManager::ConsumerIrManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JArray ConsumerIrManager::getCarrierFrequencies()
	{
		return callObjectMethod(
			"getCarrierFrequencies",
			"()[Landroid/hardware/ConsumerIrManager$CarrierFrequencyRange;"
		);
	}
	jboolean ConsumerIrManager::hasIrEmitter()
	{
		return callMethod<jboolean>(
			"hasIrEmitter",
			"()Z"
		);
	}
	void ConsumerIrManager::transmit(jint arg0, JIntArray arg1)
	{
		callMethod<void>(
			"transmit",
			"(I[I)V",
			arg0,
			arg1.object<jintArray>()
		);
	}
} // namespace android::hardware

