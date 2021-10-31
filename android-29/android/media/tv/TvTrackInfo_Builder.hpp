#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::tv
{
	class TvTrackInfo;
}
namespace android::os
{
	class Bundle;
}

namespace android::media::tv
{
	class TvTrackInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		TvTrackInfo_Builder(QAndroidJniObject obj);
		// Constructors
		TvTrackInfo_Builder(jint arg0, jstring arg1);
		TvTrackInfo_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAudioChannelCount(jint arg0);
		QAndroidJniObject setAudioSampleRate(jint arg0);
		QAndroidJniObject setDescription(jstring arg0);
		QAndroidJniObject setExtra(android::os::Bundle arg0);
		QAndroidJniObject setLanguage(jstring arg0);
		QAndroidJniObject setVideoActiveFormatDescription(jbyte arg0);
		QAndroidJniObject setVideoFrameRate(jfloat arg0);
		QAndroidJniObject setVideoHeight(jint arg0);
		QAndroidJniObject setVideoPixelAspectRatio(jfloat arg0);
		QAndroidJniObject setVideoWidth(jint arg0);
	};
} // namespace android::media::tv

