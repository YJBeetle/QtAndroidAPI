#include "../../os/Bundle.hpp"
#include "./ConversationActions_Request.hpp"
#include "./TextClassifier_EntityConfig.hpp"
#include "./ConversationActions_Request_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	ConversationActions_Request_Builder::ConversationActions_Request_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConversationActions_Request_Builder::ConversationActions_Request_Builder(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.ConversationActions$Request$Builder",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ConversationActions_Request_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/ConversationActions$Request;"
		);
	}
	QAndroidJniObject ConversationActions_Request_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ConversationActions_Request_Builder::setHints(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setHints",
			"(Ljava/util/List;)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ConversationActions_Request_Builder::setMaxSuggestions(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMaxSuggestions",
			"(I)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0
		);
	}
	QAndroidJniObject ConversationActions_Request_Builder::setTypeConfig(android::view::textclassifier::TextClassifier_EntityConfig arg0)
	{
		return __thiz.callObjectMethod(
			"setTypeConfig",
			"(Landroid/view/textclassifier/TextClassifier$EntityConfig;)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view::textclassifier

