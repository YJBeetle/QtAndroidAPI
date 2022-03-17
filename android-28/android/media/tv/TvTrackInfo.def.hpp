#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::media::tv
{
	class TvTrackInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TYPE_AUDIO();
		static jint TYPE_SUBTITLE();
		static jint TYPE_VIDEO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvTrackInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvTrackInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getAudioChannelCount() const;
		jint getAudioSampleRate() const;
		JString getDescription() const;
		android::os::Bundle getExtra() const;
		JString getId() const;
		JString getLanguage() const;
		jint getType() const;
		jbyte getVideoActiveFormatDescription() const;
		jfloat getVideoFrameRate() const;
		jint getVideoHeight() const;
		jfloat getVideoPixelAspectRatio() const;
		jint getVideoWidth() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

