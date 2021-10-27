#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaFormat;
}
namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class MediaPlayer_TrackInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint MEDIA_TRACK_TYPE_AUDIO();
		static jint MEDIA_TRACK_TYPE_METADATA();
		static jint MEDIA_TRACK_TYPE_SUBTITLE();
		static jint MEDIA_TRACK_TYPE_TIMEDTEXT();
		static jint MEDIA_TRACK_TYPE_UNKNOWN();
		static jint MEDIA_TRACK_TYPE_VIDEO();
		
		MediaPlayer_TrackInfo(QAndroidJniObject obj);
		// Constructors
		MediaPlayer_TrackInfo() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getFormat();
		jstring getLanguage();
		jint getTrackType();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

