#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::app::people
{
	class ConversationStatus : public JObject
	{
	public:
		// Fields
		static jint ACTIVITY_ANNIVERSARY();
		static jint ACTIVITY_AUDIO();
		static jint ACTIVITY_BIRTHDAY();
		static jint ACTIVITY_GAME();
		static jint ACTIVITY_LOCATION();
		static jint ACTIVITY_NEW_STORY();
		static jint ACTIVITY_OTHER();
		static jint ACTIVITY_UPCOMING_BIRTHDAY();
		static jint ACTIVITY_VIDEO();
		static jint AVAILABILITY_AVAILABLE();
		static jint AVAILABILITY_BUSY();
		static jint AVAILABILITY_OFFLINE();
		static jint AVAILABILITY_UNKNOWN();
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConversationStatus(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConversationStatus(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getActivity() const;
		jint getAvailability() const;
		JString getDescription() const;
		jlong getEndTimeMillis() const;
		android::graphics::drawable::Icon getIcon() const;
		JString getId() const;
		jlong getStartTimeMillis() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::people

