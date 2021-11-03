#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaCodecInfo;
}
namespace android::media
{
	class MediaFormat;
}

namespace android::media
{
	class MediaCodecList : public JObject
	{
	public:
		// Fields
		static jint ALL_CODECS();
		static jint REGULAR_CODECS();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodecList(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodecList(QJniObject obj);
		
		// Constructors
		MediaCodecList(jint arg0);
		
		// Methods
		static jint getCodecCount();
		static android::media::MediaCodecInfo getCodecInfoAt(jint arg0);
		jstring findDecoderForFormat(android::media::MediaFormat arg0);
		jstring findEncoderForFormat(android::media::MediaFormat arg0);
		jarray getCodecInfos();
	};
} // namespace android::media

