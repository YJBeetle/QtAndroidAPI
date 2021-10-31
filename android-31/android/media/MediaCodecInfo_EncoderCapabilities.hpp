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
		static jint BITRATE_MODE_CBR_FD();
		static jint BITRATE_MODE_CQ();
		static jint BITRATE_MODE_VBR();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodecInfo_EncoderCapabilities(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodecInfo_EncoderCapabilities(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::util::Range getComplexityRange();
		android::util::Range getQualityRange();
		jboolean isBitrateModeSupported(jint arg0);
	};
} // namespace android::media

