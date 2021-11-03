#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view::textclassifier
{
	class ConversationActions_Request;
}
namespace android::view::textclassifier
{
	class TextClassifier_EntityConfig;
}

namespace android::view::textclassifier
{
	class ConversationActions_Request_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConversationActions_Request_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConversationActions_Request_Builder(QJniObject obj);
		
		// Constructors
		ConversationActions_Request_Builder(JObject arg0);
		
		// Methods
		android::view::textclassifier::ConversationActions_Request build();
		android::view::textclassifier::ConversationActions_Request_Builder setExtras(android::os::Bundle arg0);
		android::view::textclassifier::ConversationActions_Request_Builder setHints(JObject arg0);
		android::view::textclassifier::ConversationActions_Request_Builder setMaxSuggestions(jint arg0);
		android::view::textclassifier::ConversationActions_Request_Builder setTypeConfig(android::view::textclassifier::TextClassifier_EntityConfig arg0);
	};
} // namespace android::view::textclassifier

