#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JLongArray;
class JBooleanArray;
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
		static jint VIBRATION_EFFECT_SUPPORT_NO();
		static jint VIBRATION_EFFECT_SUPPORT_UNKNOWN();
		static jint VIBRATION_EFFECT_SUPPORT_YES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Vibrator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Vibrator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint areAllEffectsSupported(JIntArray arg0);
		jboolean areAllPrimitivesSupported(JIntArray arg0);
		JIntArray areEffectsSupported(JIntArray arg0);
		JBooleanArray arePrimitivesSupported(JIntArray arg0);
		void cancel();
		jint getId();
		JIntArray getPrimitiveDurations(JIntArray arg0);
		jboolean hasAmplitudeControl();
		jboolean hasVibrator();
		void vibrate(android::os::VibrationEffect arg0);
		void vibrate(jlong arg0);
		void vibrate(JLongArray arg0, jint arg1);
		void vibrate(android::os::VibrationEffect arg0, android::media::AudioAttributes arg1);
		void vibrate(jlong arg0, android::media::AudioAttributes arg1);
		void vibrate(JLongArray arg0, jint arg1, android::media::AudioAttributes arg2);
	};
} // namespace android::os

