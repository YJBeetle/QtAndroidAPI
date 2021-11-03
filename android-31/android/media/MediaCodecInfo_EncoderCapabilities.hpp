#pragma once

#include "../../JObject.hpp"

namespace android::util
{
	class Range;
}

namespace android::media
{
	class MediaCodecInfo_EncoderCapabilities : public JObject
	{
	public:
		// Fields
		static jint BITRATE_MODE_CBR();
		static jint BITRATE_MODE_CBR_FD();
		static jint BITRATE_MODE_CQ();
		static jint BITRATE_MODE_VBR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodecInfo_EncoderCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodecInfo_EncoderCapabilities(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::util::Range getComplexityRange() const;
		android::util::Range getQualityRange() const;
		jboolean isBitrateModeSupported(jint arg0) const;
	};
} // namespace android::media

