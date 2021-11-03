#pragma once

#include "./AudioEffect.hpp"

namespace android::media::audiofx
{
	class EnvironmentalReverb_Settings;
}

namespace android::media::audiofx
{
	class EnvironmentalReverb : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		static jint PARAM_DECAY_HF_RATIO();
		static jint PARAM_DECAY_TIME();
		static jint PARAM_DENSITY();
		static jint PARAM_DIFFUSION();
		static jint PARAM_REFLECTIONS_DELAY();
		static jint PARAM_REFLECTIONS_LEVEL();
		static jint PARAM_REVERB_DELAY();
		static jint PARAM_REVERB_LEVEL();
		static jint PARAM_ROOM_HF_LEVEL();
		static jint PARAM_ROOM_LEVEL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EnvironmentalReverb(const char *className, const char *sig, Ts...agv) : android::media::audiofx::AudioEffect(className, sig, std::forward<Ts>(agv)...) {}
		EnvironmentalReverb(QAndroidJniObject obj);
		
		// Constructors
		EnvironmentalReverb(jint arg0, jint arg1);
		
		// Methods
		jshort getDecayHFRatio() const;
		jint getDecayTime() const;
		jshort getDensity() const;
		jshort getDiffusion() const;
		android::media::audiofx::EnvironmentalReverb_Settings getProperties() const;
		jint getReflectionsDelay() const;
		jshort getReflectionsLevel() const;
		jint getReverbDelay() const;
		jshort getReverbLevel() const;
		jshort getRoomHFLevel() const;
		jshort getRoomLevel() const;
		void setDecayHFRatio(jshort arg0) const;
		void setDecayTime(jint arg0) const;
		void setDensity(jshort arg0) const;
		void setDiffusion(jshort arg0) const;
		void setParameterListener(JObject arg0) const;
		void setProperties(android::media::audiofx::EnvironmentalReverb_Settings arg0) const;
		void setReflectionsDelay(jint arg0) const;
		void setReflectionsLevel(jshort arg0) const;
		void setReverbDelay(jint arg0) const;
		void setReverbLevel(jshort arg0) const;
		void setRoomHFLevel(jshort arg0) const;
		void setRoomLevel(jshort arg0) const;
	};
} // namespace android::media::audiofx

