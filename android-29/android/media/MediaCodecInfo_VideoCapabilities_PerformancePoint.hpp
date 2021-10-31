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
		static QAndroidJniObject FHD_100();
		static QAndroidJniObject FHD_120();
		static QAndroidJniObject FHD_200();
		static QAndroidJniObject FHD_24();
		static QAndroidJniObject FHD_240();
		static QAndroidJniObject FHD_25();
		static QAndroidJniObject FHD_30();
		static QAndroidJniObject FHD_50();
		static QAndroidJniObject FHD_60();
		static QAndroidJniObject HD_100();
		static QAndroidJniObject HD_120();
		static QAndroidJniObject HD_200();
		static QAndroidJniObject HD_24();
		static QAndroidJniObject HD_240();
		static QAndroidJniObject HD_25();
		static QAndroidJniObject HD_30();
		static QAndroidJniObject HD_50();
		static QAndroidJniObject HD_60();
		static QAndroidJniObject SD_24();
		static QAndroidJniObject SD_25();
		static QAndroidJniObject SD_30();
		static QAndroidJniObject SD_48();
		static QAndroidJniObject SD_50();
		static QAndroidJniObject SD_60();
		static QAndroidJniObject UHD_100();
		static QAndroidJniObject UHD_120();
		static QAndroidJniObject UHD_200();
		static QAndroidJniObject UHD_24();
		static QAndroidJniObject UHD_240();
		static QAndroidJniObject UHD_25();
		static QAndroidJniObject UHD_30();
		static QAndroidJniObject UHD_50();
		static QAndroidJniObject UHD_60();
		
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

