#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::util
{
	class Size;
}
class JObject;
class JString;

namespace android::media::metrics
{
	class MediaItemInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jlong DATA_TYPE_AUDIO();
		static jlong DATA_TYPE_DEPTH();
		static jlong DATA_TYPE_GAIN_MAP();
		static jlong DATA_TYPE_GAPLESS();
		static jlong DATA_TYPE_HIGH_DYNAMIC_RANGE_VIDEO();
		static jlong DATA_TYPE_HIGH_FRAME_RATE();
		static jlong DATA_TYPE_IMAGE();
		static jlong DATA_TYPE_METADATA();
		static jlong DATA_TYPE_SPATIAL_AUDIO();
		static jlong DATA_TYPE_SPEED_SETTING_CUE_POINTS();
		static jlong DATA_TYPE_VIDEO();
		static jint SOURCE_TYPE_CAMERA();
		static jint SOURCE_TYPE_EDITING_SESSION();
		static jint SOURCE_TYPE_GALLERY();
		static jint SOURCE_TYPE_GENERATED();
		static jint SOURCE_TYPE_LOCAL_FILE();
		static jint SOURCE_TYPE_REMOTE_FILE();
		static jint SOURCE_TYPE_REMOTE_LIVE_STREAM();
		static jint SOURCE_TYPE_UNSPECIFIED();
		static jint VALUE_UNSPECIFIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaItemInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaItemInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getAudioChannelCount() const;
		jlong getAudioSampleCount() const;
		jint getAudioSampleRateHz() const;
		jlong getClipDurationMillis() const;
		JObject getCodecNames() const;
		JString getContainerMimeType() const;
		jlong getDataTypes() const;
		jlong getDurationMillis() const;
		JObject getSampleMimeTypes() const;
		jint getSourceType() const;
		jint getVideoDataSpace() const;
		jfloat getVideoFrameRate() const;
		jlong getVideoSampleCount() const;
		android::util::Size getVideoSize() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::metrics

