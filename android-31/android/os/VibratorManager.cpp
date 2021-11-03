#include "./CombinedVibration.hpp"
#include "./VibrationAttributes.hpp"
#include "./Vibrator.hpp"
#include "./VibratorManager.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	VibratorManager::VibratorManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void VibratorManager::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	android::os::Vibrator VibratorManager::getDefaultVibrator()
	{
		return callObjectMethod(
			"getDefaultVibrator",
			"()Landroid/os/Vibrator;"
		);
	}
	android::os::Vibrator VibratorManager::getVibrator(jint arg0)
	{
		return callObjectMethod(
			"getVibrator",
			"(I)Landroid/os/Vibrator;",
			arg0
		);
	}
	jintArray VibratorManager::getVibratorIds()
	{
		return callObjectMethod(
			"getVibratorIds",
			"()[I"
		).object<jintArray>();
	}
	void VibratorManager::vibrate(android::os::CombinedVibration arg0)
	{
		callMethod<void>(
			"vibrate",
			"(Landroid/os/CombinedVibration;)V",
			arg0.object()
		);
	}
	void VibratorManager::vibrate(android::os::CombinedVibration arg0, android::os::VibrationAttributes arg1)
	{
		callMethod<void>(
			"vibrate",
			"(Landroid/os/CombinedVibration;Landroid/os/VibrationAttributes;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::os

