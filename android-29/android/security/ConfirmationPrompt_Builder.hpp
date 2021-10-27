#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::security
{
	class ConfirmationPrompt;
}

namespace __jni_impl::android::security
{
	class ConfirmationPrompt_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtraData(jbyteArray arg0);
		QAndroidJniObject setPromptText(jstring arg0);
		QAndroidJniObject setPromptText(const QString &arg0);
	};
} // namespace __jni_impl::android::security

#include "../content/Context.hpp"
#include "./ConfirmationPrompt.hpp"

namespace __jni_impl::android::security
{
	// Fields
	
	// Constructors
	void ConfirmationPrompt_Builder::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.ConfirmationPrompt$Builder",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ConfirmationPrompt_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/security/ConfirmationPrompt;"
		);
	}
	QAndroidJniObject ConfirmationPrompt_Builder::setExtraData(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"setExtraData",
			"([B)Landroid/security/ConfirmationPrompt$Builder;",
			arg0
		);
	}
	QAndroidJniObject ConfirmationPrompt_Builder::setPromptText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setPromptText",
			"(Ljava/lang/CharSequence;)Landroid/security/ConfirmationPrompt$Builder;",
			arg0
		);
	}
	QAndroidJniObject ConfirmationPrompt_Builder::setPromptText(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setPromptText",
			"(Ljava/lang/CharSequence;)Landroid/security/ConfirmationPrompt$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::security

namespace android::security
{
	class ConfirmationPrompt_Builder : public __jni_impl::android::security::ConfirmationPrompt_Builder
	{
	public:
		ConfirmationPrompt_Builder(QAndroidJniObject obj) { __thiz = obj; }
		ConfirmationPrompt_Builder(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::security

