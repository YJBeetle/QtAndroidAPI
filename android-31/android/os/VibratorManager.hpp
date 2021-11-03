#pragma once

#include "../../JObject.hpp"

class JIntArray;
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
		void cancel() const;
		android::os::Vibrator getDefaultVibrator() const;
		android::os::Vibrator getVibrator(jint arg0) const;
		JIntArray getVibratorIds() const;
		void vibrate(android::os::CombinedVibration arg0) const;
		void vibrate(android::os::CombinedVibration arg0, android::os::VibrationAttributes arg1) const;
	};
} // namespace android::os

