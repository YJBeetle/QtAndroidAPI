#include "../../os/Bundle.hpp"
#include "./ConversationActions_Request.hpp"
#include "./TextClassifier_EntityConfig.hpp"
#include "./ConversationActions_Request_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QAndroidJniObject forward
	ConversationActions_Request_Builder::ConversationActions_Request_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ConversationActions_Request_Builder::ConversationActions_Request_Builder(__JniBaseClass arg0)
		: __JniBaseClass(
			"android.view.textclassifier.ConversationActions$Request$Builder",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject ConversationActions_Request_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/ConversationActions$Request;"
		);
	}
	QAndroidJniObject ConversationActions_Request_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ConversationActions_Request_Builder::setHints(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setHints",
			"(Ljava/util/List;)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ConversationActions_Request_Builder::setMaxSuggestions(jint arg0)
	{
		return callObjectMethod(
			"setMaxSuggestions",
			"(I)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0
		);
	}
	QAndroidJniObject ConversationActions_Request_Builder::setTypeConfig(android::view::textclassifier::TextClassifier_EntityConfig arg0)
	{
		return callObjectMethod(
			"setTypeConfig",
			"(Landroid/view/textclassifier/TextClassifier$EntityConfig;)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

