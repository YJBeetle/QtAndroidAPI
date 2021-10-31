#pragma once

#include "../../../__JniBaseClass.hpp"

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
namespace java::time
{
	class ZonedDateTime;
}

namespace android::view::textclassifier
{
	class ConversationActions_Message : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject PERSON_USER_OTHERS();
		static QAndroidJniObject PERSON_USER_SELF();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConversationActions_Message(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConversationActions_Message(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		QAndroidJniObject getAuthor();
		QAndroidJniObject getExtras();
		QAndroidJniObject getReferenceTime();
		jstring getText();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

