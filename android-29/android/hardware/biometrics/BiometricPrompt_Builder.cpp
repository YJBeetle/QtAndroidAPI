#include "../../content/Context.hpp"
#include "./BiometricPrompt.hpp"
#include "./BiometricPrompt_Builder.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	BiometricPrompt_Builder::BiometricPrompt_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BiometricPrompt_Builder::BiometricPrompt_Builder(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.biometrics.BiometricPrompt$Builder",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject BiometricPrompt_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/hardware/biometrics/BiometricPrompt;"
		);
	}
	QAndroidJniObject BiometricPrompt_Builder::setConfirmationRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setConfirmationRequired",
			"(Z)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0
		);
	}
	QAndroidJniObject BiometricPrompt_Builder::setDescription(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0
		);
	}
	QAndroidJniObject BiometricPrompt_Builder::setDescription(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject BiometricPrompt_Builder::setDeviceCredentialAllowed(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setDeviceCredentialAllowed",
			"(Z)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0
		);
	}
	QAndroidJniObject BiometricPrompt_Builder::setNegativeButton(jstring arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"setNegativeButton",
			"(Ljava/lang/CharSequence;Ljava/util/concurrent/Executor;Landroid/content/DialogInterface$OnClickListener;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject BiometricPrompt_Builder::setNegativeButton(const QString &arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"setNegativeButton",
			"(Ljava/lang/CharSequence;Ljava/util/concurrent/Executor;Landroid/content/DialogInterface$OnClickListener;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject BiometricPrompt_Builder::setSubtitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0
		);
	}
	QAndroidJniObject BiometricPrompt_Builder::setSubtitle(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject BiometricPrompt_Builder::setTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0
		);
	}
	QAndroidJniObject BiometricPrompt_Builder::setTitle(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::hardware::biometrics

