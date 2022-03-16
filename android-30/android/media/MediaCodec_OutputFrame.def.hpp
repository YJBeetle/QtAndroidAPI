#pragma once

#include "../../JObject.hpp"

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
	class MediaCodec_OutputFrame : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodec_OutputFrame(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_OutputFrame(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getChangedKeys() const;
		jint getFlags() const;
		android::media::MediaFormat getFormat() const;
		android::hardware::HardwareBuffer getHardwareBuffer() const;
		android::media::MediaCodec_LinearBlock getLinearBlock() const;
		jlong getPresentationTimeUs() const;
	};
} // namespace android::media

