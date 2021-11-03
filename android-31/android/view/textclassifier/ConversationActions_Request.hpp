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
namespace android::view::textclassifier
{
	class TextClassifier_EntityConfig;
}
class JString;

namespace android::view::textclassifier
{
	class ConversationActions_Request : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString HINT_FOR_IN_APP();
		static JString HINT_FOR_NOTIFICATION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConversationActions_Request(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConversationActions_Request(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JString getCallingPackageName();
		JObject getConversation();
		android::os::Bundle getExtras();
		JObject getHints();
		jint getMaxSuggestions();
		android::view::textclassifier::TextClassifier_EntityConfig getTypeConfig();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

