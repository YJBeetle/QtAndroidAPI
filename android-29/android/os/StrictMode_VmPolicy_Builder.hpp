#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class StrictMode_VmPolicy;
}

namespace __jni_impl::android::os
{
	class StrictMode_VmPolicy_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::os::StrictMode_VmPolicy arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject detectActivityLeaks();
		QAndroidJniObject detectAll();
		QAndroidJniObject detectCleartextNetwork();
		QAndroidJniObject detectContentUriWithoutPermission();
		QAndroidJniObject detectCredentialProtectedWhileLocked();
		QAndroidJniObject detectFileUriExposure();
		QAndroidJniObject detectImplicitDirectBoot();
		QAndroidJniObject detectLeakedClosableObjects();
		QAndroidJniObject detectLeakedRegistrationObjects();
		QAndroidJniObject detectLeakedSqlLiteObjects();
		QAndroidJniObject detectNonSdkApiUsage();
		QAndroidJniObject detectUntaggedSockets();
		QAndroidJniObject penaltyDeath();
		QAndroidJniObject penaltyDeathOnCleartextNetwork();
		QAndroidJniObject penaltyDeathOnFileUriExposure();
		QAndroidJniObject penaltyDropBox();
		QAndroidJniObject penaltyListener(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject penaltyLog();
		QAndroidJniObject permitNonSdkApiUsage();
		QAndroidJniObject setClassInstanceLimit(jclass arg0, jint arg1);
	};
} // namespace __jni_impl::android::os

#include "StrictMode_VmPolicy.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void StrictMode_VmPolicy_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.StrictMode$VmPolicy$Builder",
			"()V"
		);
	}
	void StrictMode_VmPolicy_Builder::__constructor(__jni_impl::android::os::StrictMode_VmPolicy arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.StrictMode$VmPolicy$Builder",
			"(Landroid/os/StrictMode$VmPolicy;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject StrictMode_VmPolicy_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/os/StrictMode$VmPolicy;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::detectActivityLeaks()
	{
		return __thiz.callObjectMethod(
			"detectActivityLeaks",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::detectAll()
	{
		return __thiz.callObjectMethod(
			"detectAll",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::detectCleartextNetwork()
	{
		return __thiz.callObjectMethod(
			"detectCleartextNetwork",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::detectContentUriWithoutPermission()
	{
		return __thiz.callObjectMethod(
			"detectContentUriWithoutPermission",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::detectCredentialProtectedWhileLocked()
	{
		return __thiz.callObjectMethod(
			"detectCredentialProtectedWhileLocked",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::detectFileUriExposure()
	{
		return __thiz.callObjectMethod(
			"detectFileUriExposure",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::detectImplicitDirectBoot()
	{
		return __thiz.callObjectMethod(
			"detectImplicitDirectBoot",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::detectLeakedClosableObjects()
	{
		return __thiz.callObjectMethod(
			"detectLeakedClosableObjects",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::detectLeakedRegistrationObjects()
	{
		return __thiz.callObjectMethod(
			"detectLeakedRegistrationObjects",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::detectLeakedSqlLiteObjects()
	{
		return __thiz.callObjectMethod(
			"detectLeakedSqlLiteObjects",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::detectNonSdkApiUsage()
	{
		return __thiz.callObjectMethod(
			"detectNonSdkApiUsage",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::detectUntaggedSockets()
	{
		return __thiz.callObjectMethod(
			"detectUntaggedSockets",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::penaltyDeath()
	{
		return __thiz.callObjectMethod(
			"penaltyDeath",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::penaltyDeathOnCleartextNetwork()
	{
		return __thiz.callObjectMethod(
			"penaltyDeathOnCleartextNetwork",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::penaltyDeathOnFileUriExposure()
	{
		return __thiz.callObjectMethod(
			"penaltyDeathOnFileUriExposure",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::penaltyDropBox()
	{
		return __thiz.callObjectMethod(
			"penaltyDropBox",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::penaltyListener(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"penaltyListener",
			"(Ljava/util/concurrent/Executor;Landroid/os/StrictMode$OnVmViolationListener;)Landroid/os/StrictMode$VmPolicy$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::penaltyLog()
	{
		return __thiz.callObjectMethod(
			"penaltyLog",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::permitNonSdkApiUsage()
	{
		return __thiz.callObjectMethod(
			"permitNonSdkApiUsage",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_VmPolicy_Builder::setClassInstanceLimit(jclass arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setClassInstanceLimit",
			"(Ljava/lang/Class;I)Landroid/os/StrictMode$VmPolicy$Builder;",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class StrictMode_VmPolicy_Builder : public __jni_impl::android::os::StrictMode_VmPolicy_Builder
	{
	public:
		StrictMode_VmPolicy_Builder(QAndroidJniObject obj) { __thiz = obj; }
		StrictMode_VmPolicy_Builder()
		{
			__constructor();
		}
		StrictMode_VmPolicy_Builder(__jni_impl::android::os::StrictMode_VmPolicy arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

