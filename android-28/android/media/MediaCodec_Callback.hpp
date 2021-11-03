#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaCodec;
}
namespace android::media
{
	class MediaCodec_BufferInfo;
}
namespace android::media
{
	class MediaCodec_CodecException;
}
namespace android::media
{
	class MediaFormat;
}

namespace android::media
{
	class MediaCodec_Callback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodec_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_Callback(QJniObject obj);
		
		// Constructors
		MediaCodec_Callback();
		
		// Methods
		void onError(android::media::MediaCodec arg0, android::media::MediaCodec_CodecException arg1) const;
		void onInputBufferAvailable(android::media::MediaCodec arg0, jint arg1) const;
		void onOutputBufferAvailable(android::media::MediaCodec arg0, jint arg1, android::media::MediaCodec_BufferInfo arg2) const;
		void onOutputFormatChanged(android::media::MediaCodec arg0, android::media::MediaFormat arg1) const;
	};
} // namespace android::media

