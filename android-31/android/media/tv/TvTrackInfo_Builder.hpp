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
		
		// QJniObject forward
		template<typename ...Ts> explicit TvTrackInfo_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TvTrackInfo_Builder(QJniObject obj);
		
		// Constructors
		TvTrackInfo_Builder(jint arg0, jstring arg1);
		
		// Methods
		android::media::tv::TvTrackInfo build();
		android::media::tv::TvTrackInfo_Builder setAudioChannelCount(jint arg0);
		android::media::tv::TvTrackInfo_Builder setAudioDescription(jboolean arg0);
		android::media::tv::TvTrackInfo_Builder setAudioSampleRate(jint arg0);
		android::media::tv::TvTrackInfo_Builder setDescription(jstring arg0);
		android::media::tv::TvTrackInfo_Builder setEncoding(jstring arg0);
		android::media::tv::TvTrackInfo_Builder setEncrypted(jboolean arg0);
		android::media::tv::TvTrackInfo_Builder setExtra(android::os::Bundle arg0);
		android::media::tv::TvTrackInfo_Builder setHardOfHearing(jboolean arg0);
		android::media::tv::TvTrackInfo_Builder setLanguage(jstring arg0);
		android::media::tv::TvTrackInfo_Builder setSpokenSubtitle(jboolean arg0);
		android::media::tv::TvTrackInfo_Builder setVideoActiveFormatDescription(jbyte arg0);
		android::media::tv::TvTrackInfo_Builder setVideoFrameRate(jfloat arg0);
		android::media::tv::TvTrackInfo_Builder setVideoHeight(jint arg0);
		android::media::tv::TvTrackInfo_Builder setVideoPixelAspectRatio(jfloat arg0);
		android::media::tv::TvTrackInfo_Builder setVideoWidth(jint arg0);
	};
} // namespace android::media::tv

