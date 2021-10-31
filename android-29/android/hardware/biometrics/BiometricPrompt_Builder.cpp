#include "../../content/Context.hpp"
#include "./BiometricPrompt.hpp"
#include "./BiometricPrompt_Builder.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// QJniObject forward
	BiometricPrompt_Builder::BiometricPrompt_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BiometricPrompt_Builder::BiometricPrompt_Builder(android::content::Context arg0)
		: __JniBaseClass(
			"android.hardware.biometrics.BiometricPrompt$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	android::hardware::biometrics::BiometricPrompt BiometricPrompt_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/hardware/biometrics/BiometricPrompt;"
		);
	}
	android::hardware::biometrics::BiometricPrompt_Builder BiometricPrompt_Builder::setConfirmationRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setConfirmationRequired",
			"(Z)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0
		);
	}
	android::hardware::biometrics::BiometricPrompt_Builder BiometricPrompt_Builder::setDescription(jstring arg0)
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0
		);
	}
	android::hardware::biometrics::BiometricPrompt_Builder BiometricPrompt_Builder::setDeviceCredentialAllowed(jboolean arg0)
	{
		return callObjectMethod(
			"setDeviceCredentialAllowed",
			"(Z)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0
		);
	}
	android::hardware::biometrics::BiometricPrompt_Builder BiometricPrompt_Builder::setNegativeButton(jstring arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"setNegativeButton",
			"(Ljava/lang/CharSequence;Ljava/util/concurrent/Executor;Landroid/content/DialogInterface$OnClickListener;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	android::hardware::biometrics::BiometricPrompt_Builder BiometricPrompt_Builder::setSubtitle(jstring arg0)
	{
		return callObjectMethod(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0
		);
	}
	android::hardware::biometrics::BiometricPrompt_Builder BiometricPrompt_Builder::setTitle(jstring arg0)
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0
		);
	}
} // namespace android::hardware::biometrics

