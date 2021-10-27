#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::media::tv
{
	class TvTrackInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint TYPE_AUDIO();
		static jint TYPE_SUBTITLE();
		static jint TYPE_VIDEO();
		
		TvTrackInfo(QAndroidJniObject obj);
		// Constructors
		TvTrackInfo() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAudioChannelCount();
		jint getAudioSampleRate();
		jstring getDescription();
		QAndroidJniObject getExtra();
		jstring getId();
		jstring getLanguage();
		jint getType();
		jbyte getVideoActiveFormatDescription();
		jfloat getVideoFrameRate();
		jint getVideoHeight();
		jfloat getVideoPixelAspectRatio();
		jint getVideoWidth();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::tv

