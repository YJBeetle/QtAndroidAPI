#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class ConversationActions_Request_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConversationActions_Request_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConversationActions_Request_Builder(QAndroidJniObject obj);
		
		// Constructors
		ConversationActions_Request_Builder(__JniBaseClass arg0);
		
		// Methods
		android::view::textclassifier::ConversationActions_Request build();
		android::view::textclassifier::ConversationActions_Request_Builder setExtras(android::os::Bundle arg0);
		android::view::textclassifier::ConversationActions_Request_Builder setHints(__JniBaseClass arg0);
		android::view::textclassifier::ConversationActions_Request_Builder setMaxSuggestions(jint arg0);
		android::view::textclassifier::ConversationActions_Request_Builder setTypeConfig(android::view::textclassifier::TextClassifier_EntityConfig arg0);
	};
} // namespace android::view::textclassifier

