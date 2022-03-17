#pragma once

#include "../../JObject.hpp"

class JLongArray;
namespace android::media
{
	class AudioAttributes;
}
namespace android::os
{
	class VibrationEffect;
}

namespace android::os
{
	class Vibrator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Vibrator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Vibrator(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void cancel() const;
		jboolean hasAmplitudeControl() const;
		jboolean hasVibrator() const;
		void vibrate(android::os::VibrationEffect arg0) const;
		void vibrate(jlong arg0) const;
		void vibrate(JLongArray arg0, jint arg1) const;
		void vibrate(android::os::VibrationEffect arg0, android::media::AudioAttributes arg1) const;
		void vibrate(jlong arg0, android::media::AudioAttributes arg1) const;
		void vibrate(JLongArray arg0, jint arg1, android::media::AudioAttributes arg2) const;
	};
} // namespace android::os

