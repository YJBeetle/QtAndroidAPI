#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class ComponentName;
}
namespace android::media
{
	class AudioAttributes;
}
namespace android::media
{
	class AudioDeviceCallback;
}
namespace android::media
{
	class AudioFocusRequest;
}
namespace android::media
{
	class AudioFormat;
}
namespace android::media
{
	class AudioManager_AudioPlaybackCallback;
}
namespace android::media
{
	class AudioManager_AudioRecordingCallback;
}
namespace android::media
{
	class RemoteControlClient;
}
namespace android::media
{
	class RemoteController;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class KeyEvent;
}

namespace android::media
{
	class AudioManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_AUDIO_BECOMING_NOISY();
		static jstring ACTION_HDMI_AUDIO_PLUG();
		static jstring ACTION_HEADSET_PLUG();
		static jstring ACTION_MICROPHONE_MUTE_CHANGED();
		static jstring ACTION_SCO_AUDIO_STATE_CHANGED();
		static jstring ACTION_SCO_AUDIO_STATE_UPDATED();
		static jstring ACTION_SPEAKERPHONE_STATE_CHANGED();
		static jint ADJUST_LOWER();
		static jint ADJUST_MUTE();
		static jint ADJUST_RAISE();
		static jint ADJUST_SAME();
		static jint ADJUST_TOGGLE_MUTE();
		static jint ADJUST_UNMUTE();
		static jint AUDIOFOCUS_GAIN();
		static jint AUDIOFOCUS_GAIN_TRANSIENT();
		static jint AUDIOFOCUS_GAIN_TRANSIENT_EXCLUSIVE();
		static jint AUDIOFOCUS_GAIN_TRANSIENT_MAY_DUCK();
		static jint AUDIOFOCUS_LOSS();
		static jint AUDIOFOCUS_LOSS_TRANSIENT();
		static jint AUDIOFOCUS_LOSS_TRANSIENT_CAN_DUCK();
		static jint AUDIOFOCUS_NONE();
		static jint AUDIOFOCUS_REQUEST_DELAYED();
		static jint AUDIOFOCUS_REQUEST_FAILED();
		static jint AUDIOFOCUS_REQUEST_GRANTED();
		static jint AUDIO_SESSION_ID_GENERATE();
		static jint ERROR();
		static jint ERROR_DEAD_OBJECT();
		static jstring EXTRA_AUDIO_PLUG_STATE();
		static jstring EXTRA_ENCODINGS();
		static jstring EXTRA_MAX_CHANNEL_COUNT();
		static jstring EXTRA_RINGER_MODE();
		static jstring EXTRA_SCO_AUDIO_PREVIOUS_STATE();
		static jstring EXTRA_SCO_AUDIO_STATE();
		static jstring EXTRA_VIBRATE_SETTING();
		static jstring EXTRA_VIBRATE_TYPE();
		static jint FLAG_ALLOW_RINGER_MODES();
		static jint FLAG_PLAY_SOUND();
		static jint FLAG_REMOVE_SOUND_AND_VIBRATE();
		static jint FLAG_SHOW_UI();
		static jint FLAG_VIBRATE();
		static jint FX_FOCUS_NAVIGATION_DOWN();
		static jint FX_FOCUS_NAVIGATION_LEFT();
		static jint FX_FOCUS_NAVIGATION_RIGHT();
		static jint FX_FOCUS_NAVIGATION_UP();
		static jint FX_KEYPRESS_DELETE();
		static jint FX_KEYPRESS_INVALID();
		static jint FX_KEYPRESS_RETURN();
		static jint FX_KEYPRESS_SPACEBAR();
		static jint FX_KEYPRESS_STANDARD();
		static jint FX_KEY_CLICK();
		static jint GET_DEVICES_ALL();
		static jint GET_DEVICES_INPUTS();
		static jint GET_DEVICES_OUTPUTS();
		static jint MODE_CALL_SCREENING();
		static jint MODE_CURRENT();
		static jint MODE_INVALID();
		static jint MODE_IN_CALL();
		static jint MODE_IN_COMMUNICATION();
		static jint MODE_NORMAL();
		static jint MODE_RINGTONE();
		static jint NUM_STREAMS();
		static jstring PROPERTY_OUTPUT_FRAMES_PER_BUFFER();
		static jstring PROPERTY_OUTPUT_SAMPLE_RATE();
		static jstring PROPERTY_SUPPORT_AUDIO_SOURCE_UNPROCESSED();
		static jstring PROPERTY_SUPPORT_MIC_NEAR_ULTRASOUND();
		static jstring PROPERTY_SUPPORT_SPEAKER_NEAR_ULTRASOUND();
		static jstring RINGER_MODE_CHANGED_ACTION();
		static jint RINGER_MODE_NORMAL();
		static jint RINGER_MODE_SILENT();
		static jint RINGER_MODE_VIBRATE();
		static jint ROUTE_ALL();
		static jint ROUTE_BLUETOOTH();
		static jint ROUTE_BLUETOOTH_A2DP();
		static jint ROUTE_BLUETOOTH_SCO();
		static jint ROUTE_EARPIECE();
		static jint ROUTE_HEADSET();
		static jint ROUTE_SPEAKER();
		static jint SCO_AUDIO_STATE_CONNECTED();
		static jint SCO_AUDIO_STATE_CONNECTING();
		static jint SCO_AUDIO_STATE_DISCONNECTED();
		static jint SCO_AUDIO_STATE_ERROR();
		static jint STREAM_ACCESSIBILITY();
		static jint STREAM_ALARM();
		static jint STREAM_DTMF();
		static jint STREAM_MUSIC();
		static jint STREAM_NOTIFICATION();
		static jint STREAM_RING();
		static jint STREAM_SYSTEM();
		static jint STREAM_VOICE_CALL();
		static jint USE_DEFAULT_STREAM_TYPE();
		static jstring VIBRATE_SETTING_CHANGED_ACTION();
		static jint VIBRATE_SETTING_OFF();
		static jint VIBRATE_SETTING_ON();
		static jint VIBRATE_SETTING_ONLY_SILENT();
		static jint VIBRATE_TYPE_NOTIFICATION();
		static jint VIBRATE_TYPE_RINGER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isHapticPlaybackSupported();
		static jboolean isOffloadedPlaybackSupported(android::media::AudioFormat arg0, android::media::AudioAttributes arg1);
		jint abandonAudioFocus(__JniBaseClass arg0);
		jint abandonAudioFocusRequest(android::media::AudioFocusRequest arg0);
		void adjustStreamVolume(jint arg0, jint arg1, jint arg2);
		void adjustSuggestedStreamVolume(jint arg0, jint arg1, jint arg2);
		void adjustVolume(jint arg0, jint arg1);
		void dispatchMediaKeyEvent(android::view::KeyEvent arg0);
		jint generateAudioSessionId();
		__JniBaseClass getActivePlaybackConfigurations();
		__JniBaseClass getActiveRecordingConfigurations();
		jint getAllowedCapturePolicy();
		jarray getDevices(jint arg0);
		__JniBaseClass getMicrophones();
		jint getMode();
		jstring getParameters(jstring arg0);
		jstring getProperty(jstring arg0);
		jint getRingerMode();
		jint getRouting(jint arg0);
		jint getStreamMaxVolume(jint arg0);
		jint getStreamMinVolume(jint arg0);
		jint getStreamVolume(jint arg0);
		jfloat getStreamVolumeDb(jint arg0, jint arg1, jint arg2);
		jint getVibrateSetting(jint arg0);
		jboolean isBluetoothA2dpOn();
		jboolean isBluetoothScoAvailableOffCall();
		jboolean isBluetoothScoOn();
		jboolean isCallScreeningModeSupported();
		jboolean isMicrophoneMute();
		jboolean isMusicActive();
		jboolean isSpeakerphoneOn();
		jboolean isStreamMute(jint arg0);
		jboolean isVolumeFixed();
		jboolean isWiredHeadsetOn();
		void loadSoundEffects();
		void playSoundEffect(jint arg0);
		void playSoundEffect(jint arg0, jfloat arg1);
		void registerAudioDeviceCallback(android::media::AudioDeviceCallback arg0, android::os::Handler arg1);
		void registerAudioPlaybackCallback(android::media::AudioManager_AudioPlaybackCallback arg0, android::os::Handler arg1);
		void registerAudioRecordingCallback(android::media::AudioManager_AudioRecordingCallback arg0, android::os::Handler arg1);
		void registerMediaButtonEventReceiver(android::app::PendingIntent arg0);
		void registerMediaButtonEventReceiver(android::content::ComponentName arg0);
		void registerRemoteControlClient(android::media::RemoteControlClient arg0);
		jboolean registerRemoteController(android::media::RemoteController arg0);
		jint requestAudioFocus(android::media::AudioFocusRequest arg0);
		jint requestAudioFocus(__JniBaseClass arg0, jint arg1, jint arg2);
		void setAllowedCapturePolicy(jint arg0);
		void setBluetoothA2dpOn(jboolean arg0);
		void setBluetoothScoOn(jboolean arg0);
		void setMicrophoneMute(jboolean arg0);
		void setMode(jint arg0);
		void setParameters(jstring arg0);
		void setRingerMode(jint arg0);
		void setRouting(jint arg0, jint arg1, jint arg2);
		void setSpeakerphoneOn(jboolean arg0);
		void setStreamMute(jint arg0, jboolean arg1);
		void setStreamSolo(jint arg0, jboolean arg1);
		void setStreamVolume(jint arg0, jint arg1, jint arg2);
		void setVibrateSetting(jint arg0, jint arg1);
		void setWiredHeadsetOn(jboolean arg0);
		jboolean shouldVibrate(jint arg0);
		void startBluetoothSco();
		void stopBluetoothSco();
		void unloadSoundEffects();
		void unregisterAudioDeviceCallback(android::media::AudioDeviceCallback arg0);
		void unregisterAudioPlaybackCallback(android::media::AudioManager_AudioPlaybackCallback arg0);
		void unregisterAudioRecordingCallback(android::media::AudioManager_AudioRecordingCallback arg0);
		void unregisterMediaButtonEventReceiver(android::app::PendingIntent arg0);
		void unregisterMediaButtonEventReceiver(android::content::ComponentName arg0);
		void unregisterRemoteControlClient(android::media::RemoteControlClient arg0);
		void unregisterRemoteController(android::media::RemoteController arg0);
	};
} // namespace android::media

