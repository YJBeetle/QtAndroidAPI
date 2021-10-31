#pragma once

#include "../../__JniBaseClass.hpp"

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
	class AudioTimestamp;
}
namespace android::media
{
	class MediaSyncEvent;
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
	class AudioRecord : public __JniBaseClass
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
		template<typename ...Ts> explicit AudioRecord(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioRecord(QJniObject obj);
		
		// Constructors
		AudioRecord(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		static jint getMinBufferSize(jint arg0, jint arg1, jint arg2);
		void addOnRoutingChangedListener(__JniBaseClass arg0, android::os::Handler arg1);
		__JniBaseClass getActiveMicrophones();
		jint getAudioFormat();
		jint getAudioSessionId();
		jint getAudioSource();
		jint getBufferSizeInFrames();
		jint getChannelConfiguration();
		jint getChannelCount();
		android::media::AudioFormat getFormat();
		android::os::PersistableBundle getMetrics();
		jint getNotificationMarkerPosition();
		jint getPositionNotificationPeriod();
		android::media::AudioDeviceInfo getPreferredDevice();
		jint getRecordingState();
		android::media::AudioDeviceInfo getRoutedDevice();
		jint getSampleRate();
		jint getState();
		jint getTimestamp(android::media::AudioTimestamp arg0, jint arg1);
		jint read(java::nio::ByteBuffer arg0, jint arg1);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint read(jshortArray arg0, jint arg1, jint arg2);
		jint read(java::nio::ByteBuffer arg0, jint arg1, jint arg2);
		jint read(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		jint read(jfloatArray arg0, jint arg1, jint arg2, jint arg3);
		jint read(jshortArray arg0, jint arg1, jint arg2, jint arg3);
		void release();
		void removeOnRoutingChangedListener(__JniBaseClass arg0);
		jint setNotificationMarkerPosition(jint arg0);
		jint setPositionNotificationPeriod(jint arg0);
		jboolean setPreferredDevice(android::media::AudioDeviceInfo arg0);
		void setRecordPositionUpdateListener(__JniBaseClass arg0);
		void setRecordPositionUpdateListener(__JniBaseClass arg0, android::os::Handler arg1);
		void startRecording();
		void startRecording(android::media::MediaSyncEvent arg0);
		void stop();
	};
} // namespace android::media

