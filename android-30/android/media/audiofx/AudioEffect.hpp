#pragma once

#include "../../../JArray.hpp"
#include "./AudioEffect_Descriptor.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/UUID.def.hpp"
#include "./AudioEffect.def.hpp"

namespace android::media::audiofx
{
	// Fields
	inline JString AudioEffect::ACTION_CLOSE_AUDIO_EFFECT_CONTROL_SESSION()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"ACTION_CLOSE_AUDIO_EFFECT_CONTROL_SESSION",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioEffect::ACTION_DISPLAY_AUDIO_EFFECT_CONTROL_PANEL()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"ACTION_DISPLAY_AUDIO_EFFECT_CONTROL_PANEL",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioEffect::ACTION_OPEN_AUDIO_EFFECT_CONTROL_SESSION()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"ACTION_OPEN_AUDIO_EFFECT_CONTROL_SESSION",
			"Ljava/lang/String;"
		);
	}
	inline jint AudioEffect::ALREADY_EXISTS()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ALREADY_EXISTS"
		);
	}
	inline jint AudioEffect::CONTENT_TYPE_GAME()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"CONTENT_TYPE_GAME"
		);
	}
	inline jint AudioEffect::CONTENT_TYPE_MOVIE()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"CONTENT_TYPE_MOVIE"
		);
	}
	inline jint AudioEffect::CONTENT_TYPE_MUSIC()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"CONTENT_TYPE_MUSIC"
		);
	}
	inline jint AudioEffect::CONTENT_TYPE_VOICE()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"CONTENT_TYPE_VOICE"
		);
	}
	inline JString AudioEffect::EFFECT_AUXILIARY()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_AUXILIARY",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioEffect::EFFECT_INSERT()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_INSERT",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioEffect::EFFECT_POST_PROCESSING()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_POST_PROCESSING",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioEffect::EFFECT_PRE_PROCESSING()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_PRE_PROCESSING",
			"Ljava/lang/String;"
		);
	}
	inline java::util::UUID AudioEffect::EFFECT_TYPE_AEC()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_AEC",
			"Ljava/util/UUID;"
		);
	}
	inline java::util::UUID AudioEffect::EFFECT_TYPE_AGC()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_AGC",
			"Ljava/util/UUID;"
		);
	}
	inline java::util::UUID AudioEffect::EFFECT_TYPE_BASS_BOOST()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_BASS_BOOST",
			"Ljava/util/UUID;"
		);
	}
	inline java::util::UUID AudioEffect::EFFECT_TYPE_DYNAMICS_PROCESSING()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_DYNAMICS_PROCESSING",
			"Ljava/util/UUID;"
		);
	}
	inline java::util::UUID AudioEffect::EFFECT_TYPE_ENV_REVERB()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_ENV_REVERB",
			"Ljava/util/UUID;"
		);
	}
	inline java::util::UUID AudioEffect::EFFECT_TYPE_EQUALIZER()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_EQUALIZER",
			"Ljava/util/UUID;"
		);
	}
	inline java::util::UUID AudioEffect::EFFECT_TYPE_LOUDNESS_ENHANCER()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_LOUDNESS_ENHANCER",
			"Ljava/util/UUID;"
		);
	}
	inline java::util::UUID AudioEffect::EFFECT_TYPE_NS()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_NS",
			"Ljava/util/UUID;"
		);
	}
	inline java::util::UUID AudioEffect::EFFECT_TYPE_PRESET_REVERB()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_PRESET_REVERB",
			"Ljava/util/UUID;"
		);
	}
	inline java::util::UUID AudioEffect::EFFECT_TYPE_VIRTUALIZER()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EFFECT_TYPE_VIRTUALIZER",
			"Ljava/util/UUID;"
		);
	}
	inline jint AudioEffect::ERROR()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR"
		);
	}
	inline jint AudioEffect::ERROR_BAD_VALUE()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR_BAD_VALUE"
		);
	}
	inline jint AudioEffect::ERROR_DEAD_OBJECT()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR_DEAD_OBJECT"
		);
	}
	inline jint AudioEffect::ERROR_INVALID_OPERATION()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR_INVALID_OPERATION"
		);
	}
	inline jint AudioEffect::ERROR_NO_INIT()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR_NO_INIT"
		);
	}
	inline jint AudioEffect::ERROR_NO_MEMORY()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"ERROR_NO_MEMORY"
		);
	}
	inline JString AudioEffect::EXTRA_AUDIO_SESSION()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EXTRA_AUDIO_SESSION",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioEffect::EXTRA_CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EXTRA_CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioEffect::EXTRA_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.media.audiofx.AudioEffect",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	inline jint AudioEffect::SUCCESS()
	{
		return getStaticField<jint>(
			"android.media.audiofx.AudioEffect",
			"SUCCESS"
		);
	}
	
	// Constructors
	
	// Methods
	inline JArray AudioEffect::queryEffects()
	{
		return callStaticObjectMethod(
			"android.media.audiofx.AudioEffect",
			"queryEffects",
			"()[Landroid/media/audiofx/AudioEffect$Descriptor;"
		);
	}
	inline android::media::audiofx::AudioEffect_Descriptor AudioEffect::getDescriptor() const
	{
		return callObjectMethod(
			"getDescriptor",
			"()Landroid/media/audiofx/AudioEffect$Descriptor;"
		);
	}
	inline jboolean AudioEffect::getEnabled() const
	{
		return callMethod<jboolean>(
			"getEnabled",
			"()Z"
		);
	}
	inline jint AudioEffect::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jboolean AudioEffect::hasControl() const
	{
		return callMethod<jboolean>(
			"hasControl",
			"()Z"
		);
	}
	inline void AudioEffect::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void AudioEffect::setControlStatusListener(JObject arg0) const
	{
		callMethod<void>(
			"setControlStatusListener",
			"(Landroid/media/audiofx/AudioEffect$OnControlStatusChangeListener;)V",
			arg0.object()
		);
	}
	inline void AudioEffect::setEnableStatusListener(JObject arg0) const
	{
		callMethod<void>(
			"setEnableStatusListener",
			"(Landroid/media/audiofx/AudioEffect$OnEnableStatusChangeListener;)V",
			arg0.object()
		);
	}
	inline jint AudioEffect::setEnabled(jboolean arg0) const
	{
		return callMethod<jint>(
			"setEnabled",
			"(Z)I",
			arg0
		);
	}
} // namespace android::media::audiofx

// Base class headers

