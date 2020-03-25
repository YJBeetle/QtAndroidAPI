#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS_MESSAGE_BUILDER
#define ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS_MESSAGE_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Person;
}
namespace __jni_impl::android::view::textclassifier
{
	class ConversationActions_Message;
}
namespace __jni_impl::java::time
{
	class ZonedDateTime;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::view::textclassifier
{
	class ConversationActions_Message_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::app::Person arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setText(jstring arg0);
		QAndroidJniObject setReferenceTime(__jni_impl::java::time::ZonedDateTime arg0);
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../app/Person.hpp"
#include "ConversationActions_Message.hpp"
#include "../../../java/time/ZonedDateTime.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void ConversationActions_Message_Builder::__constructor(__jni_impl::android::app::Person arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.ConversationActions$Message$Builder",
			"(Landroid/app/Person;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ConversationActions_Message_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/ConversationActions$Message;");
	}
	QAndroidJniObject ConversationActions_Message_Builder::setText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setText",
			"(Ljava/lang/CharSequence;)Landroid/view/textclassifier/ConversationActions$Message$Builder;",
			arg0);
	}
	QAndroidJniObject ConversationActions_Message_Builder::setReferenceTime(__jni_impl::java::time::ZonedDateTime arg0)
	{
		return __thiz.callObjectMethod(
			"setReferenceTime",
			"(Ljava/time/ZonedDateTime;)Landroid/view/textclassifier/ConversationActions$Message$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ConversationActions_Message_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/ConversationActions$Message$Builder;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class ConversationActions_Message_Builder : public __jni_impl::android::view::textclassifier::ConversationActions_Message_Builder
	{
	public:
		ConversationActions_Message_Builder(QAndroidJniObject obj) { __thiz = obj; }
		ConversationActions_Message_Builder(__jni_impl::android::app::Person arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS_MESSAGE_BUILDER

