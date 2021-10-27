#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::util
{
	class Range;
}

namespace android::media
{
	class MediaCodecInfo_EncoderCapabilities : public __JniBaseClass
	{
	public:
		// Fields
		static jint BITRATE_MODE_CBR();
		static jint BITRATE_MODE_CQ();
		static jint BITRATE_MODE_VBR();
		
		MediaCodecInfo_EncoderCapabilities(QAndroidJniObject obj);
		// Constructors
		MediaCodecInfo_EncoderCapabilities() = default;
		
		// Methods
		QAndroidJniObject getComplexityRange();
		QAndroidJniObject getQualityRange();
		jboolean isBitrateModeSupported(jint arg0);
	};
} // namespace android::media

