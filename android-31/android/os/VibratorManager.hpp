#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class CombinedVibration;
}
namespace android::os
{
	class VibrationAttributes;
}
namespace android::os
{
	class Vibrator;
}

namespace android::os
{
	class VibratorManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VibratorManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VibratorManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void cancel();
		android::os::Vibrator getDefaultVibrator();
		android::os::Vibrator getVibrator(jint arg0);
		jintArray getVibratorIds();
		void vibrate(android::os::CombinedVibration arg0);
		void vibrate(android::os::CombinedVibration arg0, android::os::VibrationAttributes arg1);
	};
} // namespace android::os

