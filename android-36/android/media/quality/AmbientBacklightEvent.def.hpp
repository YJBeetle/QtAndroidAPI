#pragma once

#include "../../../JObject.hpp"

namespace android::media::quality
{
	class AmbientBacklightMetadata;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media::quality
{
	class AmbientBacklightEvent : public JObject
	{
	public:
		// Fields
		static jint AMBIENT_BACKLIGHT_EVENT_DISABLED();
		static jint AMBIENT_BACKLIGHT_EVENT_ENABLED();
		static jint AMBIENT_BACKLIGHT_EVENT_INTERRUPTED();
		static jint AMBIENT_BACKLIGHT_EVENT_METADATA_AVAILABLE();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AmbientBacklightEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AmbientBacklightEvent(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AmbientBacklightEvent(jint arg0, android::media::quality::AmbientBacklightMetadata arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getEventType() const;
		android::media::quality::AmbientBacklightMetadata getMetadata() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::quality

