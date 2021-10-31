#pragma once

#include "../../../__JniBaseClass.hpp"
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
		
		EnvironmentalReverb(QAndroidJniObject obj);
		// Constructors
		EnvironmentalReverb(jint arg0, jint arg1);
		EnvironmentalReverb() = default;
		
		// Methods
		jshort getDecayHFRatio();
		jint getDecayTime();
		jshort getDensity();
		jshort getDiffusion();
		QAndroidJniObject getProperties();
		jint getReflectionsDelay();
		jshort getReflectionsLevel();
		jint getReverbDelay();
		jshort getReverbLevel();
		jshort getRoomHFLevel();
		jshort getRoomLevel();
		void setDecayHFRatio(jshort arg0);
		void setDecayTime(jint arg0);
		void setDensity(jshort arg0);
		void setDiffusion(jshort arg0);
		void setParameterListener(__JniBaseClass arg0);
		void setProperties(android::media::audiofx::EnvironmentalReverb_Settings arg0);
		void setReflectionsDelay(jint arg0);
		void setReflectionsLevel(jshort arg0);
		void setReverbDelay(jint arg0);
		void setReverbLevel(jshort arg0);
		void setRoomHFLevel(jshort arg0);
		void setRoomLevel(jshort arg0);
	};
} // namespace android::media::audiofx

