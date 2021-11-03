#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "./ConsumerIrManager.hpp"

namespace android::hardware
{
	// Fields
	
	// QJniObject forward
	ConsumerIrManager::ConsumerIrManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JArray ConsumerIrManager::getCarrierFrequencies() const
	{
		return callObjectMethod(
			"getCarrierFrequencies",
			"()[Landroid/hardware/ConsumerIrManager$CarrierFrequencyRange;"
		);
	}
	jboolean ConsumerIrManager::hasIrEmitter() const
	{
		return callMethod<jboolean>(
			"hasIrEmitter",
			"()Z"
		);
	}
	void ConsumerIrManager::transmit(jint arg0, JIntArray arg1) const
	{
		callMethod<void>(
			"transmit",
			"(I[I)V",
			arg0,
			arg1.object<jintArray>()
		);
	}
} // namespace android::hardware

