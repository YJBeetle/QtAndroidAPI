#pragma once

#include "../../JObject.hpp"

class JArray;
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
class JString;

namespace android::media
{
	class AudioManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_AUDIO_BECOMING_NOISY();
		static JString ACTION_HDMI_AUDIO_PLUG();
		static JString ACTION_HEADSET_PLUG();
		static JString ACTION_MICROPHONE_MUTE_CHANGED();
		static JString ACTION_SCO_AUDIO_STATE_CHANGED();
		static JString ACTION_SCO_AUDIO_STATE_UPDATED();
		static JString ACTION_SPEAKERPHONE_STATE_CHANGED();
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
		static JString EXTRA_AUDIO_PLUG_STATE();
		static JString EXTRA_ENCODINGS();
		static JString EXTRA_MAX_CHANNEL_COUNT();
		static JString EXTRA_RINGER_MODE();
		static JString EXTRA_SCO_AUDIO_PREVIOUS_STATE();
		static JString EXTRA_SCO_AUDIO_STATE();
		static JString EXTRA_VIBRATE_SETTING();
		static JString EXTRA_VIBRATE_TYPE();
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
		static JString PROPERTY_OUTPUT_FRAMES_PER_BUFFER();
		static JString PROPERTY_OUTPUT_SAMPLE_RATE();
		static JString PROPERTY_SUPPORT_AUDIO_SOURCE_UNPROCESSED();
		static JString PROPERTY_SUPPORT_MIC_NEAR_ULTRASOUND();
		static JString PROPERTY_SUPPORT_SPEAKER_NEAR_ULTRASOUND();
		static JString RINGER_MODE_CHANGED_ACTION();
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
		static JString VIBRATE_SETTING_CHANGED_ACTION();
		static jint VIBRATE_SETTING_OFF();
		static jint VIBRATE_SETTING_ON();
		static jint VIBRATE_SETTING_ONLY_SILENT();
		static jint VIBRATE_TYPE_NOTIFICATION();
		static jint VIBRATE_TYPE_RINGER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jboolean isHapticPlaybackSupported();
		static jboolean isOffloadedPlaybackSupported(android::media::AudioFormat arg0, android::media::AudioAttributes arg1);
		jint abandonAudioFocus(JObject arg0) const;
		jint abandonAudioFocusRequest(android::media::AudioFocusRequest arg0) const;
		void adjustStreamVolume(jint arg0, jint arg1, jint arg2) const;
		void adjustSuggestedStreamVolume(jint arg0, jint arg1, jint arg2) const;
		void adjustVolume(jint arg0, jint arg1) const;
		void dispatchMediaKeyEvent(android::view::KeyEvent arg0) const;
		jint generateAudioSessionId() const;
		JObject getActivePlaybackConfigurations() const;
		JObject getActiveRecordingConfigurations() const;
		jint getAllowedCapturePolicy() const;
		JArray getDevices(jint arg0) const;
		JObject getMicrophones() const;
		jint getMode() const;
		JString getParameters(JString arg0) const;
		JString getProperty(JString arg0) const;
		jint getRingerMode() const;
		jint getRouting(jint arg0) const;
		jint getStreamMaxVolume(jint arg0) const;
		jint getStreamMinVolume(jint arg0) const;
		jint getStreamVolume(jint arg0) const;
		jfloat getStreamVolumeDb(jint arg0, jint arg1, jint arg2) const;
		jint getVibrateSetting(jint arg0) const;
		jboolean isBluetoothA2dpOn() const;
		jboolean isBluetoothScoAvailableOffCall() const;
		jboolean isBluetoothScoOn() const;
		jboolean isCallScreeningModeSupported() const;
		jboolean isMicrophoneMute() const;
		jboolean isMusicActive() const;
		jboolean isSpeakerphoneOn() const;
		jboolean isStreamMute(jint arg0) const;
		jboolean isVolumeFixed() const;
		jboolean isWiredHeadsetOn() const;
		void loadSoundEffects() const;
		void playSoundEffect(jint arg0) const;
		void playSoundEffect(jint arg0, jfloat arg1) const;
		void registerAudioDeviceCallback(android::media::AudioDeviceCallback arg0, android::os::Handler arg1) const;
		void registerAudioPlaybackCallback(android::media::AudioManager_AudioPlaybackCallback arg0, android::os::Handler arg1) const;
		void registerAudioRecordingCallback(android::media::AudioManager_AudioRecordingCallback arg0, android::os::Handler arg1) const;
		void registerMediaButtonEventReceiver(android::app::PendingIntent arg0) const;
		void registerMediaButtonEventReceiver(android::content::ComponentName arg0) const;
		void registerRemoteControlClient(android::media::RemoteControlClient arg0) const;
		jboolean registerRemoteController(android::media::RemoteController arg0) const;
		jint requestAudioFocus(android::media::AudioFocusRequest arg0) const;
		jint requestAudioFocus(JObject arg0, jint arg1, jint arg2) const;
		void setAllowedCapturePolicy(jint arg0) const;
		void setBluetoothA2dpOn(jboolean arg0) const;
		void setBluetoothScoOn(jboolean arg0) const;
		void setMicrophoneMute(jboolean arg0) const;
		void setMode(jint arg0) const;
		void setParameters(JString arg0) const;
		void setRingerMode(jint arg0) const;
		void setRouting(jint arg0, jint arg1, jint arg2) const;
		void setSpeakerphoneOn(jboolean arg0) const;
		void setStreamMute(jint arg0, jboolean arg1) const;
		void setStreamSolo(jint arg0, jboolean arg1) const;
		void setStreamVolume(jint arg0, jint arg1, jint arg2) const;
		void setVibrateSetting(jint arg0, jint arg1) const;
		void setWiredHeadsetOn(jboolean arg0) const;
		jboolean shouldVibrate(jint arg0) const;
		void startBluetoothSco() const;
		void stopBluetoothSco() const;
		void unloadSoundEffects() const;
		void unregisterAudioDeviceCallback(android::media::AudioDeviceCallback arg0) const;
		void unregisterAudioPlaybackCallback(android::media::AudioManager_AudioPlaybackCallback arg0) const;
		void unregisterAudioRecordingCallback(android::media::AudioManager_AudioRecordingCallback arg0) const;
		void unregisterMediaButtonEventReceiver(android::app::PendingIntent arg0) const;
		void unregisterMediaButtonEventReceiver(android::content::ComponentName arg0) const;
		void unregisterRemoteControlClient(android::media::RemoteControlClient arg0) const;
		void unregisterRemoteController(android::media::RemoteController arg0) const;
	};
} // namespace android::media

