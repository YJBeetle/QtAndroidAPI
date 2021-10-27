#include "../app/PendingIntent.hpp"
#include "../content/ComponentName.hpp"
#include "./AudioAttributes.hpp"
#include "./AudioDeviceCallback.hpp"
#include "./AudioFocusRequest.hpp"
#include "./AudioFormat.hpp"
#include "./AudioManager_AudioPlaybackCallback.hpp"
#include "./AudioManager_AudioRecordingCallback.hpp"
#include "./RemoteControlClient.hpp"
#include "./RemoteController.hpp"
#include "../os/Handler.hpp"
#include "../view/KeyEvent.hpp"
#include "./AudioManager.hpp"

namespace android::media
{
	// Fields
	jstring AudioManager::ACTION_AUDIO_BECOMING_NOISY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"ACTION_AUDIO_BECOMING_NOISY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::ACTION_HDMI_AUDIO_PLUG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"ACTION_HDMI_AUDIO_PLUG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::ACTION_HEADSET_PLUG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"ACTION_HEADSET_PLUG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::ACTION_MICROPHONE_MUTE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"ACTION_MICROPHONE_MUTE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::ACTION_SCO_AUDIO_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"ACTION_SCO_AUDIO_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::ACTION_SCO_AUDIO_STATE_UPDATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"ACTION_SCO_AUDIO_STATE_UPDATED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::ACTION_SPEAKERPHONE_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"ACTION_SPEAKERPHONE_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AudioManager::ADJUST_LOWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"ADJUST_LOWER"
		);
	}
	jint AudioManager::ADJUST_MUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"ADJUST_MUTE"
		);
	}
	jint AudioManager::ADJUST_RAISE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"ADJUST_RAISE"
		);
	}
	jint AudioManager::ADJUST_SAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"ADJUST_SAME"
		);
	}
	jint AudioManager::ADJUST_TOGGLE_MUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"ADJUST_TOGGLE_MUTE"
		);
	}
	jint AudioManager::ADJUST_UNMUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"ADJUST_UNMUTE"
		);
	}
	jint AudioManager::AUDIOFOCUS_GAIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_GAIN"
		);
	}
	jint AudioManager::AUDIOFOCUS_GAIN_TRANSIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_GAIN_TRANSIENT"
		);
	}
	jint AudioManager::AUDIOFOCUS_GAIN_TRANSIENT_EXCLUSIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_GAIN_TRANSIENT_EXCLUSIVE"
		);
	}
	jint AudioManager::AUDIOFOCUS_GAIN_TRANSIENT_MAY_DUCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_GAIN_TRANSIENT_MAY_DUCK"
		);
	}
	jint AudioManager::AUDIOFOCUS_LOSS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_LOSS"
		);
	}
	jint AudioManager::AUDIOFOCUS_LOSS_TRANSIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_LOSS_TRANSIENT"
		);
	}
	jint AudioManager::AUDIOFOCUS_LOSS_TRANSIENT_CAN_DUCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_LOSS_TRANSIENT_CAN_DUCK"
		);
	}
	jint AudioManager::AUDIOFOCUS_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_NONE"
		);
	}
	jint AudioManager::AUDIOFOCUS_REQUEST_DELAYED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_REQUEST_DELAYED"
		);
	}
	jint AudioManager::AUDIOFOCUS_REQUEST_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_REQUEST_FAILED"
		);
	}
	jint AudioManager::AUDIOFOCUS_REQUEST_GRANTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIOFOCUS_REQUEST_GRANTED"
		);
	}
	jint AudioManager::AUDIO_SESSION_ID_GENERATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"AUDIO_SESSION_ID_GENERATE"
		);
	}
	jint AudioManager::ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"ERROR"
		);
	}
	jint AudioManager::ERROR_DEAD_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"ERROR_DEAD_OBJECT"
		);
	}
	jstring AudioManager::EXTRA_AUDIO_PLUG_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_AUDIO_PLUG_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::EXTRA_ENCODINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_ENCODINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::EXTRA_MAX_CHANNEL_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_MAX_CHANNEL_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::EXTRA_RINGER_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_RINGER_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::EXTRA_SCO_AUDIO_PREVIOUS_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_SCO_AUDIO_PREVIOUS_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::EXTRA_SCO_AUDIO_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_SCO_AUDIO_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::EXTRA_VIBRATE_SETTING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_VIBRATE_SETTING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::EXTRA_VIBRATE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"EXTRA_VIBRATE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AudioManager::FLAG_ALLOW_RINGER_MODES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"FLAG_ALLOW_RINGER_MODES"
		);
	}
	jint AudioManager::FLAG_PLAY_SOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"FLAG_PLAY_SOUND"
		);
	}
	jint AudioManager::FLAG_REMOVE_SOUND_AND_VIBRATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"FLAG_REMOVE_SOUND_AND_VIBRATE"
		);
	}
	jint AudioManager::FLAG_SHOW_UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"FLAG_SHOW_UI"
		);
	}
	jint AudioManager::FLAG_VIBRATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"FLAG_VIBRATE"
		);
	}
	jint AudioManager::FX_FOCUS_NAVIGATION_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"FX_FOCUS_NAVIGATION_DOWN"
		);
	}
	jint AudioManager::FX_FOCUS_NAVIGATION_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"FX_FOCUS_NAVIGATION_LEFT"
		);
	}
	jint AudioManager::FX_FOCUS_NAVIGATION_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"FX_FOCUS_NAVIGATION_RIGHT"
		);
	}
	jint AudioManager::FX_FOCUS_NAVIGATION_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"FX_FOCUS_NAVIGATION_UP"
		);
	}
	jint AudioManager::FX_KEYPRESS_DELETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"FX_KEYPRESS_DELETE"
		);
	}
	jint AudioManager::FX_KEYPRESS_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"FX_KEYPRESS_INVALID"
		);
	}
	jint AudioManager::FX_KEYPRESS_RETURN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"FX_KEYPRESS_RETURN"
		);
	}
	jint AudioManager::FX_KEYPRESS_SPACEBAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"FX_KEYPRESS_SPACEBAR"
		);
	}
	jint AudioManager::FX_KEYPRESS_STANDARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"FX_KEYPRESS_STANDARD"
		);
	}
	jint AudioManager::FX_KEY_CLICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"FX_KEY_CLICK"
		);
	}
	jint AudioManager::GET_DEVICES_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"GET_DEVICES_ALL"
		);
	}
	jint AudioManager::GET_DEVICES_INPUTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"GET_DEVICES_INPUTS"
		);
	}
	jint AudioManager::GET_DEVICES_OUTPUTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"GET_DEVICES_OUTPUTS"
		);
	}
	jint AudioManager::MODE_CURRENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"MODE_CURRENT"
		);
	}
	jint AudioManager::MODE_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"MODE_INVALID"
		);
	}
	jint AudioManager::MODE_IN_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"MODE_IN_CALL"
		);
	}
	jint AudioManager::MODE_IN_COMMUNICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"MODE_IN_COMMUNICATION"
		);
	}
	jint AudioManager::MODE_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"MODE_NORMAL"
		);
	}
	jint AudioManager::MODE_RINGTONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"MODE_RINGTONE"
		);
	}
	jint AudioManager::NUM_STREAMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"NUM_STREAMS"
		);
	}
	jstring AudioManager::PROPERTY_OUTPUT_FRAMES_PER_BUFFER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"PROPERTY_OUTPUT_FRAMES_PER_BUFFER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::PROPERTY_OUTPUT_SAMPLE_RATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"PROPERTY_OUTPUT_SAMPLE_RATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::PROPERTY_SUPPORT_AUDIO_SOURCE_UNPROCESSED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"PROPERTY_SUPPORT_AUDIO_SOURCE_UNPROCESSED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::PROPERTY_SUPPORT_MIC_NEAR_ULTRASOUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"PROPERTY_SUPPORT_MIC_NEAR_ULTRASOUND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::PROPERTY_SUPPORT_SPEAKER_NEAR_ULTRASOUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"PROPERTY_SUPPORT_SPEAKER_NEAR_ULTRASOUND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioManager::RINGER_MODE_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"RINGER_MODE_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AudioManager::RINGER_MODE_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"RINGER_MODE_NORMAL"
		);
	}
	jint AudioManager::RINGER_MODE_SILENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"RINGER_MODE_SILENT"
		);
	}
	jint AudioManager::RINGER_MODE_VIBRATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"RINGER_MODE_VIBRATE"
		);
	}
	jint AudioManager::ROUTE_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"ROUTE_ALL"
		);
	}
	jint AudioManager::ROUTE_BLUETOOTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"ROUTE_BLUETOOTH"
		);
	}
	jint AudioManager::ROUTE_BLUETOOTH_A2DP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"ROUTE_BLUETOOTH_A2DP"
		);
	}
	jint AudioManager::ROUTE_BLUETOOTH_SCO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"ROUTE_BLUETOOTH_SCO"
		);
	}
	jint AudioManager::ROUTE_EARPIECE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"ROUTE_EARPIECE"
		);
	}
	jint AudioManager::ROUTE_HEADSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"ROUTE_HEADSET"
		);
	}
	jint AudioManager::ROUTE_SPEAKER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"ROUTE_SPEAKER"
		);
	}
	jint AudioManager::SCO_AUDIO_STATE_CONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"SCO_AUDIO_STATE_CONNECTED"
		);
	}
	jint AudioManager::SCO_AUDIO_STATE_CONNECTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"SCO_AUDIO_STATE_CONNECTING"
		);
	}
	jint AudioManager::SCO_AUDIO_STATE_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"SCO_AUDIO_STATE_DISCONNECTED"
		);
	}
	jint AudioManager::SCO_AUDIO_STATE_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"SCO_AUDIO_STATE_ERROR"
		);
	}
	jint AudioManager::STREAM_ACCESSIBILITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_ACCESSIBILITY"
		);
	}
	jint AudioManager::STREAM_ALARM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_ALARM"
		);
	}
	jint AudioManager::STREAM_DTMF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_DTMF"
		);
	}
	jint AudioManager::STREAM_MUSIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_MUSIC"
		);
	}
	jint AudioManager::STREAM_NOTIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_NOTIFICATION"
		);
	}
	jint AudioManager::STREAM_RING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_RING"
		);
	}
	jint AudioManager::STREAM_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_SYSTEM"
		);
	}
	jint AudioManager::STREAM_VOICE_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"STREAM_VOICE_CALL"
		);
	}
	jint AudioManager::USE_DEFAULT_STREAM_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"USE_DEFAULT_STREAM_TYPE"
		);
	}
	jstring AudioManager::VIBRATE_SETTING_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioManager",
			"VIBRATE_SETTING_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AudioManager::VIBRATE_SETTING_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"VIBRATE_SETTING_OFF"
		);
	}
	jint AudioManager::VIBRATE_SETTING_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"VIBRATE_SETTING_ON"
		);
	}
	jint AudioManager::VIBRATE_SETTING_ONLY_SILENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"VIBRATE_SETTING_ONLY_SILENT"
		);
	}
	jint AudioManager::VIBRATE_TYPE_NOTIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"VIBRATE_TYPE_NOTIFICATION"
		);
	}
	jint AudioManager::VIBRATE_TYPE_RINGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioManager",
			"VIBRATE_TYPE_RINGER"
		);
	}
	
	AudioManager::AudioManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean AudioManager::isHapticPlaybackSupported()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.AudioManager",
			"isHapticPlaybackSupported",
			"()Z"
		);
	}
	jboolean AudioManager::isOffloadedPlaybackSupported(android::media::AudioFormat arg0, android::media::AudioAttributes arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.AudioManager",
			"isOffloadedPlaybackSupported",
			"(Landroid/media/AudioFormat;Landroid/media/AudioAttributes;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint AudioManager::abandonAudioFocus(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"abandonAudioFocus",
			"(Landroid/media/AudioManager$OnAudioFocusChangeListener;)I",
			arg0.__jniObject().object()
		);
	}
	jint AudioManager::abandonAudioFocusRequest(android::media::AudioFocusRequest arg0)
	{
		return __thiz.callMethod<jint>(
			"abandonAudioFocusRequest",
			"(Landroid/media/AudioFocusRequest;)I",
			arg0.__jniObject().object()
		);
	}
	void AudioManager::adjustStreamVolume(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"adjustStreamVolume",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void AudioManager::adjustSuggestedStreamVolume(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"adjustSuggestedStreamVolume",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void AudioManager::adjustVolume(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"adjustVolume",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AudioManager::dispatchMediaKeyEvent(android::view::KeyEvent arg0)
	{
		__thiz.callMethod<void>(
			"dispatchMediaKeyEvent",
			"(Landroid/view/KeyEvent;)V",
			arg0.__jniObject().object()
		);
	}
	jint AudioManager::generateAudioSessionId()
	{
		return __thiz.callMethod<jint>(
			"generateAudioSessionId",
			"()I"
		);
	}
	QAndroidJniObject AudioManager::getActivePlaybackConfigurations()
	{
		return __thiz.callObjectMethod(
			"getActivePlaybackConfigurations",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AudioManager::getActiveRecordingConfigurations()
	{
		return __thiz.callObjectMethod(
			"getActiveRecordingConfigurations",
			"()Ljava/util/List;"
		);
	}
	jint AudioManager::getAllowedCapturePolicy()
	{
		return __thiz.callMethod<jint>(
			"getAllowedCapturePolicy",
			"()I"
		);
	}
	jarray AudioManager::getDevices(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDevices",
			"(I)[Landroid/media/AudioDeviceInfo;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject AudioManager::getMicrophones()
	{
		return __thiz.callObjectMethod(
			"getMicrophones",
			"()Ljava/util/List;"
		);
	}
	jint AudioManager::getMode()
	{
		return __thiz.callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	jstring AudioManager::getParameters(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AudioManager::getParameters(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring AudioManager::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AudioManager::getProperty(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jint AudioManager::getRingerMode()
	{
		return __thiz.callMethod<jint>(
			"getRingerMode",
			"()I"
		);
	}
	jint AudioManager::getRouting(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getRouting",
			"(I)I",
			arg0
		);
	}
	jint AudioManager::getStreamMaxVolume(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getStreamMaxVolume",
			"(I)I",
			arg0
		);
	}
	jint AudioManager::getStreamMinVolume(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getStreamMinVolume",
			"(I)I",
			arg0
		);
	}
	jint AudioManager::getStreamVolume(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getStreamVolume",
			"(I)I",
			arg0
		);
	}
	jfloat AudioManager::getStreamVolumeDb(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jfloat>(
			"getStreamVolumeDb",
			"(III)F",
			arg0,
			arg1,
			arg2
		);
	}
	jint AudioManager::getVibrateSetting(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getVibrateSetting",
			"(I)I",
			arg0
		);
	}
	jboolean AudioManager::isBluetoothA2dpOn()
	{
		return __thiz.callMethod<jboolean>(
			"isBluetoothA2dpOn",
			"()Z"
		);
	}
	jboolean AudioManager::isBluetoothScoAvailableOffCall()
	{
		return __thiz.callMethod<jboolean>(
			"isBluetoothScoAvailableOffCall",
			"()Z"
		);
	}
	jboolean AudioManager::isBluetoothScoOn()
	{
		return __thiz.callMethod<jboolean>(
			"isBluetoothScoOn",
			"()Z"
		);
	}
	jboolean AudioManager::isMicrophoneMute()
	{
		return __thiz.callMethod<jboolean>(
			"isMicrophoneMute",
			"()Z"
		);
	}
	jboolean AudioManager::isMusicActive()
	{
		return __thiz.callMethod<jboolean>(
			"isMusicActive",
			"()Z"
		);
	}
	jboolean AudioManager::isSpeakerphoneOn()
	{
		return __thiz.callMethod<jboolean>(
			"isSpeakerphoneOn",
			"()Z"
		);
	}
	jboolean AudioManager::isStreamMute(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isStreamMute",
			"(I)Z",
			arg0
		);
	}
	jboolean AudioManager::isVolumeFixed()
	{
		return __thiz.callMethod<jboolean>(
			"isVolumeFixed",
			"()Z"
		);
	}
	jboolean AudioManager::isWiredHeadsetOn()
	{
		return __thiz.callMethod<jboolean>(
			"isWiredHeadsetOn",
			"()Z"
		);
	}
	void AudioManager::loadSoundEffects()
	{
		__thiz.callMethod<void>(
			"loadSoundEffects",
			"()V"
		);
	}
	void AudioManager::playSoundEffect(jint arg0)
	{
		__thiz.callMethod<void>(
			"playSoundEffect",
			"(I)V",
			arg0
		);
	}
	void AudioManager::playSoundEffect(jint arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"playSoundEffect",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void AudioManager::registerAudioDeviceCallback(android::media::AudioDeviceCallback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerAudioDeviceCallback",
			"(Landroid/media/AudioDeviceCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AudioManager::registerAudioPlaybackCallback(android::media::AudioManager_AudioPlaybackCallback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerAudioPlaybackCallback",
			"(Landroid/media/AudioManager$AudioPlaybackCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AudioManager::registerAudioRecordingCallback(android::media::AudioManager_AudioRecordingCallback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerAudioRecordingCallback",
			"(Landroid/media/AudioManager$AudioRecordingCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AudioManager::registerMediaButtonEventReceiver(android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"registerMediaButtonEventReceiver",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioManager::registerMediaButtonEventReceiver(android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"registerMediaButtonEventReceiver",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioManager::registerRemoteControlClient(android::media::RemoteControlClient arg0)
	{
		__thiz.callMethod<void>(
			"registerRemoteControlClient",
			"(Landroid/media/RemoteControlClient;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AudioManager::registerRemoteController(android::media::RemoteController arg0)
	{
		return __thiz.callMethod<jboolean>(
			"registerRemoteController",
			"(Landroid/media/RemoteController;)Z",
			arg0.__jniObject().object()
		);
	}
	jint AudioManager::requestAudioFocus(android::media::AudioFocusRequest arg0)
	{
		return __thiz.callMethod<jint>(
			"requestAudioFocus",
			"(Landroid/media/AudioFocusRequest;)I",
			arg0.__jniObject().object()
		);
	}
	jint AudioManager::requestAudioFocus(__JniBaseClass arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"requestAudioFocus",
			"(Landroid/media/AudioManager$OnAudioFocusChangeListener;II)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AudioManager::setAllowedCapturePolicy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAllowedCapturePolicy",
			"(I)V",
			arg0
		);
	}
	void AudioManager::setBluetoothA2dpOn(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBluetoothA2dpOn",
			"(Z)V",
			arg0
		);
	}
	void AudioManager::setBluetoothScoOn(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBluetoothScoOn",
			"(Z)V",
			arg0
		);
	}
	void AudioManager::setMicrophoneMute(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMicrophoneMute",
			"(Z)V",
			arg0
		);
	}
	void AudioManager::setMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
	void AudioManager::setParameters(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setParameters",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AudioManager::setParameters(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setParameters",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AudioManager::setRingerMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRingerMode",
			"(I)V",
			arg0
		);
	}
	void AudioManager::setRouting(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setRouting",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void AudioManager::setSpeakerphoneOn(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSpeakerphoneOn",
			"(Z)V",
			arg0
		);
	}
	void AudioManager::setStreamMute(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setStreamMute",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void AudioManager::setStreamSolo(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setStreamSolo",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void AudioManager::setStreamVolume(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setStreamVolume",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void AudioManager::setVibrateSetting(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setVibrateSetting",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AudioManager::setWiredHeadsetOn(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setWiredHeadsetOn",
			"(Z)V",
			arg0
		);
	}
	jboolean AudioManager::shouldVibrate(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"shouldVibrate",
			"(I)Z",
			arg0
		);
	}
	void AudioManager::startBluetoothSco()
	{
		__thiz.callMethod<void>(
			"startBluetoothSco",
			"()V"
		);
	}
	void AudioManager::stopBluetoothSco()
	{
		__thiz.callMethod<void>(
			"stopBluetoothSco",
			"()V"
		);
	}
	void AudioManager::unloadSoundEffects()
	{
		__thiz.callMethod<void>(
			"unloadSoundEffects",
			"()V"
		);
	}
	void AudioManager::unregisterAudioDeviceCallback(android::media::AudioDeviceCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterAudioDeviceCallback",
			"(Landroid/media/AudioDeviceCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioManager::unregisterAudioPlaybackCallback(android::media::AudioManager_AudioPlaybackCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterAudioPlaybackCallback",
			"(Landroid/media/AudioManager$AudioPlaybackCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioManager::unregisterAudioRecordingCallback(android::media::AudioManager_AudioRecordingCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterAudioRecordingCallback",
			"(Landroid/media/AudioManager$AudioRecordingCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioManager::unregisterMediaButtonEventReceiver(android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"unregisterMediaButtonEventReceiver",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioManager::unregisterMediaButtonEventReceiver(android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"unregisterMediaButtonEventReceiver",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioManager::unregisterRemoteControlClient(android::media::RemoteControlClient arg0)
	{
		__thiz.callMethod<void>(
			"unregisterRemoteControlClient",
			"(Landroid/media/RemoteControlClient;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioManager::unregisterRemoteController(android::media::RemoteController arg0)
	{
		__thiz.callMethod<void>(
			"unregisterRemoteController",
			"(Landroid/media/RemoteController;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media

