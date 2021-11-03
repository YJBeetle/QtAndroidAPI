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
		
		// QJniObject forward
		template<typename ...Ts> explicit ConversationActions_Request(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConversationActions_Request(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString getCallingPackageName() const;
		JObject getConversation() const;
		android::os::Bundle getExtras() const;
		JObject getHints() const;
		jint getMaxSuggestions() const;
		android::view::textclassifier::TextClassifier_EntityConfig getTypeConfig() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::textclassifier

