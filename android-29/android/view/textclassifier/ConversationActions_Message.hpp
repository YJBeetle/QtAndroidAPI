#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class Person;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;
namespace java::time
{
	class ZonedDateTime;
}

namespace android::view::textclassifier
{
	class ConversationActions_Message : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static android::app::Person PERSON_USER_OTHERS();
		static android::app::Person PERSON_USER_SELF();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConversationActions_Message(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConversationActions_Message(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::app::Person getAuthor() const;
		android::os::Bundle getExtras() const;
		java::time::ZonedDateTime getReferenceTime() const;
		JString getText() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::textclassifier

