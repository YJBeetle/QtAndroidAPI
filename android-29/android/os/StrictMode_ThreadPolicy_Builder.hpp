#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class StrictMode_ThreadPolicy;
}

namespace __jni_impl::android::os
{
	class StrictMode_ThreadPolicy_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::os::StrictMode_ThreadPolicy arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject detectAll();
		QAndroidJniObject detectCustomSlowCalls();
		QAndroidJniObject detectDiskReads();
		QAndroidJniObject detectDiskWrites();
		QAndroidJniObject detectNetwork();
		QAndroidJniObject detectResourceMismatches();
		QAndroidJniObject detectUnbufferedIo();
		QAndroidJniObject penaltyDeath();
		QAndroidJniObject penaltyDeathOnNetwork();
		QAndroidJniObject penaltyDialog();
		QAndroidJniObject penaltyDropBox();
		QAndroidJniObject penaltyFlashScreen();
		QAndroidJniObject penaltyListener(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject penaltyLog();
		QAndroidJniObject permitAll();
		QAndroidJniObject permitCustomSlowCalls();
		QAndroidJniObject permitDiskReads();
		QAndroidJniObject permitDiskWrites();
		QAndroidJniObject permitNetwork();
		QAndroidJniObject permitResourceMismatches();
		QAndroidJniObject permitUnbufferedIo();
	};
} // namespace __jni_impl::android::os

#include "./StrictMode_ThreadPolicy.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void StrictMode_ThreadPolicy_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.StrictMode$ThreadPolicy$Builder",
			"()V"
		);
	}
	void StrictMode_ThreadPolicy_Builder::__constructor(__jni_impl::android::os::StrictMode_ThreadPolicy arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.StrictMode$ThreadPolicy$Builder",
			"(Landroid/os/StrictMode$ThreadPolicy;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::detectAll()
	{
		return __thiz.callObjectMethod(
			"detectAll",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::detectCustomSlowCalls()
	{
		return __thiz.callObjectMethod(
			"detectCustomSlowCalls",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::detectDiskReads()
	{
		return __thiz.callObjectMethod(
			"detectDiskReads",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::detectDiskWrites()
	{
		return __thiz.callObjectMethod(
			"detectDiskWrites",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::detectNetwork()
	{
		return __thiz.callObjectMethod(
			"detectNetwork",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::detectResourceMismatches()
	{
		return __thiz.callObjectMethod(
			"detectResourceMismatches",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::detectUnbufferedIo()
	{
		return __thiz.callObjectMethod(
			"detectUnbufferedIo",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::penaltyDeath()
	{
		return __thiz.callObjectMethod(
			"penaltyDeath",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::penaltyDeathOnNetwork()
	{
		return __thiz.callObjectMethod(
			"penaltyDeathOnNetwork",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::penaltyDialog()
	{
		return __thiz.callObjectMethod(
			"penaltyDialog",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::penaltyDropBox()
	{
		return __thiz.callObjectMethod(
			"penaltyDropBox",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::penaltyFlashScreen()
	{
		return __thiz.callObjectMethod(
			"penaltyFlashScreen",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::penaltyListener(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"penaltyListener",
			"(Ljava/util/concurrent/Executor;Landroid/os/StrictMode$OnThreadViolationListener;)Landroid/os/StrictMode$ThreadPolicy$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::penaltyLog()
	{
		return __thiz.callObjectMethod(
			"penaltyLog",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::permitAll()
	{
		return __thiz.callObjectMethod(
			"permitAll",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::permitCustomSlowCalls()
	{
		return __thiz.callObjectMethod(
			"permitCustomSlowCalls",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::permitDiskReads()
	{
		return __thiz.callObjectMethod(
			"permitDiskReads",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::permitDiskWrites()
	{
		return __thiz.callObjectMethod(
			"permitDiskWrites",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::permitNetwork()
	{
		return __thiz.callObjectMethod(
			"permitNetwork",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::permitResourceMismatches()
	{
		return __thiz.callObjectMethod(
			"permitResourceMismatches",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::permitUnbufferedIo()
	{
		return __thiz.callObjectMethod(
			"permitUnbufferedIo",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class StrictMode_ThreadPolicy_Builder : public __jni_impl::android::os::StrictMode_ThreadPolicy_Builder
	{
	public:
		StrictMode_ThreadPolicy_Builder(QAndroidJniObject obj) { __thiz = obj; }
		StrictMode_ThreadPolicy_Builder()
		{
			__constructor();
		}
		StrictMode_ThreadPolicy_Builder(__jni_impl::android::os::StrictMode_ThreadPolicy arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

