#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_CONVERSATIONACTIONSEVENT_BUILDER
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_CONVERSATIONACTIONSEVENT_BUILDER

#include "TextClassifierEvent_Builder.hpp"

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent_ConversationActionsEvent;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent_ConversationActionsEvent_Builder : public __jni_impl::android::view::textclassifier::TextClassifierEvent_Builder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		QAndroidJniObject build();
	};
} // namespace __jni_impl::android::view::textclassifier

#include "TextClassifierEvent_ConversationActionsEvent.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextClassifierEvent_ConversationActionsEvent_Builder::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifierEvent$ConversationActionsEvent$Builder",
			"(I)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject TextClassifierEvent_ConversationActionsEvent_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$ConversationActionsEvent;");
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassifierEvent_ConversationActionsEvent_Builder : public __jni_impl::android::view::textclassifier::TextClassifierEvent_ConversationActionsEvent_Builder
	{
	public:
		TextClassifierEvent_ConversationActionsEvent_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextClassifierEvent_ConversationActionsEvent_Builder(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_CONVERSATIONACTIONSEVENT_BUILDER

