#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::hardware
{
	class HardwareBuffer;
}
namespace android::media
{
	class MediaCodec_LinearBlock;
}
namespace android::media
{
	class MediaFormat;
}

namespace android::media
{
	class MediaCodec_OutputFrame : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodec_OutputFrame(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_OutputFrame(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getChangedKeys();
		jint getFlags();
		android::media::MediaFormat getFormat();
		android::hardware::HardwareBuffer getHardwareBuffer();
		android::media::MediaCodec_LinearBlock getLinearBlock();
		jlong getPresentationTimeUs();
	};
} // namespace android::media

