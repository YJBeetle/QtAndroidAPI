#include "./Equalizer_Settings.hpp"
#include "./Equalizer.hpp"

namespace android::media::audiofx
{
	// Fields
	jint Equalizer::PARAM_BAND_FREQ_RANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_BAND_FREQ_RANGE"
		);
	}
	jint Equalizer::PARAM_BAND_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_BAND_LEVEL"
		);
	}
	jint Equalizer::PARAM_CENTER_FREQ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_CENTER_FREQ"
		);
	}
	jint Equalizer::PARAM_CURRENT_PRESET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_CURRENT_PRESET"
		);
	}
	jint Equalizer::PARAM_GET_BAND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_GET_BAND"
		);
	}
	jint Equalizer::PARAM_GET_NUM_OF_PRESETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_GET_NUM_OF_PRESETS"
		);
	}
	jint Equalizer::PARAM_GET_PRESET_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_GET_PRESET_NAME"
		);
	}
	jint Equalizer::PARAM_LEVEL_RANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_LEVEL_RANGE"
		);
	}
	jint Equalizer::PARAM_NUM_BANDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_NUM_BANDS"
		);
	}
	jint Equalizer::PARAM_STRING_SIZE_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_STRING_SIZE_MAX"
		);
	}
	
	// QAndroidJniObject forward
	Equalizer::Equalizer(QAndroidJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
	
	// Constructors
	Equalizer::Equalizer(jint arg0, jint arg1)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.Equalizer",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jshort Equalizer::getBand(jint arg0)
	{
		return callMethod<jshort>(
			"getBand",
			"(I)S",
			arg0
		);
	}
	jintArray Equalizer::getBandFreqRange(jshort arg0)
	{
		return callObjectMethod(
			"getBandFreqRange",
			"(S)[I",
			arg0
		).object<jintArray>();
	}
	jshort Equalizer::getBandLevel(jshort arg0)
	{
		return callMethod<jshort>(
			"getBandLevel",
			"(S)S",
			arg0
		);
	}
	jshortArray Equalizer::getBandLevelRange()
	{
		return callObjectMethod(
			"getBandLevelRange",
			"()[S"
		).object<jshortArray>();
	}
	jint Equalizer::getCenterFreq(jshort arg0)
	{
		return callMethod<jint>(
			"getCenterFreq",
			"(S)I",
			arg0
		);
	}
	jshort Equalizer::getCurrentPreset()
	{
		return callMethod<jshort>(
			"getCurrentPreset",
			"()S"
		);
	}
	jshort Equalizer::getNumberOfBands()
	{
		return callMethod<jshort>(
			"getNumberOfBands",
			"()S"
		);
	}
	jshort Equalizer::getNumberOfPresets()
	{
		return callMethod<jshort>(
			"getNumberOfPresets",
			"()S"
		);
	}
	jstring Equalizer::getPresetName(jshort arg0)
	{
		return callObjectMethod(
			"getPresetName",
			"(S)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::media::audiofx::Equalizer_Settings Equalizer::getProperties()
	{
		return callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/Equalizer$Settings;"
		);
	}
	void Equalizer::setBandLevel(jshort arg0, jshort arg1)
	{
		callMethod<void>(
			"setBandLevel",
			"(SS)V",
			arg0,
			arg1
		);
	}
	void Equalizer::setParameterListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/Equalizer$OnParameterChangeListener;)V",
			arg0.object()
		);
	}
	void Equalizer::setProperties(android::media::audiofx::Equalizer_Settings arg0)
	{
		callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/Equalizer$Settings;)V",
			arg0.object()
		);
	}
	void Equalizer::usePreset(jshort arg0)
	{
		callMethod<void>(
			"usePreset",
			"(S)V",
			arg0
		);
	}
} // namespace android::media::audiofx

