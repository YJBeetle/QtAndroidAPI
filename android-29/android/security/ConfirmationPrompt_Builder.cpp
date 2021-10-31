#include "../content/Context.hpp"
#include "./ConfirmationPrompt.hpp"
#include "./ConfirmationPrompt_Builder.hpp"

namespace android::security
{
	// Fields
	
	ConfirmationPrompt_Builder::ConfirmationPrompt_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConfirmationPrompt_Builder::ConfirmationPrompt_Builder(android::content::Context arg0)
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
} // namespace android::security

