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
		static __JniBaseClass CREATOR();
		static jint TYPE_AUDIO();
		static jint TYPE_SUBTITLE();
		static jint TYPE_VIDEO();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvTrackInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TvTrackInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAudioChannelCount();
		jint getAudioSampleRate();
		jstring getDescription();
		jstring getEncoding();
		android::os::Bundle getExtra();
		jstring getId();
		jstring getLanguage();
		jint getType();
		jbyte getVideoActiveFormatDescription();
		jfloat getVideoFrameRate();
		jint getVideoHeight();
		jfloat getVideoPixelAspectRatio();
		jint getVideoWidth();
		jint hashCode();
		jboolean isAudioDescription();
		jboolean isEncrypted();
		jboolean isHardOfHearing();
		jboolean isSpokenSubtitle();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::tv

