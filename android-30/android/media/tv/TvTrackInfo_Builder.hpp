#pragma once

#include "./TvTrackInfo.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./TvTrackInfo_Builder.def.hpp"

namespace android::media::tv
{
	// Fields
	
	// Constructors
	inline TvTrackInfo_Builder::TvTrackInfo_Builder(jint arg0, JString arg1)
		: JObject(
			"android.media.tv.TvTrackInfo$Builder",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::media::tv::TvTrackInfo TvTrackInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/tv/TvTrackInfo;"
		);
	}
	inline android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setAudioChannelCount(jint arg0) const
	{
		return callObjectMethod(
			"setAudioChannelCount",
			"(I)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	inline android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setAudioDescription(jboolean arg0) const
	{
		return callObjectMethod(
			"setAudioDescription",
			"(Z)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	inline android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setAudioSampleRate(jint arg0) const
	{
		return callObjectMethod(
			"setAudioSampleRate",
			"(I)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	inline android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setDescription(JString arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setEncoding(JString arg0) const
	{
		return callObjectMethod(
			"setEncoding",
			"(Ljava/lang/String;)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setEncrypted(jboolean arg0) const
	{
		return callObjectMethod(
			"setEncrypted",
			"(Z)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	inline android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setExtra(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtra",
			"(Landroid/os/Bundle;)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0.object()
		);
	}
	inline android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setHardOfHearing(jboolean arg0) const
	{
		return callObjectMethod(
			"setHardOfHearing",
			"(Z)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	inline android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setLanguage(JString arg0) const
	{
		return callObjectMethod(
			"setLanguage",
			"(Ljava/lang/String;)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setSpokenSubtitle(jboolean arg0) const
	{
		return callObjectMethod(
			"setSpokenSubtitle",
			"(Z)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	inline android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setVideoActiveFormatDescription(jbyte arg0) const
	{
		return callObjectMethod(
			"setVideoActiveFormatDescription",
			"(B)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	inline android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setVideoFrameRate(jfloat arg0) const
	{
		return callObjectMethod(
			"setVideoFrameRate",
			"(F)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	inline android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setVideoHeight(jint arg0) const
	{
		return callObjectMethod(
			"setVideoHeight",
			"(I)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	inline android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setVideoPixelAspectRatio(jfloat arg0) const
	{
		return callObjectMethod(
			"setVideoPixelAspectRatio",
			"(F)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	inline android::media::tv::TvTrackInfo_Builder TvTrackInfo_Builder::setVideoWidth(jint arg0) const
	{
		return callObjectMethod(
			"setVideoWidth",
			"(I)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
} // namespace android::media::tv

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
