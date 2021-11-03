#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaCodec_BufferInfo;
}
namespace android::media
{
	class MediaFormat;
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
	class MediaMuxer : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaMuxer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaMuxer(QAndroidJniObject obj);
		
		// Constructors
		MediaMuxer(java::io::FileDescriptor arg0, jint arg1);
		MediaMuxer(JString arg0, jint arg1);
		
		// Methods
		jint addTrack(android::media::MediaFormat arg0) const;
		void release() const;
		void setLocation(jfloat arg0, jfloat arg1) const;
		void setOrientationHint(jint arg0) const;
		void start() const;
		void stop() const;
		void writeSampleData(jint arg0, java::nio::ByteBuffer arg1, android::media::MediaCodec_BufferInfo arg2) const;
	};
} // namespace android::media

