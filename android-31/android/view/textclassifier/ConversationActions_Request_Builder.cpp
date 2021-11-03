#include "../../os/Bundle.hpp"
#include "./ConversationActions_Request.hpp"
#include "./TextClassifier_EntityConfig.hpp"
#include "./ConversationActions_Request_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QJniObject forward
	ConversationActions_Request_Builder::ConversationActions_Request_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConversationActions_Request_Builder::ConversationActions_Request_Builder(JObject arg0)
		: JObject(
			"android.view.textclassifier.ConversationActions$Request$Builder",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	android::view::textclassifier::ConversationActions_Request ConversationActions_Request_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/ConversationActions$Request;"
		);
	}
	android::view::textclassifier::ConversationActions_Request_Builder ConversationActions_Request_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::ConversationActions_Request_Builder ConversationActions_Request_Builder::setHints(JObject arg0)
	{
		return callObjectMethod(
			"setHints",
			"(Ljava/util/List;)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::ConversationActions_Request_Builder ConversationActions_Request_Builder::setMaxSuggestions(jint arg0)
	{
		return callObjectMethod(
			"setMaxSuggestions",
			"(I)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0
		);
	}
	android::view::textclassifier::ConversationActions_Request_Builder ConversationActions_Request_Builder::setTypeConfig(android::view::textclassifier::TextClassifier_EntityConfig arg0)
	{
		return callObjectMethod(
			"setTypeConfig",
			"(Landroid/view/textclassifier/TextClassifier$EntityConfig;)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

