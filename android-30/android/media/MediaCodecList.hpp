#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::media
{
	class MediaCodecInfo;
}
namespace android::media
{
	class MediaFormat;
}
class JString;

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
		JString findDecoderForFormat(android::media::MediaFormat arg0);
		JString findEncoderForFormat(android::media::MediaFormat arg0);
		JArray getCodecInfos();
	};
} // namespace android::media

