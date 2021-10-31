#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaFormat;
}

namespace android::media
{
	class MediaCodecInfo_VideoCapabilities_PerformancePoint : public __JniBaseClass
	{
	public:
		// Fields
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint FHD_100();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint FHD_120();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint FHD_200();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint FHD_24();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint FHD_240();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint FHD_25();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint FHD_30();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint FHD_50();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint FHD_60();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint HD_100();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint HD_120();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint HD_200();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint HD_24();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint HD_240();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint HD_25();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint HD_30();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint HD_50();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint HD_60();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint SD_24();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint SD_25();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint SD_30();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint SD_48();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint SD_50();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint SD_60();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint UHD_100();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint UHD_120();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint UHD_200();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint UHD_24();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint UHD_240();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint UHD_25();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint UHD_30();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint UHD_50();
		static android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint UHD_60();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodecInfo_VideoCapabilities_PerformancePoint(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodecInfo_VideoCapabilities_PerformancePoint(QAndroidJniObject obj);
		
		// Constructors
		MediaCodecInfo_VideoCapabilities_PerformancePoint(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean covers(android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint arg0);
		jboolean covers(android::media::MediaFormat arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::media

