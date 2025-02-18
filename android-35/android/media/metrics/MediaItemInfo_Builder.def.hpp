#pragma once

#include "../../../JObject.hpp"

namespace android::media::metrics
{
	class MediaItemInfo;
}
namespace android::util
{
	class Size;
}
class JString;

namespace android::media::metrics
{
	class MediaItemInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaItemInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaItemInfo_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaItemInfo_Builder();
		
		// Methods
		android::media::metrics::MediaItemInfo_Builder addCodecName(JString arg0) const;
		android::media::metrics::MediaItemInfo_Builder addDataType(jlong arg0) const;
		android::media::metrics::MediaItemInfo_Builder addSampleMimeType(JString arg0) const;
		android::media::metrics::MediaItemInfo build() const;
		android::media::metrics::MediaItemInfo_Builder setAudioChannelCount(jint arg0) const;
		android::media::metrics::MediaItemInfo_Builder setAudioSampleCount(jlong arg0) const;
		android::media::metrics::MediaItemInfo_Builder setAudioSampleRateHz(jint arg0) const;
		android::media::metrics::MediaItemInfo_Builder setClipDurationMillis(jlong arg0) const;
		android::media::metrics::MediaItemInfo_Builder setContainerMimeType(JString arg0) const;
		android::media::metrics::MediaItemInfo_Builder setDurationMillis(jlong arg0) const;
		android::media::metrics::MediaItemInfo_Builder setSourceType(jint arg0) const;
		android::media::metrics::MediaItemInfo_Builder setVideoDataSpace(jint arg0) const;
		android::media::metrics::MediaItemInfo_Builder setVideoFrameRate(jfloat arg0) const;
		android::media::metrics::MediaItemInfo_Builder setVideoSampleCount(jlong arg0) const;
		android::media::metrics::MediaItemInfo_Builder setVideoSize(android::util::Size arg0) const;
	};
} // namespace android::media::metrics

