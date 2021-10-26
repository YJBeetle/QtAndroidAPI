#pragma once

#ifndef ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_BUILDER
#define ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::hardware::biometrics
{
	class BiometricPrompt;
}

namespace __jni_impl::android::hardware::biometrics
{
	class BiometricPrompt_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setNegativeButton(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject setNegativeButton(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject setSubtitle(jstring arg0);
		QAndroidJniObject setSubtitle(const QString &arg0);
		QAndroidJniObject setDeviceCredentialAllowed(jboolean arg0);
		QAndroidJniObject setDescription(jstring arg0);
		QAndroidJniObject setDescription(const QString &arg0);
		QAndroidJniObject setConfirmationRequired(jboolean arg0);
		QAndroidJniObject setTitle(jstring arg0);
		QAndroidJniObject setTitle(const QString &arg0);
	};
} // namespace __jni_impl::android::hardware::biometrics

#include "../../content/Context.hpp"
#include "BiometricPrompt.hpp"

namespace __jni_impl::android::hardware::biometrics
{
	// Fields
	
	// Constructors
	void BiometricPrompt_Builder::__constructor(__jni_impl::android::content::Context arg0)
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
	QAndroidJniObject BiometricPrompt_Builder::setNegativeButton(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"setNegativeButton",
			"(Ljava/lang/CharSequence;Ljava/util/concurrent/Executor;Landroid/content/DialogInterface$OnClickListener;)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject BiometricPrompt_Builder::setNegativeButton(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
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
	QAndroidJniObject BiometricPrompt_Builder::setDeviceCredentialAllowed(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setDeviceCredentialAllowed",
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
	QAndroidJniObject BiometricPrompt_Builder::setConfirmationRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setConfirmationRequired",
			"(Z)Landroid/hardware/biometrics/BiometricPrompt$Builder;",
			arg0
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
} // namespace __jni_impl::android::hardware::biometrics

namespace android::hardware::biometrics
{
	class BiometricPrompt_Builder : public __jni_impl::android::hardware::biometrics::BiometricPrompt_Builder
	{
	public:
		BiometricPrompt_Builder(QAndroidJniObject obj) { __thiz = obj; }
		BiometricPrompt_Builder(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::hardware::biometrics

#endif // ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_BUILDER

