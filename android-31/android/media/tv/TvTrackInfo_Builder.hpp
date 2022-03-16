#pragma once

#include "../../../JObject.hpp"

namespace android::media::tv
{
	class TvTrackInfo;
}
namespace android::os
{
	class Bundle;
}
class JString;
class JString;

namespace android::media::tv
{
	class TvTrackInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvTrackInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvTrackInfo_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TvTrackInfo_Builder(jint arg0, JString arg1);
		
		// Methods
		android::media::tv::TvTrackInfo build() const;
		android::media::tv::TvTrackInfo_Builder setAudioChannelCount(jint arg0) const;
		android::media::tv::TvTrackInfo_Builder setAudioDescription(jboolean arg0) const;
		android::media::tv::TvTrackInfo_Builder setAudioSampleRate(jint arg0) const;
		android::media::tv::TvTrackInfo_Builder setDescription(JString arg0) const;
		android::media::tv::TvTrackInfo_Builder setEncoding(JString arg0) const;
		android::media::tv::TvTrackInfo_Builder setEncrypted(jboolean arg0) const;
		android::media::tv::TvTrackInfo_Builder setExtra(android::os::Bundle arg0) const;
		android::media::tv::TvTrackInfo_Builder setHardOfHearing(jboolean arg0) const;
		android::media::tv::TvTrackInfo_Builder setLanguage(JString arg0) const;
		android::media::tv::TvTrackInfo_Builder setSpokenSubtitle(jboolean arg0) const;
		android::media::tv::TvTrackInfo_Builder setVideoActiveFormatDescription(jbyte arg0) const;
		android::media::tv::TvTrackInfo_Builder setVideoFrameRate(jfloat arg0) const;
		android::media::tv::TvTrackInfo_Builder setVideoHeight(jint arg0) const;
		android::media::tv::TvTrackInfo_Builder setVideoPixelAspectRatio(jfloat arg0) const;
		android::media::tv::TvTrackInfo_Builder setVideoWidth(jint arg0) const;
	};
} // namespace android::media::tv

