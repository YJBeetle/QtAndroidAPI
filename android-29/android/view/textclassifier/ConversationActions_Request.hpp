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
		static QAndroidJniObject CREATOR();
		static jstring HINT_FOR_IN_APP();
		static jstring HINT_FOR_NOTIFICATION();
		
		ConversationActions_Request(QAndroidJniObject obj);
		// Constructors
		ConversationActions_Request() = default;
		
		// Methods
		jint describeContents();
		jstring getCallingPackageName();
		QAndroidJniObject getConversation();
		QAndroidJniObject getExtras();
		QAndroidJniObject getHints();
		jint getMaxSuggestions();
		QAndroidJniObject getTypeConfig();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

