#include "./TvTrackInfo.hpp"
#include "../../os/Bundle.hpp"
#include "./TvTrackInfo_Builder.hpp"

namespace android::media::tv
{
	// Fields
	
	// QAndroidJniObject forward
	TvTrackInfo_Builder::TvTrackInfo_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TvTrackInfo_Builder::TvTrackInfo_Builder(jint arg0, jstring arg1)
		: JObject(
			"android.media.tv.TvTrackInfo$Builder",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::media::tv::TvTrackInfo TvTrackInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/tv/TvTrackInfo;"
		);
	}
	android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setAudioChannelCount(jint arg0)
	{
		return callObjectMethod(
			"setAudioChannelCount",
			"(I)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setAudioSampleRate(jint arg0)
	{
		return callObjectMethod(
			"setAudioSampleRate",
			"(I)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setDescription(jstring arg0)
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setExtra(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtra",
			"(Landroid/os/Bundle;)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0.object()
		);
	}
	android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setLanguage(jstring arg0)
	{
		return callObjectMethod(
			"setLanguage",
			"(Ljava/lang/String;)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setVideoActiveFormatDescription(jbyte arg0)
	{
		return callObjectMethod(
			"setVideoActiveFormatDescription",
			"(B)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setVideoFrameRate(jfloat arg0)
	{
		return callObjectMethod(
			"setVideoFrameRate",
			"(F)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setVideoHeight(jint arg0)
	{
		return callObjectMethod(
			"setVideoHeight",
			"(I)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setVideoPixelAspectRatio(jfloat arg0)
	{
		return callObjectMethod(
			"setVideoPixelAspectRatio",
			"(F)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setVideoWidth(jint arg0)
	{
		return callObjectMethod(
			"setVideoWidth",
			"(I)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
} // namespace android::media::tv

