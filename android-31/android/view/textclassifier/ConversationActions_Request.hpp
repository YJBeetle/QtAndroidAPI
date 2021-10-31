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
namespace android::view::textclassifier
{
	class TextClassifier_EntityConfig;
}

namespace android::view::textclassifier
{
	class ConversationActions_Request : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jstring HINT_FOR_IN_APP();
		static jstring HINT_FOR_NOTIFICATION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConversationActions_Request(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConversationActions_Request(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring getCallingPackageName();
		__JniBaseClass getConversation();
		android::os::Bundle getExtras();
		__JniBaseClass getHints();
		jint getMaxSuggestions();
		android::view::textclassifier::TextClassifier_EntityConfig getTypeConfig();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

