#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AudioEffect.hpp"

namespace android::media::audiofx
{
	class Equalizer_Settings;
}

namespace android::media::audiofx
{
	class Equalizer : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		static jint PARAM_BAND_FREQ_RANGE();
		static jint PARAM_BAND_LEVEL();
		static jint PARAM_CENTER_FREQ();
		static jint PARAM_CURRENT_PRESET();
		static jint PARAM_GET_BAND();
		static jint PARAM_GET_NUM_OF_PRESETS();
		static jint PARAM_GET_PRESET_NAME();
		static jint PARAM_LEVEL_RANGE();
		static jint PARAM_NUM_BANDS();
		static jint PARAM_STRING_SIZE_MAX();
		
		Equalizer(QAndroidJniObject obj);
		// Constructors
		Equalizer(jint &arg0, jint &arg1);
		Equalizer() = default;
		
		// Methods
		jshort getBand(jint arg0);
		jintArray getBandFreqRange(jshort arg0);
		jshort getBandLevel(jshort arg0);
		jshortArray getBandLevelRange();
		jint getCenterFreq(jshort arg0);
		jshort getCurrentPreset();
		jshort getNumberOfBands();
		jshort getNumberOfPresets();
		jstring getPresetName(jshort arg0);
		QAndroidJniObject getProperties();
		void setBandLevel(jshort arg0, jshort arg1);
		void setParameterListener(__JniBaseClass arg0);
		void setProperties(android::media::audiofx::Equalizer_Settings arg0);
		void usePreset(jshort arg0);
	};
} // namespace android::media::audiofx

