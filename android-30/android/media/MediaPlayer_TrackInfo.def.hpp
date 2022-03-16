#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaFormat;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media
{
	class MediaPlayer_TrackInfo : public JObject
	{
	public:
		// Fields
		static jint MEDIA_TRACK_TYPE_AUDIO();
		static jint MEDIA_TRACK_TYPE_METADATA();
		static jint MEDIA_TRACK_TYPE_SUBTITLE();
		static jint MEDIA_TRACK_TYPE_TIMEDTEXT();
		static jint MEDIA_TRACK_TYPE_UNKNOWN();
		static jint MEDIA_TRACK_TYPE_VIDEO();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaPlayer_TrackInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaPlayer_TrackInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::media::MediaFormat getFormat() const;
		JString getLanguage() const;
		jint getTrackType() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

