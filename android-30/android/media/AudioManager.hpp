#pragma once

#include "../../JArray.hpp"
#include "../app/PendingIntent.def.hpp"
#include "../content/ComponentName.def.hpp"
#include "./AudioAttributes.def.hpp"
#include "./AudioDeviceCallback.def.hpp"
#include "./AudioFocusRequest.def.hpp"
#include "./AudioFormat.def.hpp"
#include "./AudioManager_AudioPlaybackCallback.def.hpp"
#include "./AudioManager_AudioRecordingCallback.def.hpp"
#include "./RemoteControlClient.def.hpp"
#include "./RemoteController.def.hpp"
#include "../os/Handler.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../../JString.hpp"
#include "./AudioManager.def.hpp"

namespace android::media
{
	// Fields
	inline JString AudioManager::ACTION_AUDIO_BECOMING_NOISY()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"ACTION_AUDIO_BECOMING_NOISY",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::ACTION_HDMI_AUDIO_PLUG()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"ACTION_HDMI_AUDIO_PLUG",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::ACTION_HEADSET_PLUG()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"ACTION_HEADSET_PLUG",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::ACTION_MICROPHONE_MUTE_CHANGED()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"ACTION_MICROPHONE_MUTE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::ACTION_SCO_AUDIO_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"ACTION_SCO_AUDIO_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::ACTION_SCO_AUDIO_STATE_UPDATED()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"ACTION_SCO_AUDIO_STATE_UPDATED",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::ACTION_SPEAKERPHONE_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"ACTION_SPEAKERPHONE_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline jint AudioManager::ADJUST_LOWER()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"ADJUST_LOWER"
		);
	}
	inline jint AudioManager::ADJUST_MUTE()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"ADJUST_MUTE"
		);
	}
	inline jint AudioManager::ADJUST_RAISE()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"ADJUST_RAISE"
		);
	}
	inline jint AudioManager::ADJUST_SAME()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"ADJUST_SAME"
		);
	}
	inline jint AudioManager::ADJUST_TOGGLE_MUTE()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"ADJUST_TOGGLE_MUTE"
		);
	}
	inline jint AudioManager::ADJUST_UNMUTE()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"ADJUST_UNMUTE"
		);
	}
	inline jint AudioManager::AUDIOFOCUS_GAIN()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_GAIN"
		);
	}
	inline jint AudioManager::AUDIOFOCUS_GAIN_TRANSIENT()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_GAIN_TRANSIENT"
		);
	}
	inline jint AudioManager::AUDIOFOCUS_GAIN_TRANSIENT_EXCLUSIVE()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_GAIN_TRANSIENT_EXCLUSIVE"
		);
	}
	inline jint AudioManager::AUDIOFOCUS_GAIN_TRANSIENT_MAY_DUCK()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_GAIN_TRANSIENT_MAY_DUCK"
		);
	}
	inline jint AudioManager::AUDIOFOCUS_LOSS()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_LOSS"
		);
	}
	inline jint AudioManager::AUDIOFOCUS_LOSS_TRANSIENT()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_LOSS_TRANSIENT"
		);
	}
	inline jint AudioManager::AUDIOFOCUS_LOSS_TRANSIENT_CAN_DUCK()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_LOSS_TRANSIENT_CAN_DUCK"
		);
	}
	inline jint AudioManager::AUDIOFOCUS_NONE()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_NONE"
		);
	}
	inline jint AudioManager::AUDIOFOCUS_REQUEST_DELAYED()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_REQUEST_DELAYED"
		);
	}
	inline jint AudioManager::AUDIOFOCUS_REQUEST_FAILED()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_REQUEST_FAILED"
		);
	}
	inline jint AudioManager::AUDIOFOCUS_REQUEST_GRANTED()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_REQUEST_GRANTED"
		);
	}
	inline jint AudioManager::AUDIO_SESSION_ID_GENERATE()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIO_SESSION_ID_GENERATE"
		);
	}
	inline jint AudioManager::ERROR()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"ERROR"
		);
	}
	inline jint AudioManager::ERROR_DEAD_OBJECT()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"ERROR_DEAD_OBJECT"
		);
	}
	inline JString AudioManager::EXTRA_AUDIO_PLUG_STATE()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_AUDIO_PLUG_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::EXTRA_ENCODINGS()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_ENCODINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::EXTRA_MAX_CHANNEL_COUNT()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_MAX_CHANNEL_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::EXTRA_RINGER_MODE()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_RINGER_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::EXTRA_SCO_AUDIO_PREVIOUS_STATE()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_SCO_AUDIO_PREVIOUS_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::EXTRA_SCO_AUDIO_STATE()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_SCO_AUDIO_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::EXTRA_VIBRATE_SETTING()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_VIBRATE_SETTING",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::EXTRA_VIBRATE_TYPE()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_VIBRATE_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline jint AudioManager::FLAG_ALLOW_RINGER_MODES()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"FLAG_ALLOW_RINGER_MODES"
		);
	}
	inline jint AudioManager::FLAG_PLAY_SOUND()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"FLAG_PLAY_SOUND"
		);
	}
	inline jint AudioManager::FLAG_REMOVE_SOUND_AND_VIBRATE()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"FLAG_REMOVE_SOUND_AND_VIBRATE"
		);
	}
	inline jint AudioManager::FLAG_SHOW_UI()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"FLAG_SHOW_UI"
		);
	}
	inline jint AudioManager::FLAG_VIBRATE()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"FLAG_VIBRATE"
		);
	}
	inline jint AudioManager::FX_FOCUS_NAVIGATION_DOWN()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"FX_FOCUS_NAVIGATION_DOWN"
		);
	}
	inline jint AudioManager::FX_FOCUS_NAVIGATION_LEFT()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"FX_FOCUS_NAVIGATION_LEFT"
		);
	}
	inline jint AudioManager::FX_FOCUS_NAVIGATION_RIGHT()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"FX_FOCUS_NAVIGATION_RIGHT"
		);
	}
	inline jint AudioManager::FX_FOCUS_NAVIGATION_UP()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"FX_FOCUS_NAVIGATION_UP"
		);
	}
	inline jint AudioManager::FX_KEYPRESS_DELETE()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"FX_KEYPRESS_DELETE"
		);
	}
	inline jint AudioManager::FX_KEYPRESS_INVALID()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"FX_KEYPRESS_INVALID"
		);
	}
	inline jint AudioManager::FX_KEYPRESS_RETURN()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"FX_KEYPRESS_RETURN"
		);
	}
	inline jint AudioManager::FX_KEYPRESS_SPACEBAR()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"FX_KEYPRESS_SPACEBAR"
		);
	}
	inline jint AudioManager::FX_KEYPRESS_STANDARD()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"FX_KEYPRESS_STANDARD"
		);
	}
	inline jint AudioManager::FX_KEY_CLICK()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"FX_KEY_CLICK"
		);
	}
	inline jint AudioManager::GET_DEVICES_ALL()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"GET_DEVICES_ALL"
		);
	}
	inline jint AudioManager::GET_DEVICES_INPUTS()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"GET_DEVICES_INPUTS"
		);
	}
	inline jint AudioManager::GET_DEVICES_OUTPUTS()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"GET_DEVICES_OUTPUTS"
		);
	}
	inline jint AudioManager::MODE_CALL_SCREENING()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"MODE_CALL_SCREENING"
		);
	}
	inline jint AudioManager::MODE_CURRENT()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"MODE_CURRENT"
		);
	}
	inline jint AudioManager::MODE_INVALID()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"MODE_INVALID"
		);
	}
	inline jint AudioManager::MODE_IN_CALL()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"MODE_IN_CALL"
		);
	}
	inline jint AudioManager::MODE_IN_COMMUNICATION()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"MODE_IN_COMMUNICATION"
		);
	}
	inline jint AudioManager::MODE_NORMAL()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"MODE_NORMAL"
		);
	}
	inline jint AudioManager::MODE_RINGTONE()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"MODE_RINGTONE"
		);
	}
	inline jint AudioManager::NUM_STREAMS()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"NUM_STREAMS"
		);
	}
	inline JString AudioManager::PROPERTY_OUTPUT_FRAMES_PER_BUFFER()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"PROPERTY_OUTPUT_FRAMES_PER_BUFFER",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::PROPERTY_OUTPUT_SAMPLE_RATE()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"PROPERTY_OUTPUT_SAMPLE_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::PROPERTY_SUPPORT_AUDIO_SOURCE_UNPROCESSED()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"PROPERTY_SUPPORT_AUDIO_SOURCE_UNPROCESSED",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::PROPERTY_SUPPORT_MIC_NEAR_ULTRASOUND()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"PROPERTY_SUPPORT_MIC_NEAR_ULTRASOUND",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::PROPERTY_SUPPORT_SPEAKER_NEAR_ULTRASOUND()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"PROPERTY_SUPPORT_SPEAKER_NEAR_ULTRASOUND",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioManager::RINGER_MODE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"RINGER_MODE_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline jint AudioManager::RINGER_MODE_NORMAL()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"RINGER_MODE_NORMAL"
		);
	}
	inline jint AudioManager::RINGER_MODE_SILENT()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"RINGER_MODE_SILENT"
		);
	}
	inline jint AudioManager::RINGER_MODE_VIBRATE()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"RINGER_MODE_VIBRATE"
		);
	}
	inline jint AudioManager::ROUTE_ALL()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"ROUTE_ALL"
		);
	}
	inline jint AudioManager::ROUTE_BLUETOOTH()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"ROUTE_BLUETOOTH"
		);
	}
	inline jint AudioManager::ROUTE_BLUETOOTH_A2DP()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"ROUTE_BLUETOOTH_A2DP"
		);
	}
	inline jint AudioManager::ROUTE_BLUETOOTH_SCO()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"ROUTE_BLUETOOTH_SCO"
		);
	}
	inline jint AudioManager::ROUTE_EARPIECE()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"ROUTE_EARPIECE"
		);
	}
	inline jint AudioManager::ROUTE_HEADSET()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"ROUTE_HEADSET"
		);
	}
	inline jint AudioManager::ROUTE_SPEAKER()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"ROUTE_SPEAKER"
		);
	}
	inline jint AudioManager::SCO_AUDIO_STATE_CONNECTED()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"SCO_AUDIO_STATE_CONNECTED"
		);
	}
	inline jint AudioManager::SCO_AUDIO_STATE_CONNECTING()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"SCO_AUDIO_STATE_CONNECTING"
		);
	}
	inline jint AudioManager::SCO_AUDIO_STATE_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"SCO_AUDIO_STATE_DISCONNECTED"
		);
	}
	inline jint AudioManager::SCO_AUDIO_STATE_ERROR()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"SCO_AUDIO_STATE_ERROR"
		);
	}
	inline jint AudioManager::STREAM_ACCESSIBILITY()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_ACCESSIBILITY"
		);
	}
	inline jint AudioManager::STREAM_ALARM()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_ALARM"
		);
	}
	inline jint AudioManager::STREAM_DTMF()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_DTMF"
		);
	}
	inline jint AudioManager::STREAM_MUSIC()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_MUSIC"
		);
	}
	inline jint AudioManager::STREAM_NOTIFICATION()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_NOTIFICATION"
		);
	}
	inline jint AudioManager::STREAM_RING()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_RING"
		);
	}
	inline jint AudioManager::STREAM_SYSTEM()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_SYSTEM"
		);
	}
	inline jint AudioManager::STREAM_VOICE_CALL()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_VOICE_CALL"
		);
	}
	inline jint AudioManager::USE_DEFAULT_STREAM_TYPE()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"USE_DEFAULT_STREAM_TYPE"
		);
	}
	inline JString AudioManager::VIBRATE_SETTING_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.media.AudioManager",
			"VIBRATE_SETTING_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline jint AudioManager::VIBRATE_SETTING_OFF()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"VIBRATE_SETTING_OFF"
		);
	}
	inline jint AudioManager::VIBRATE_SETTING_ON()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"VIBRATE_SETTING_ON"
		);
	}
	inline jint AudioManager::VIBRATE_SETTING_ONLY_SILENT()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"VIBRATE_SETTING_ONLY_SILENT"
		);
	}
	inline jint AudioManager::VIBRATE_TYPE_NOTIFICATION()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"VIBRATE_TYPE_NOTIFICATION"
		);
	}
	inline jint AudioManager::VIBRATE_TYPE_RINGER()
	{
		return getStaticField<jint>(
			"android.media.AudioManager",
			"VIBRATE_TYPE_RINGER"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean AudioManager::isHapticPlaybackSupported()
	{
		return callStaticMethod<jboolean>(
			"android.media.AudioManager",
			"isHapticPlaybackSupported",
			"()Z"
		);
	}
	inline jboolean AudioManager::isOffloadedPlaybackSupported(android::media::AudioFormat arg0, android::media::AudioAttributes arg1)
	{
		return callStaticMethod<jboolean>(
			"android.media.AudioManager",
			"isOffloadedPlaybackSupported",
			"(Landroid/media/AudioFormat;Landroid/media/AudioAttributes;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint AudioManager::abandonAudioFocus(JObject arg0) const
	{
		return callMethod<jint>(
			"abandonAudioFocus",
			"(Landroid/media/AudioManager$OnAudioFocusChangeListener;)I",
			arg0.object()
		);
	}
	inline jint AudioManager::abandonAudioFocusRequest(android::media::AudioFocusRequest arg0) const
	{
		return callMethod<jint>(
			"abandonAudioFocusRequest",
			"(Landroid/media/AudioFocusRequest;)I",
			arg0.object()
		);
	}
	inline void AudioManager::adjustStreamVolume(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"adjustStreamVolume",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void AudioManager::adjustSuggestedStreamVolume(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"adjustSuggestedStreamVolume",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void AudioManager::adjustVolume(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"adjustVolume",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void AudioManager::dispatchMediaKeyEvent(android::view::KeyEvent arg0) const
	{
		callMethod<void>(
			"dispatchMediaKeyEvent",
			"(Landroid/view/KeyEvent;)V",
			arg0.object()
		);
	}
	inline jint AudioManager::generateAudioSessionId() const
	{
		return callMethod<jint>(
			"generateAudioSessionId",
			"()I"
		);
	}
	inline JObject AudioManager::getActivePlaybackConfigurations() const
	{
		return callObjectMethod(
			"getActivePlaybackConfigurations",
			"()Ljava/util/List;"
		);
	}
	inline JObject AudioManager::getActiveRecordingConfigurations() const
	{
		return callObjectMethod(
			"getActiveRecordingConfigurations",
			"()Ljava/util/List;"
		);
	}
	inline jint AudioManager::getAllowedCapturePolicy() const
	{
		return callMethod<jint>(
			"getAllowedCapturePolicy",
			"()I"
		);
	}
	inline JArray AudioManager::getDevices(jint arg0) const
	{
		return callObjectMethod(
			"getDevices",
			"(I)[Landroid/media/AudioDeviceInfo;",
			arg0
		);
	}
	inline JObject AudioManager::getMicrophones() const
	{
		return callObjectMethod(
			"getMicrophones",
			"()Ljava/util/List;"
		);
	}
	inline jint AudioManager::getMode() const
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	inline JString AudioManager::getParameters(JString arg0) const
	{
		return callObjectMethod(
			"getParameters",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString AudioManager::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jint AudioManager::getRingerMode() const
	{
		return callMethod<jint>(
			"getRingerMode",
			"()I"
		);
	}
	inline jint AudioManager::getRouting(jint arg0) const
	{
		return callMethod<jint>(
			"getRouting",
			"(I)I",
			arg0
		);
	}
	inline jint AudioManager::getStreamMaxVolume(jint arg0) const
	{
		return callMethod<jint>(
			"getStreamMaxVolume",
			"(I)I",
			arg0
		);
	}
	inline jint AudioManager::getStreamMinVolume(jint arg0) const
	{
		return callMethod<jint>(
			"getStreamMinVolume",
			"(I)I",
			arg0
		);
	}
	inline jint AudioManager::getStreamVolume(jint arg0) const
	{
		return callMethod<jint>(
			"getStreamVolume",
			"(I)I",
			arg0
		);
	}
	inline jfloat AudioManager::getStreamVolumeDb(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jfloat>(
			"getStreamVolumeDb",
			"(III)F",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint AudioManager::getVibrateSetting(jint arg0) const
	{
		return callMethod<jint>(
			"getVibrateSetting",
			"(I)I",
			arg0
		);
	}
	inline jboolean AudioManager::isBluetoothA2dpOn() const
	{
		return callMethod<jboolean>(
			"isBluetoothA2dpOn",
			"()Z"
		);
	}
	inline jboolean AudioManager::isBluetoothScoAvailableOffCall() const
	{
		return callMethod<jboolean>(
			"isBluetoothScoAvailableOffCall",
			"()Z"
		);
	}
	inline jboolean AudioManager::isBluetoothScoOn() const
	{
		return callMethod<jboolean>(
			"isBluetoothScoOn",
			"()Z"
		);
	}
	inline jboolean AudioManager::isCallScreeningModeSupported() const
	{
		return callMethod<jboolean>(
			"isCallScreeningModeSupported",
			"()Z"
		);
	}
	inline jboolean AudioManager::isMicrophoneMute() const
	{
		return callMethod<jboolean>(
			"isMicrophoneMute",
			"()Z"
		);
	}
	inline jboolean AudioManager::isMusicActive() const
	{
		return callMethod<jboolean>(
			"isMusicActive",
			"()Z"
		);
	}
	inline jboolean AudioManager::isSpeakerphoneOn() const
	{
		return callMethod<jboolean>(
			"isSpeakerphoneOn",
			"()Z"
		);
	}
	inline jboolean AudioManager::isStreamMute(jint arg0) const
	{
		return callMethod<jboolean>(
			"isStreamMute",
			"(I)Z",
			arg0
		);
	}
	inline jboolean AudioManager::isVolumeFixed() const
	{
		return callMethod<jboolean>(
			"isVolumeFixed",
			"()Z"
		);
	}
	inline jboolean AudioManager::isWiredHeadsetOn() const
	{
		return callMethod<jboolean>(
			"isWiredHeadsetOn",
			"()Z"
		);
	}
	inline void AudioManager::loadSoundEffects() const
	{
		callMethod<void>(
			"loadSoundEffects",
			"()V"
		);
	}
	inline void AudioManager::playSoundEffect(jint arg0) const
	{
		callMethod<void>(
			"playSoundEffect",
			"(I)V",
			arg0
		);
	}
	inline void AudioManager::playSoundEffect(jint arg0, jfloat arg1) const
	{
		callMethod<void>(
			"playSoundEffect",
			"(IF)V",
			arg0,
			arg1
		);
	}
	inline void AudioManager::registerAudioDeviceCallback(android::media::AudioDeviceCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerAudioDeviceCallback",
			"(Landroid/media/AudioDeviceCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AudioManager::registerAudioPlaybackCallback(android::media::AudioManager_AudioPlaybackCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerAudioPlaybackCallback",
			"(Landroid/media/AudioManager$AudioPlaybackCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AudioManager::registerAudioRecordingCallback(android::media::AudioManager_AudioRecordingCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerAudioRecordingCallback",
			"(Landroid/media/AudioManager$AudioRecordingCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AudioManager::registerMediaButtonEventReceiver(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"registerMediaButtonEventReceiver",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	inline void AudioManager::registerMediaButtonEventReceiver(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"registerMediaButtonEventReceiver",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	inline void AudioManager::registerRemoteControlClient(android::media::RemoteControlClient arg0) const
	{
		callMethod<void>(
			"registerRemoteControlClient",
			"(Landroid/media/RemoteControlClient;)V",
			arg0.object()
		);
	}
	inline jboolean AudioManager::registerRemoteController(android::media::RemoteController arg0) const
	{
		return callMethod<jboolean>(
			"registerRemoteController",
			"(Landroid/media/RemoteController;)Z",
			arg0.object()
		);
	}
	inline jint AudioManager::requestAudioFocus(android::media::AudioFocusRequest arg0) const
	{
		return callMethod<jint>(
			"requestAudioFocus",
			"(Landroid/media/AudioFocusRequest;)I",
			arg0.object()
		);
	}
	inline jint AudioManager::requestAudioFocus(JObject arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"requestAudioFocus",
			"(Landroid/media/AudioManager$OnAudioFocusChangeListener;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void AudioManager::setAllowedCapturePolicy(jint arg0) const
	{
		callMethod<void>(
			"setAllowedCapturePolicy",
			"(I)V",
			arg0
		);
	}
	inline void AudioManager::setBluetoothA2dpOn(jboolean arg0) const
	{
		callMethod<void>(
			"setBluetoothA2dpOn",
			"(Z)V",
			arg0
		);
	}
	inline void AudioManager::setBluetoothScoOn(jboolean arg0) const
	{
		callMethod<void>(
			"setBluetoothScoOn",
			"(Z)V",
			arg0
		);
	}
	inline void AudioManager::setMicrophoneMute(jboolean arg0) const
	{
		callMethod<void>(
			"setMicrophoneMute",
			"(Z)V",
			arg0
		);
	}
	inline void AudioManager::setMode(jint arg0) const
	{
		callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
	inline void AudioManager::setParameters(JString arg0) const
	{
		callMethod<void>(
			"setParameters",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void AudioManager::setRingerMode(jint arg0) const
	{
		callMethod<void>(
			"setRingerMode",
			"(I)V",
			arg0
		);
	}
	inline void AudioManager::setRouting(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setRouting",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void AudioManager::setSpeakerphoneOn(jboolean arg0) const
	{
		callMethod<void>(
			"setSpeakerphoneOn",
			"(Z)V",
			arg0
		);
	}
	inline void AudioManager::setStreamMute(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setStreamMute",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void AudioManager::setStreamSolo(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setStreamSolo",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void AudioManager::setStreamVolume(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setStreamVolume",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void AudioManager::setVibrateSetting(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setVibrateSetting",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void AudioManager::setWiredHeadsetOn(jboolean arg0) const
	{
		callMethod<void>(
			"setWiredHeadsetOn",
			"(Z)V",
			arg0
		);
	}
	inline jboolean AudioManager::shouldVibrate(jint arg0) const
	{
		return callMethod<jboolean>(
			"shouldVibrate",
			"(I)Z",
			arg0
		);
	}
	inline void AudioManager::startBluetoothSco() const
	{
		callMethod<void>(
			"startBluetoothSco",
			"()V"
		);
	}
	inline void AudioManager::stopBluetoothSco() const
	{
		callMethod<void>(
			"stopBluetoothSco",
			"()V"
		);
	}
	inline void AudioManager::unloadSoundEffects() const
	{
		callMethod<void>(
			"unloadSoundEffects",
			"()V"
		);
	}
	inline void AudioManager::unregisterAudioDeviceCallback(android::media::AudioDeviceCallback arg0) const
	{
		callMethod<void>(
			"unregisterAudioDeviceCallback",
			"(Landroid/media/AudioDeviceCallback;)V",
			arg0.object()
		);
	}
	inline void AudioManager::unregisterAudioPlaybackCallback(android::media::AudioManager_AudioPlaybackCallback arg0) const
	{
		callMethod<void>(
			"unregisterAudioPlaybackCallback",
			"(Landroid/media/AudioManager$AudioPlaybackCallback;)V",
			arg0.object()
		);
	}
	inline void AudioManager::unregisterAudioRecordingCallback(android::media::AudioManager_AudioRecordingCallback arg0) const
	{
		callMethod<void>(
			"unregisterAudioRecordingCallback",
			"(Landroid/media/AudioManager$AudioRecordingCallback;)V",
			arg0.object()
		);
	}
	inline void AudioManager::unregisterMediaButtonEventReceiver(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"unregisterMediaButtonEventReceiver",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	inline void AudioManager::unregisterMediaButtonEventReceiver(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"unregisterMediaButtonEventReceiver",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	inline void AudioManager::unregisterRemoteControlClient(android::media::RemoteControlClient arg0) const
	{
		callMethod<void>(
			"unregisterRemoteControlClient",
			"(Landroid/media/RemoteControlClient;)V",
			arg0.object()
		);
	}
	inline void AudioManager::unregisterRemoteController(android::media::RemoteController arg0) const
	{
		callMethod<void>(
			"unregisterRemoteController",
			"(Landroid/media/RemoteController;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
