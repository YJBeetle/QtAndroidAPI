#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class AudioAttributes;
}
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
	class AudioPresentation;
}
namespace android::media
{
	class AudioTimestamp;
}
namespace android::media
{
	class PlaybackParams;
}
namespace android::media
{
	class VolumeShaper;
}
namespace android::media
{
	class VolumeShaper_Configuration;
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
	class AudioTrack : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR();
		static jint ERROR_BAD_VALUE();
		static jint ERROR_DEAD_OBJECT();
		static jint ERROR_INVALID_OPERATION();
		static jint MODE_STATIC();
		static jint MODE_STREAM();
		static jint PERFORMANCE_MODE_LOW_LATENCY();
		static jint PERFORMANCE_MODE_NONE();
		static jint PERFORMANCE_MODE_POWER_SAVING();
		static jint PLAYSTATE_PAUSED();
		static jint PLAYSTATE_PLAYING();
		static jint PLAYSTATE_STOPPED();
		static jint STATE_INITIALIZED();
		static jint STATE_NO_STATIC_DATA();
		static jint STATE_UNINITIALIZED();
		static jint SUCCESS();
		static jint WRITE_BLOCKING();
		static jint WRITE_NON_BLOCKING();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioTrack(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioTrack(QJniObject obj);
		
		// Constructors
		AudioTrack(android::media::AudioAttributes arg0, android::media::AudioFormat arg1, jint arg2, jint arg3, jint arg4);
		AudioTrack(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		AudioTrack(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		
		// Methods
		static jfloat getMaxVolume();
		static jint getMinBufferSize(jint arg0, jint arg1, jint arg2);
		static jfloat getMinVolume();
		static jint getNativeOutputSampleRate(jint arg0);
		void addOnRoutingChangedListener(__JniBaseClass arg0, android::os::Handler arg1);
		jint attachAuxEffect(jint arg0);
		android::media::VolumeShaper createVolumeShaper(android::media::VolumeShaper_Configuration arg0);
		void flush();
		jint getAudioFormat();
		jint getAudioSessionId();
		jint getBufferCapacityInFrames();
		jint getBufferSizeInFrames();
		jint getChannelConfiguration();
		jint getChannelCount();
		android::media::AudioFormat getFormat();
		android::os::PersistableBundle getMetrics();
		jint getNotificationMarkerPosition();
		jint getPerformanceMode();
		jint getPlayState();
		jint getPlaybackHeadPosition();
		android::media::PlaybackParams getPlaybackParams();
		jint getPlaybackRate();
		jint getPositionNotificationPeriod();
		android::media::AudioDeviceInfo getPreferredDevice();
		android::media::AudioDeviceInfo getRoutedDevice();
		jint getSampleRate();
		jint getState();
		jint getStreamType();
		jboolean getTimestamp(android::media::AudioTimestamp arg0);
		jint getUnderrunCount();
		void pause();
		void play();
		void release();
		jint reloadStaticData();
		void removeOnRoutingChangedListener(__JniBaseClass arg0);
		jint setAuxEffectSendLevel(jfloat arg0);
		jint setBufferSizeInFrames(jint arg0);
		jint setLoopPoints(jint arg0, jint arg1, jint arg2);
		jint setNotificationMarkerPosition(jint arg0);
		jint setPlaybackHeadPosition(jint arg0);
		void setPlaybackParams(android::media::PlaybackParams arg0);
		void setPlaybackPositionUpdateListener(__JniBaseClass arg0);
		void setPlaybackPositionUpdateListener(__JniBaseClass arg0, android::os::Handler arg1);
		jint setPlaybackRate(jint arg0);
		jint setPositionNotificationPeriod(jint arg0);
		jboolean setPreferredDevice(android::media::AudioDeviceInfo arg0);
		jint setPresentation(android::media::AudioPresentation arg0);
		jint setStereoVolume(jfloat arg0, jfloat arg1);
		jint setVolume(jfloat arg0);
		void stop();
		jint write(jbyteArray arg0, jint arg1, jint arg2);
		jint write(jshortArray arg0, jint arg1, jint arg2);
		jint write(java::nio::ByteBuffer arg0, jint arg1, jint arg2);
		jint write(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		jint write(jfloatArray arg0, jint arg1, jint arg2, jint arg3);
		jint write(jshortArray arg0, jint arg1, jint arg2, jint arg3);
		jint write(java::nio::ByteBuffer arg0, jint arg1, jint arg2, jlong arg3);
	};
} // namespace android::media

