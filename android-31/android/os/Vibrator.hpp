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
		
		// QJniObject forward
		template<typename ...Ts> explicit Vibrator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Vibrator(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint areAllEffectsSupported(JIntArray arg0) const;
		jboolean areAllPrimitivesSupported(JIntArray arg0) const;
		JIntArray areEffectsSupported(JIntArray arg0) const;
		JBooleanArray arePrimitivesSupported(JIntArray arg0) const;
		void cancel() const;
		jint getId() const;
		JIntArray getPrimitiveDurations(JIntArray arg0) const;
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

