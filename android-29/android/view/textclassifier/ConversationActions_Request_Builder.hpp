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
		
		ConversationActions_Request_Builder(QAndroidJniObject obj);
		// Constructors
		ConversationActions_Request_Builder(__JniBaseClass arg0);
		ConversationActions_Request_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setHints(__JniBaseClass arg0);
		QAndroidJniObject setMaxSuggestions(jint arg0);
		QAndroidJniObject setTypeConfig(android::view::textclassifier::TextClassifier_EntityConfig arg0);
	};
} // namespace android::view::textclassifier

