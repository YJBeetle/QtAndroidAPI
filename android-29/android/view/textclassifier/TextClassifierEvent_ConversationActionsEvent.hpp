#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_CONVERSATIONACTIONSEVENT
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_CONVERSATIONACTIONSEVENT

#include "../../../__JniBaseClass.hpp"
#include "TextClassifierEvent.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent_ConversationActionsEvent : public __jni_impl::android::view::textclassifier::TextClassifierEvent
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextClassifierEvent_ConversationActionsEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$ConversationActionsEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void TextClassifierEvent_ConversationActionsEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifierEvent$ConversationActionsEvent",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassifierEvent_ConversationActionsEvent : public __jni_impl::android::view::textclassifier::TextClassifierEvent_ConversationActionsEvent
	{
	public:
		TextClassifierEvent_ConversationActionsEvent(QAndroidJniObject obj) { __thiz = obj; }
		TextClassifierEvent_ConversationActionsEvent()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_CONVERSATIONACTIONSEVENT

