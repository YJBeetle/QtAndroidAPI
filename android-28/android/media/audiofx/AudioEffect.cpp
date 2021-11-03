#include "./AudioEffect_Descriptor.hpp"
#include "../../../java/util/UUID.hpp"
#include "./AudioEffect.hpp"

namespace android::media::audiofx
{
	// Fields
	jstring AudioEffect::ACTION_CLOSE_AUDIO_EFFECT_CONTROL_SESSION()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"ACTION_CLOSE_AUDIO_EFFECT_CONTROL_SESSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect::ACTION_DISPLAY_AUDIO_EFFECT_CONTROL_PANEL()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"ACTION_DISPLAY_AUDIO_EFFECT_CONTROL_PANEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect::ACTION_OPEN_AUDIO_EFFECT_CONTROL_SESSION()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"ACTION_OPEN_AUDIO_EFFECT_CONTROL_SESSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AudioEffect::ALREADY_EXISTS()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ALREADY_EXISTS"
		);
	}
	jint AudioEffect::CONTENT_TYPE_GAME()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"CONTENT_TYPE_GAME"
		);
	}
	jint AudioEffect::CONTENT_TYPE_MOVIE()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"CONTENT_TYPE_MOVIE"
		);
	}
	jint AudioEffect::CONTENT_TYPE_MUSIC()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"CONTENT_TYPE_MUSIC"
		);
	}
	jint AudioEffect::CONTENT_TYPE_VOICE()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"CONTENT_TYPE_VOICE"
		);
	}
	jstring AudioEffect::EFFECT_AUXILIARY()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_AUXILIARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect::EFFECT_INSERT()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_INSERT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::UUID AudioEffect::EFFECT_TYPE_AEC()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_AEC",
			"Ljava/util/UUID;"
		);
	}
	java::util::UUID AudioEffect::EFFECT_TYPE_AGC()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_AGC",
			"Ljava/util/UUID;"
		);
	}
	java::util::UUID AudioEffect::EFFECT_TYPE_BASS_BOOST()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_BASS_BOOST",
			"Ljava/util/UUID;"
		);
	}
	java::util::UUID AudioEffect::EFFECT_TYPE_DYNAMICS_PROCESSING()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_DYNAMICS_PROCESSING",
			"Ljava/util/UUID;"
		);
	}
	java::util::UUID AudioEffect::EFFECT_TYPE_ENV_REVERB()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_ENV_REVERB",
			"Ljava/util/UUID;"
		);
	}
	java::util::UUID AudioEffect::EFFECT_TYPE_EQUALIZER()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_EQUALIZER",
			"Ljava/util/UUID;"
		);
	}
	java::util::UUID AudioEffect::EFFECT_TYPE_LOUDNESS_ENHANCER()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_LOUDNESS_ENHANCER",
			"Ljava/util/UUID;"
		);
	}
	java::util::UUID AudioEffect::EFFECT_TYPE_NS()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_NS",
			"Ljava/util/UUID;"
		);
	}
	java::util::UUID AudioEffect::EFFECT_TYPE_PRESET_REVERB()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_PRESET_REVERB",
			"Ljava/util/UUID;"
		);
	}
	java::util::UUID AudioEffect::EFFECT_TYPE_VIRTUALIZER()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_VIRTUALIZER",
			"Ljava/util/UUID;"
		);
	}
	jint AudioEffect::ERROR()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR"
		);
	}
	jint AudioEffect::ERROR_BAD_VALUE()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR_BAD_VALUE"
		);
	}
	jint AudioEffect::ERROR_DEAD_OBJECT()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR_DEAD_OBJECT"
		);
	}
	jint AudioEffect::ERROR_INVALID_OPERATION()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR_INVALID_OPERATION"
		);
	}
	jint AudioEffect::ERROR_NO_INIT()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR_NO_INIT"
		);
	}
	jint AudioEffect::ERROR_NO_MEMORY()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR_NO_MEMORY"
		);
	}
	jstring AudioEffect::EXTRA_AUDIO_SESSION()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EXTRA_AUDIO_SESSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect::EXTRA_CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EXTRA_CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect::EXTRA_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AudioEffect::SUCCESS()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"SUCCESS"
		);
	}
	
	// QJniObject forward
	AudioEffect::AudioEffect(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jarray AudioEffect::queryEffects()
	{
		return callStaticObjectMethod(
			"android.media.audiofx.AudioEffect",
			"queryEffects",
			"()[Landroid/media/audiofx/AudioEffect$Descriptor;"
		).object<jarray>();
	}
	android::media::audiofx::AudioEffect_Descriptor AudioEffect::getDescriptor()
	{
		return callObjectMethod(
			"getDescriptor",
			"()Landroid/media/audiofx/AudioEffect$Descriptor;"
		);
	}
	jboolean AudioEffect::getEnabled()
	{
		return callMethod<jboolean>(
			"getEnabled",
			"()Z"
		);
	}
	jint AudioEffect::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jboolean AudioEffect::hasControl()
	{
		return callMethod<jboolean>(
			"hasControl",
			"()Z"
		);
	}
	void AudioEffect::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void AudioEffect::setControlStatusListener(JObject arg0)
	{
		callMethod<void>(
			"setControlStatusListener",
			"(Landroid/media/audiofx/AudioEffect$OnControlStatusChangeListener;)V",
			arg0.object()
		);
	}
	void AudioEffect::setEnableStatusListener(JObject arg0)
	{
		callMethod<void>(
			"setEnableStatusListener",
			"(Landroid/media/audiofx/AudioEffect$OnEnableStatusChangeListener;)V",
			arg0.object()
		);
	}
	jint AudioEffect::setEnabled(jboolean arg0)
	{
		return callMethod<jint>(
			"setEnabled",
			"(Z)I",
			arg0
		);
	}
} // namespace android::media::audiofx

