#include "../../JIntArray.hpp"
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
	void VibratorManager::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	android::os::Vibrator VibratorManager::getDefaultVibrator() const
	{
		return callObjectMethod(
			"getDefaultVibrator",
			"()Landroid/os/Vibrator;"
		);
	}
	android::os::Vibrator VibratorManager::getVibrator(jint arg0) const
	{
		return callObjectMethod(
			"getVibrator",
			"(I)Landroid/os/Vibrator;",
			arg0
		);
	}
	JIntArray VibratorManager::getVibratorIds() const
	{
		return callObjectMethod(
			"getVibratorIds",
			"()[I"
		);
	}
	void VibratorManager::vibrate(android::os::CombinedVibration arg0) const
	{
		callMethod<void>(
			"vibrate",
			"(Landroid/os/CombinedVibration;)V",
			arg0.object()
		);
	}
	void VibratorManager::vibrate(android::os::CombinedVibration arg0, android::os::VibrationAttributes arg1) const
	{
		callMethod<void>(
			"vibrate",
			"(Landroid/os/CombinedVibration;Landroid/os/VibrationAttributes;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::os

