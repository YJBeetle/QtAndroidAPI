#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioTrack;
}
namespace android::media
{
	class MediaSync_Callback;
}
namespace android::media
{
	class MediaTimestamp;
}
namespace android::media
{
	class PlaybackParams;
}
namespace android::media
{
	class SyncParams;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class Surface;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace android::media
{
	class MediaSync : public JObject
	{
	public:
		// Fields
		static jint MEDIASYNC_ERROR_AUDIOTRACK_FAIL();
		static jint MEDIASYNC_ERROR_SURFACE_FAIL();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaSync(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSync(QJniObject obj);
		
		// Constructors
		MediaSync();
		
		// Methods
		android::view::Surface createInputSurface() const;
		void flush() const;
		android::media::PlaybackParams getPlaybackParams() const;
		android::media::SyncParams getSyncParams() const;
		android::media::MediaTimestamp getTimestamp() const;
		void queueAudio(java::nio::ByteBuffer arg0, jint arg1, jlong arg2) const;
		void release() const;
		void setAudioTrack(android::media::AudioTrack arg0) const;
		void setCallback(android::media::MediaSync_Callback arg0, android::os::Handler arg1) const;
		void setOnErrorListener(JObject arg0, android::os::Handler arg1) const;
		void setPlaybackParams(android::media::PlaybackParams arg0) const;
		void setSurface(android::view::Surface arg0) const;
		void setSyncParams(android::media::SyncParams arg0) const;
	};
} // namespace android::media

