#pragma once

#include "../../os/Bundle.def.hpp"
#include "./ConversationActions_Request.def.hpp"
#include "./TextClassifier_EntityConfig.def.hpp"
#include "./ConversationActions_Request_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline ConversationActions_Request_Builder::ConversationActions_Request_Builder(JObject arg0)
		: JObject(
			"android.view.textclassifier.ConversationActions$Request$Builder",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::view::textclassifier::ConversationActions_Request ConversationActions_Request_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/ConversationActions$Request;"
		);
	}
	inline android::view::textclassifier::ConversationActions_Request_Builder ConversationActions_Request_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::ConversationActions_Request_Builder ConversationActions_Request_Builder::setHints(JObject arg0) const
	{
		return callObjectMethod(
			"setHints",
			"(Ljava/util/List;)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::ConversationActions_Request_Builder ConversationActions_Request_Builder::setMaxSuggestions(jint arg0) const
	{
		return callObjectMethod(
			"setMaxSuggestions",
			"(I)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0
		);
	}
	inline android::view::textclassifier::ConversationActions_Request_Builder ConversationActions_Request_Builder::setTypeConfig(android::view::textclassifier::TextClassifier_EntityConfig arg0) const
	{
		return callObjectMethod(
			"setTypeConfig",
			"(Landroid/view/textclassifier/TextClassifier$EntityConfig;)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textclassifier;
#endif
