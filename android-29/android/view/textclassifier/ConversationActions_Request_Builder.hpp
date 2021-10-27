#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS_REQUEST_BUILDER
#define ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS_REQUEST_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view::textclassifier
{
	class ConversationActions_Request;
}
namespace __jni_impl::android::view::textclassifier
{
	class TextClassifier_EntityConfig;
}

namespace __jni_impl::android::view::textclassifier
{
	class ConversationActions_Request_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setHints(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setMaxSuggestions(jint arg0);
		QAndroidJniObject setTypeConfig(__jni_impl::android::view::textclassifier::TextClassifier_EntityConfig arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/Bundle.hpp"
#include "ConversationActions_Request.hpp"
#include "TextClassifier_EntityConfig.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void ConversationActions_Request_Builder::__constructor(__jni_impl::__JniBaseClass arg0)
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
	QAndroidJniObject ConversationActions_Request_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ConversationActions_Request_Builder::setHints(__jni_impl::__JniBaseClass arg0)
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
	QAndroidJniObject ConversationActions_Request_Builder::setTypeConfig(__jni_impl::android::view::textclassifier::TextClassifier_EntityConfig arg0)
	{
		return __thiz.callObjectMethod(
			"setTypeConfig",
			"(Landroid/view/textclassifier/TextClassifier$EntityConfig;)Landroid/view/textclassifier/ConversationActions$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class ConversationActions_Request_Builder : public __jni_impl::android::view::textclassifier::ConversationActions_Request_Builder
	{
	public:
		ConversationActions_Request_Builder(QAndroidJniObject obj) { __thiz = obj; }
		ConversationActions_Request_Builder(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS_REQUEST_BUILDER

