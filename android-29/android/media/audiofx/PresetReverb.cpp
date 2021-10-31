#include "./PresetReverb_Settings.hpp"
#include "./PresetReverb.hpp"

namespace android::media::audiofx
{
	// Fields
	jint PresetReverb::PARAM_PRESET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.PresetReverb",
			"PARAM_PRESET"
		);
	}
	jshort PresetReverb::PRESET_LARGEHALL()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_LARGEHALL"
		);
	}
	jshort PresetReverb::PRESET_LARGEROOM()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_LARGEROOM"
		);
	}
	jshort PresetReverb::PRESET_MEDIUMHALL()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_MEDIUMHALL"
		);
	}
	jshort PresetReverb::PRESET_MEDIUMROOM()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_MEDIUMROOM"
		);
	}
	jshort PresetReverb::PRESET_NONE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_NONE"
		);
	}
	jshort PresetReverb::PRESET_PLATE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_PLATE"
		);
	}
	jshort PresetReverb::PRESET_SMALLROOM()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_SMALLROOM"
		);
	}
	
	// QAndroidJniObject forward
	PresetReverb::PresetReverb(QAndroidJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
	
	// Constructors
	PresetReverb::PresetReverb(jint arg0, jint arg1)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.PresetReverb",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jshort PresetReverb::getPreset()
	{
		return callMethod<jshort>(
			"getPreset",
			"()S"
		);
	}
	android::media::audiofx::PresetReverb_Settings PresetReverb::getProperties()
	{
		return callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/PresetReverb$Settings;"
		);
	}
	void PresetReverb::setParameterListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/PresetReverb$OnParameterChangeListener;)V",
			arg0.object()
		);
	}
	void PresetReverb::setPreset(jshort arg0)
	{
		callMethod<void>(
			"setPreset",
			"(S)V",
			arg0
		);
	}
	void PresetReverb::setProperties(android::media::audiofx::PresetReverb_Settings arg0)
	{
		callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/PresetReverb$Settings;)V",
			arg0.object()
		);
	}
} // namespace android::media::audiofx

