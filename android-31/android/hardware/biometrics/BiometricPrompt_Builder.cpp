#include "../../content/Context.hpp"
#include "./BiometricPrompt.hpp"
#include "../../../JString.hpp"
#include "./BiometricPrompt_Builder.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// Constructors
	BiometricPrompt_Builder::BiometricPrompt_Builder(android::content::Context arg0)
		: JObject(
			"android.hardware.biometrics.BiometricPrompt$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	android::hardware::biometrics::BiometricPrompt BiometricPrompt_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/hardware/biometrics/BiometricPrompt;"
		);
	}
	android::hardware::biometrics::BiometricPrompt_Builder BiometricPrompt_Builder::setAllowedAuthenticators(jint arg0) const
	{
		return callObjectMethod(
			"setAllowedAuthenticators",
			"(I)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0
		);
	}
	android::hardware::biometrics::BiometricPrompt_Builder BiometricPrompt_Builder::setConfirmationRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setConfirmationRequired",
			"(Z)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0
		);
	}
	android::hardware::biometrics::BiometricPrompt_Builder BiometricPrompt_Builder::setDescription(JString arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0.object<jstring>()
		);
	}
	android::hardware::biometrics::BiometricPrompt_Builder BiometricPrompt_Builder::setDeviceCredentialAllowed(jboolean arg0) const
	{
		return callObjectMethod(
			"setDeviceCredentialAllowed",
			"(Z)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0
		);
	}
	android::hardware::biometrics::BiometricPrompt_Builder BiometricPrompt_Builder::setNegativeButton(JString arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"setNegativeButton",
			"(Ljava/lang/CharSequence;Ljava/util/concurrent/Executor;Landroid/content/DialogInterface$OnClickListener;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	android::hardware::biometrics::BiometricPrompt_Builder BiometricPrompt_Builder::setSubtitle(JString arg0) const
	{
		return callObjectMethod(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0.object<jstring>()
		);
	}
	android::hardware::biometrics::BiometricPrompt_Builder BiometricPrompt_Builder::setTitle(JString arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::hardware::biometrics

