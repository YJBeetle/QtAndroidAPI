#include "./StrictMode_VmPolicy.hpp"
#include "../../JClass.hpp"
#include "./StrictMode_VmPolicy_Builder.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	StrictMode_VmPolicy_Builder::StrictMode_VmPolicy_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	StrictMode_VmPolicy_Builder::StrictMode_VmPolicy_Builder()
		: JObject(
			"android.os.StrictMode$VmPolicy$Builder",
			"()V"
		) {}
	StrictMode_VmPolicy_Builder::StrictMode_VmPolicy_Builder(android::os::StrictMode_VmPolicy arg0)
		: JObject(
			"android.os.StrictMode$VmPolicy$Builder",
			"(Landroid/os/StrictMode$VmPolicy;)V",
			arg0.object()
		) {}
	
	// Methods
	android::os::StrictMode_VmPolicy StrictMode_VmPolicy_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/os/StrictMode$VmPolicy;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectActivityLeaks()
	{
		return callObjectMethod(
			"detectActivityLeaks",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectAll()
	{
		return callObjectMethod(
			"detectAll",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectCleartextNetwork()
	{
		return callObjectMethod(
			"detectCleartextNetwork",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectContentUriWithoutPermission()
	{
		return callObjectMethod(
			"detectContentUriWithoutPermission",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectFileUriExposure()
	{
		return callObjectMethod(
			"detectFileUriExposure",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectLeakedClosableObjects()
	{
		return callObjectMethod(
			"detectLeakedClosableObjects",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectLeakedRegistrationObjects()
	{
		return callObjectMethod(
			"detectLeakedRegistrationObjects",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectLeakedSqlLiteObjects()
	{
		return callObjectMethod(
			"detectLeakedSqlLiteObjects",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectNonSdkApiUsage()
	{
		return callObjectMethod(
			"detectNonSdkApiUsage",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectUntaggedSockets()
	{
		return callObjectMethod(
			"detectUntaggedSockets",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::penaltyDeath()
	{
		return callObjectMethod(
			"penaltyDeath",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::penaltyDeathOnCleartextNetwork()
	{
		return callObjectMethod(
			"penaltyDeathOnCleartextNetwork",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::penaltyDeathOnFileUriExposure()
	{
		return callObjectMethod(
			"penaltyDeathOnFileUriExposure",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::penaltyDropBox()
	{
		return callObjectMethod(
			"penaltyDropBox",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::penaltyListener(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"penaltyListener",
			"(Ljava/util/concurrent/Executor;Landroid/os/StrictMode$OnVmViolationListener;)Landroid/os/StrictMode$VmPolicy$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::penaltyLog()
	{
		return callObjectMethod(
			"penaltyLog",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::permitNonSdkApiUsage()
	{
		return callObjectMethod(
			"permitNonSdkApiUsage",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::setClassInstanceLimit(JClass arg0, jint arg1)
	{
		return callObjectMethod(
			"setClassInstanceLimit",
			"(Ljava/lang/Class;I)Landroid/os/StrictMode$VmPolicy$Builder;",
			arg0.object<jclass>(),
			arg1
		);
	}
} // namespace android::os

