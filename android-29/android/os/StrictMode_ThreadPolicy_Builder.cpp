#include "./StrictMode_ThreadPolicy.hpp"
#include "./StrictMode_ThreadPolicy_Builder.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	StrictMode_ThreadPolicy_Builder::StrictMode_ThreadPolicy_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	StrictMode_ThreadPolicy_Builder::StrictMode_ThreadPolicy_Builder()
		: __JniBaseClass(
			"android.os.StrictMode$ThreadPolicy$Builder",
			"()V"
		) {}
	StrictMode_ThreadPolicy_Builder::StrictMode_ThreadPolicy_Builder(android::os::StrictMode_ThreadPolicy arg0)
		: __JniBaseClass(
			"android.os.StrictMode$ThreadPolicy$Builder",
			"(Landroid/os/StrictMode$ThreadPolicy;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::detectAll()
	{
		return callObjectMethod(
			"detectAll",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::detectCustomSlowCalls()
	{
		return callObjectMethod(
			"detectCustomSlowCalls",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::detectDiskReads()
	{
		return callObjectMethod(
			"detectDiskReads",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::detectDiskWrites()
	{
		return callObjectMethod(
			"detectDiskWrites",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::detectNetwork()
	{
		return callObjectMethod(
			"detectNetwork",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::detectResourceMismatches()
	{
		return callObjectMethod(
			"detectResourceMismatches",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::detectUnbufferedIo()
	{
		return callObjectMethod(
			"detectUnbufferedIo",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::penaltyDeath()
	{
		return callObjectMethod(
			"penaltyDeath",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::penaltyDeathOnNetwork()
	{
		return callObjectMethod(
			"penaltyDeathOnNetwork",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::penaltyDialog()
	{
		return callObjectMethod(
			"penaltyDialog",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::penaltyDropBox()
	{
		return callObjectMethod(
			"penaltyDropBox",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::penaltyFlashScreen()
	{
		return callObjectMethod(
			"penaltyFlashScreen",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::penaltyListener(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"penaltyListener",
			"(Ljava/util/concurrent/Executor;Landroid/os/StrictMode$OnThreadViolationListener;)Landroid/os/StrictMode$ThreadPolicy$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::penaltyLog()
	{
		return callObjectMethod(
			"penaltyLog",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::permitAll()
	{
		return callObjectMethod(
			"permitAll",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::permitCustomSlowCalls()
	{
		return callObjectMethod(
			"permitCustomSlowCalls",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::permitDiskReads()
	{
		return callObjectMethod(
			"permitDiskReads",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::permitDiskWrites()
	{
		return callObjectMethod(
			"permitDiskWrites",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::permitNetwork()
	{
		return callObjectMethod(
			"permitNetwork",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::permitResourceMismatches()
	{
		return callObjectMethod(
			"permitResourceMismatches",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	QAndroidJniObject StrictMode_ThreadPolicy_Builder::permitUnbufferedIo()
	{
		return callObjectMethod(
			"permitUnbufferedIo",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
} // namespace android::os

