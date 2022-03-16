#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JFloatArray;
class JShortArray;
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
	class AudioTrack_StreamEventCallback;
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
	class AudioTrack : public JObject
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
		template<typename ...Ts> explicit AudioTrack(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioTrack(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AudioTrack(android::media::AudioAttributes arg0, android::media::AudioFormat arg1, jint arg2, jint arg3, jint arg4);
		AudioTrack(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		AudioTrack(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		
		// Methods
		static jfloat getMaxVolume();
		static jint getMinBufferSize(jint arg0, jint arg1, jint arg2);
		static jfloat getMinVolume();
		static jint getNativeOutputSampleRate(jint arg0);
		static jboolean isDirectPlaybackSupported(android::media::AudioFormat arg0, android::media::AudioAttributes arg1);
		void addOnRoutingChangedListener(JObject arg0, android::os::Handler arg1) const;
		jint attachAuxEffect(jint arg0) const;
		android::media::VolumeShaper createVolumeShaper(android::media::VolumeShaper_Configuration arg0) const;
		void flush() const;
		android::media::AudioAttributes getAudioAttributes() const;
		jint getAudioFormat() const;
		jint getAudioSessionId() const;
		jint getBufferCapacityInFrames() const;
		jint getBufferSizeInFrames() const;
		jint getChannelConfiguration() const;
		jint getChannelCount() const;
		android::media::AudioFormat getFormat() const;
		android::os::PersistableBundle getMetrics() const;
		jint getNotificationMarkerPosition() const;
		jint getOffloadDelay() const;
		jint getOffloadPadding() const;
		jint getPerformanceMode() const;
		jint getPlayState() const;
		jint getPlaybackHeadPosition() const;
		android::media::PlaybackParams getPlaybackParams() const;
		jint getPlaybackRate() const;
		jint getPositionNotificationPeriod() const;
		android::media::AudioDeviceInfo getPreferredDevice() const;
		android::media::AudioDeviceInfo getRoutedDevice() const;
		jint getSampleRate() const;
		jint getState() const;
		jint getStreamType() const;
		jboolean getTimestamp(android::media::AudioTimestamp arg0) const;
		jint getUnderrunCount() const;
		jboolean isOffloadedPlayback() const;
		void pause() const;
		void play() const;
		void registerStreamEventCallback(JObject arg0, android::media::AudioTrack_StreamEventCallback arg1) const;
		void release() const;
		jint reloadStaticData() const;
		void removeOnRoutingChangedListener(JObject arg0) const;
		jint setAuxEffectSendLevel(jfloat arg0) const;
		jint setBufferSizeInFrames(jint arg0) const;
		jint setLoopPoints(jint arg0, jint arg1, jint arg2) const;
		jint setNotificationMarkerPosition(jint arg0) const;
		void setOffloadDelayPadding(jint arg0, jint arg1) const;
		void setOffloadEndOfStream() const;
		jint setPlaybackHeadPosition(jint arg0) const;
		void setPlaybackParams(android::media::PlaybackParams arg0) const;
		void setPlaybackPositionUpdateListener(JObject arg0) const;
		void setPlaybackPositionUpdateListener(JObject arg0, android::os::Handler arg1) const;
		jint setPlaybackRate(jint arg0) const;
		jint setPositionNotificationPeriod(jint arg0) const;
		jboolean setPreferredDevice(android::media::AudioDeviceInfo arg0) const;
		jint setPresentation(android::media::AudioPresentation arg0) const;
		jint setStereoVolume(jfloat arg0, jfloat arg1) const;
		jint setVolume(jfloat arg0) const;
		void stop() const;
		void unregisterStreamEventCallback(android::media::AudioTrack_StreamEventCallback arg0) const;
		jint write(JByteArray arg0, jint arg1, jint arg2) const;
		jint write(JShortArray arg0, jint arg1, jint arg2) const;
		jint write(java::nio::ByteBuffer arg0, jint arg1, jint arg2) const;
		jint write(JByteArray arg0, jint arg1, jint arg2, jint arg3) const;
		jint write(JFloatArray arg0, jint arg1, jint arg2, jint arg3) const;
		jint write(JShortArray arg0, jint arg1, jint arg2, jint arg3) const;
		jint write(java::nio::ByteBuffer arg0, jint arg1, jint arg2, jlong arg3) const;
	};
} // namespace android::media

