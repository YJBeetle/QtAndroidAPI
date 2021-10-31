#pragma once

#include "../../__JniBaseClass.hpp"

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
	class MediaSync : public __JniBaseClass
	{
	public:
		// Fields
		static jint MEDIASYNC_ERROR_AUDIOTRACK_FAIL();
		static jint MEDIASYNC_ERROR_SURFACE_FAIL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSync(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaSync(QAndroidJniObject obj);
		
		// Constructors
		MediaSync();
		
		// Methods
		android::view::Surface createInputSurface();
		void flush();
		android::media::PlaybackParams getPlaybackParams();
		android::media::SyncParams getSyncParams();
		android::media::MediaTimestamp getTimestamp();
		void queueAudio(java::nio::ByteBuffer arg0, jint arg1, jlong arg2);
		void release();
		void setAudioTrack(android::media::AudioTrack arg0);
		void setCallback(android::media::MediaSync_Callback arg0, android::os::Handler arg1);
		void setOnErrorListener(__JniBaseClass arg0, android::os::Handler arg1);
		void setPlaybackParams(android::media::PlaybackParams arg0);
		void setSurface(android::view::Surface arg0);
		void setSyncParams(android::media::SyncParams arg0);
	};
} // namespace android::media

