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
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ConversationActions(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConversationActions(QJniObject obj);
		
		// Constructors
		ConversationActions(__JniBaseClass arg0, jstring arg1);
		
		// Methods
		jint describeContents();
		__JniBaseClass getConversationActions();
		jstring getId();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

