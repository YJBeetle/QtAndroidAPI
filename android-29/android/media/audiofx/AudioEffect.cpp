#include "./AudioEffect_Descriptor.hpp"
#include "../../../java/util/UUID.hpp"
#include "./AudioEffect.hpp"

namespace android::media::audiofx
{
	// Fields
	jstring AudioEffect::ACTION_CLOSE_AUDIO_EFFECT_CONTROL_SESSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"ACTION_CLOSE_AUDIO_EFFECT_CONTROL_SESSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect::ACTION_DISPLAY_AUDIO_EFFECT_CONTROL_PANEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"ACTION_DISPLAY_AUDIO_EFFECT_CONTROL_PANEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect::ACTION_OPEN_AUDIO_EFFECT_CONTROL_SESSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"ACTION_OPEN_AUDIO_EFFECT_CONTROL_SESSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AudioEffect::ALREADY_EXISTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ALREADY_EXISTS"
		);
	}
	jint AudioEffect::CONTENT_TYPE_GAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"CONTENT_TYPE_GAME"
		);
	}
	jint AudioEffect::CONTENT_TYPE_MOVIE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"CONTENT_TYPE_MOVIE"
		);
	}
	jint AudioEffect::CONTENT_TYPE_MUSIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"CONTENT_TYPE_MUSIC"
		);
	}
	jint AudioEffect::CONTENT_TYPE_VOICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"CONTENT_TYPE_VOICE"
		);
	}
	jstring AudioEffect::EFFECT_AUXILIARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_AUXILIARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect::EFFECT_INSERT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_INSERT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AudioEffect::EFFECT_TYPE_AEC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_AEC",
			"Ljava/util/UUID;"
		);
	}
	QAndroidJniObject AudioEffect::EFFECT_TYPE_AGC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_AGC",
			"Ljava/util/UUID;"
		);
	}
	QAndroidJniObject AudioEffect::EFFECT_TYPE_BASS_BOOST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_BASS_BOOST",
			"Ljava/util/UUID;"
		);
	}
	QAndroidJniObject AudioEffect::EFFECT_TYPE_DYNAMICS_PROCESSING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_DYNAMICS_PROCESSING",
			"Ljava/util/UUID;"
		);
	}
	QAndroidJniObject AudioEffect::EFFECT_TYPE_ENV_REVERB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_ENV_REVERB",
			"Ljava/util/UUID;"
		);
	}
	QAndroidJniObject AudioEffect::EFFECT_TYPE_EQUALIZER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_EQUALIZER",
			"Ljava/util/UUID;"
		);
	}
	QAndroidJniObject AudioEffect::EFFECT_TYPE_LOUDNESS_ENHANCER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_LOUDNESS_ENHANCER",
			"Ljava/util/UUID;"
		);
	}
	QAndroidJniObject AudioEffect::EFFECT_TYPE_NS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_NS",
			"Ljava/util/UUID;"
		);
	}
	QAndroidJniObject AudioEffect::EFFECT_TYPE_PRESET_REVERB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_PRESET_REVERB",
			"Ljava/util/UUID;"
		);
	}
	QAndroidJniObject AudioEffect::EFFECT_TYPE_VIRTUALIZER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_VIRTUALIZER",
			"Ljava/util/UUID;"
		);
	}
	jint AudioEffect::ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR"
		);
	}
	jint AudioEffect::ERROR_BAD_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR_BAD_VALUE"
		);
	}
	jint AudioEffect::ERROR_DEAD_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR_DEAD_OBJECT"
		);
	}
	jint AudioEffect::ERROR_INVALID_OPERATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR_INVALID_OPERATION"
		);
	}
	jint AudioEffect::ERROR_NO_INIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR_NO_INIT"
		);
	}
	jint AudioEffect::ERROR_NO_MEMORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR_NO_MEMORY"
		);
	}
	jstring AudioEffect::EXTRA_AUDIO_SESSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EXTRA_AUDIO_SESSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect::EXTRA_CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EXTRA_CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect::EXTRA_PACKAGE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AudioEffect::SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"SUCCESS"
		);
	}
	
	AudioEffect::AudioEffect(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jarray AudioEffect::queryEffects()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.audiofx.AudioEffect",
			"queryEffects",
			"()[Landroid/media/audiofx/AudioEffect$Descriptor;"
		).object<jarray>();
	}
	QAndroidJniObject AudioEffect::getDescriptor()
	{
		return __thiz.callObjectMethod(
			"getDescriptor",
			"()Landroid/media/audiofx/AudioEffect$Descriptor;"
		);
	}
	jboolean AudioEffect::getEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"getEnabled",
			"()Z"
		);
	}
	jint AudioEffect::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jboolean AudioEffect::hasControl()
	{
		return __thiz.callMethod<jboolean>(
			"hasControl",
			"()Z"
		);
	}
	void AudioEffect::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void AudioEffect::setControlStatusListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setControlStatusListener",
			"(Landroid/media/audiofx/AudioEffect$OnControlStatusChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioEffect::setEnableStatusListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEnableStatusListener",
			"(Landroid/media/audiofx/AudioEffect$OnEnableStatusChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	jint AudioEffect::setEnabled(jboolean arg0)
	{
		return __thiz.callMethod<jint>(
			"setEnabled",
			"(Z)I",
			arg0
		);
	}
} // namespace android::media::audiofx

