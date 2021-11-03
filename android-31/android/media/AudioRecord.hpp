#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioDeviceInfo;
}
namespace android::media
{
	class AudioFormat;
}
namespace android::media
{
	class AudioManager_AudioRecordingCallback;
}
namespace android::media
{
	class AudioRecordingConfiguration;
}
namespace android::media
{
	class AudioTimestamp;
}
namespace android::media
{
	class MediaSyncEvent;
}
namespace android::media::metrics
{
	class LogSessionId;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class PersistableBundle;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace android::media
{
	class AudioRecord : public JObject
	{
	public:
		// Fields
		static jint ERROR();
		static jint ERROR_BAD_VALUE();
		static jint ERROR_DEAD_OBJECT();
		static jint ERROR_INVALID_OPERATION();
		static jint READ_BLOCKING();
		static jint READ_NON_BLOCKING();
		static jint RECORDSTATE_RECORDING();
		static jint RECORDSTATE_STOPPED();
		static jint STATE_INITIALIZED();
		static jint STATE_UNINITIALIZED();
		static jint SUCCESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioRecord(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioRecord(QJniObject obj);
		
		// Constructors
		AudioRecord(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		static jint getMinBufferSize(jint arg0, jint arg1, jint arg2);
		void addOnRoutingChangedListener(JObject arg0, android::os::Handler arg1);
		JObject getActiveMicrophones();
		android::media::AudioRecordingConfiguration getActiveRecordingConfiguration();
		jint getAudioFormat();
		jint getAudioSessionId();
		jint getAudioSource();
		jint getBufferSizeInFrames();
		jint getChannelConfiguration();
		jint getChannelCount();
		android::media::AudioFormat getFormat();
		android::media::metrics::LogSessionId getLogSessionId();
		android::os::PersistableBundle getMetrics();
		jint getNotificationMarkerPosition();
		jint getPositionNotificationPeriod();
		android::media::AudioDeviceInfo getPreferredDevice();
		jint getRecordingState();
		android::media::AudioDeviceInfo getRoutedDevice();
		jint getSampleRate();
		jint getState();
		jint getTimestamp(android::media::AudioTimestamp arg0, jint arg1);
		jboolean isPrivacySensitive();
		jint read(java::nio::ByteBuffer arg0, jint arg1);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint read(jshortArray arg0, jint arg1, jint arg2);
		jint read(java::nio::ByteBuffer arg0, jint arg1, jint arg2);
		jint read(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		jint read(jfloatArray arg0, jint arg1, jint arg2, jint arg3);
		jint read(jshortArray arg0, jint arg1, jint arg2, jint arg3);
		void registerAudioRecordingCallback(JObject arg0, android::media::AudioManager_AudioRecordingCallback arg1);
		void release();
		void removeOnRoutingChangedListener(JObject arg0);
		void setLogSessionId(android::media::metrics::LogSessionId arg0);
		jint setNotificationMarkerPosition(jint arg0);
		jint setPositionNotificationPeriod(jint arg0);
		jboolean setPreferredDevice(android::media::AudioDeviceInfo arg0);
		jboolean setPreferredMicrophoneDirection(jint arg0);
		jboolean setPreferredMicrophoneFieldDimension(jfloat arg0);
		void setRecordPositionUpdateListener(JObject arg0);
		void setRecordPositionUpdateListener(JObject arg0, android::os::Handler arg1);
		void startRecording();
		void startRecording(android::media::MediaSyncEvent arg0);
		void stop();
		void unregisterAudioRecordingCallback(android::media::AudioManager_AudioRecordingCallback arg0);
	};
} // namespace android::media

