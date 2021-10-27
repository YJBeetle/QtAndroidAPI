#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class RemoteAction;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view::textclassifier
{
	class ConversationAction;
}

namespace __jni_impl::android::view::textclassifier
{
	class ConversationAction_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAction(__jni_impl::android::app::RemoteAction arg0);
		QAndroidJniObject setConfidenceScore(jfloat arg0);
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setTextReply(jstring arg0);
		QAndroidJniObject setTextReply(const QString &arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../app/RemoteAction.hpp"
#include "../../os/Bundle.hpp"
#include "ConversationAction.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void ConversationAction_Builder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.ConversationAction$Builder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ConversationAction_Builder::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.ConversationAction$Builder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject ConversationAction_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/ConversationAction;"
		);
	}
	QAndroidJniObject ConversationAction_Builder::setAction(__jni_impl::android::app::RemoteAction arg0)
	{
		return __thiz.callObjectMethod(
			"setAction",
			"(Landroid/app/RemoteAction;)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ConversationAction_Builder::setConfidenceScore(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setConfidenceScore",
			"(F)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0
		);
	}
	QAndroidJniObject ConversationAction_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ConversationAction_Builder::setTextReply(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setTextReply",
			"(Ljava/lang/CharSequence;)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0
		);
	}
	QAndroidJniObject ConversationAction_Builder::setTextReply(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setTextReply",
			"(Ljava/lang/CharSequence;)Landroid/view/textclassifier/ConversationAction$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class ConversationAction_Builder : public __jni_impl::android::view::textclassifier::ConversationAction_Builder
	{
	public:
		ConversationAction_Builder(QAndroidJniObject obj) { __thiz = obj; }
		ConversationAction_Builder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view::textclassifier

