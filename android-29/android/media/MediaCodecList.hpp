#pragma once

#include "../../__JniBaseClass.hpp"

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
	class MediaCodecList : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALL_CODECS();
		static jint REGULAR_CODECS();
		
		MediaCodecList(QAndroidJniObject obj);
		// Constructors
		MediaCodecList(jint &arg0);
		MediaCodecList() = default;
		
		// Methods
		static jint getCodecCount();
		static QAndroidJniObject getCodecInfoAt(jint arg0);
		jstring findDecoderForFormat(android::media::MediaFormat arg0);
		jstring findEncoderForFormat(android::media::MediaFormat arg0);
		jarray getCodecInfos();
	};
} // namespace android::media

