#pragma once

#include "./AudioEffect.hpp"

class JIntArray;
class JShortArray;
namespace android::media::audiofx
{
	class Equalizer_Settings;
}
class JString;

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Equalizer(const char *className, const char *sig, Ts...agv) : android::media::audiofx::AudioEffect(className, sig, std::forward<Ts>(agv)...) {}
		Equalizer(QAndroidJniObject obj);
		
		// Constructors
		Equalizer(jint arg0, jint arg1);
		
		// Methods
		jshort getBand(jint arg0);
		JIntArray getBandFreqRange(jshort arg0);
		jshort getBandLevel(jshort arg0);
		JShortArray getBandLevelRange();
		jint getCenterFreq(jshort arg0);
		jshort getCurrentPreset();
		jshort getNumberOfBands();
		jshort getNumberOfPresets();
		JString getPresetName(jshort arg0);
		android::media::audiofx::Equalizer_Settings getProperties();
		void setBandLevel(jshort arg0, jshort arg1);
		void setParameterListener(JObject arg0);
		void setProperties(android::media::audiofx::Equalizer_Settings arg0);
		void usePreset(jshort arg0);
	};
} // namespace android::media::audiofx

