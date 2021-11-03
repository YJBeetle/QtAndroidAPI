#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class AssetFileDescriptor;
}
namespace android::media
{
	class DrmInitData;
}
namespace android::media
{
	class MediaCas;
}
namespace android::media
{
	class MediaCodec_CryptoInfo;
}
namespace android::media
{
	class MediaDataSource;
}
namespace android::media
{
	class MediaExtractor_CasInfo;
}
namespace android::media
{
	class MediaFormat;
}
namespace android::media::metrics
{
	class LogSessionId;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class PersistableBundle;
}
namespace java::io
{
	class FileDescriptor;
}
class JString;
namespace java::nio
{
	class ByteBuffer;
}

namespace android::media
{
	class MediaExtractor : public JObject
	{
	public:
		// Fields
		static jint SAMPLE_FLAG_ENCRYPTED();
		static jint SAMPLE_FLAG_PARTIAL_FRAME();
		static jint SAMPLE_FLAG_SYNC();
		static jint SEEK_TO_CLOSEST_SYNC();
		static jint SEEK_TO_NEXT_SYNC();
		static jint SEEK_TO_PREVIOUS_SYNC();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaExtractor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaExtractor(QJniObject obj);
		
		// Constructors
		MediaExtractor();
		
		// Methods
		jboolean advance();
		JObject getAudioPresentations(jint arg0);
		jlong getCachedDuration();
		android::media::MediaExtractor_CasInfo getCasInfo(jint arg0);
		android::media::DrmInitData getDrmInitData();
		android::media::metrics::LogSessionId getLogSessionId();
		android::os::PersistableBundle getMetrics();
		JObject getPsshInfo();
		jboolean getSampleCryptoInfo(android::media::MediaCodec_CryptoInfo arg0);
		jint getSampleFlags();
		jlong getSampleSize();
		jlong getSampleTime();
		jint getSampleTrackIndex();
		jint getTrackCount();
		android::media::MediaFormat getTrackFormat(jint arg0);
		jboolean hasCacheReachedEndOfStream();
		jint readSampleData(java::nio::ByteBuffer arg0, jint arg1);
		void release();
		void seekTo(jlong arg0, jint arg1);
		void selectTrack(jint arg0);
		void setDataSource(android::content::res::AssetFileDescriptor arg0);
		void setDataSource(android::media::MediaDataSource arg0);
		void setDataSource(java::io::FileDescriptor arg0);
		void setDataSource(JString arg0);
		void setDataSource(JString arg0, JObject arg1);
		void setDataSource(android::content::Context arg0, android::net::Uri arg1, JObject arg2);
		void setDataSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2);
		void setLogSessionId(android::media::metrics::LogSessionId arg0);
		void setMediaCas(android::media::MediaCas arg0);
		void unselectTrack(jint arg0);
	};
} // namespace android::media

