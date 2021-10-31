#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class ConversationActions : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ConversationActions(QAndroidJniObject obj);
		// Constructors
		ConversationActions(__JniBaseClass arg0, jstring arg1);
		ConversationActions() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getConversationActions();
		jstring getId();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

