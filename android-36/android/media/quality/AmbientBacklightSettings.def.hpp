#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::quality
{
	class AmbientBacklightSettings : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SOURCE_AUDIO();
		static jint SOURCE_AUDIO_VIDEO();
		static jint SOURCE_NONE();
		static jint SOURCE_VIDEO();
		
		// QJniObject forward
		template<typename ...Ts> explicit AmbientBacklightSettings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AmbientBacklightSettings(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AmbientBacklightSettings(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6);
		
		// Methods
		jint describeContents() const;
		jint getColorFormat() const;
		jint getHorizontalZonesCount() const;
		jint getMaxFps() const;
		jint getSource() const;
		jint getThreshold() const;
		jint getVerticalZonesCount() const;
		jboolean isLetterboxOmitted() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::quality

