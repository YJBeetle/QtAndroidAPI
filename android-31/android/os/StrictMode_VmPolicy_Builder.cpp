#include "./StrictMode_VmPolicy.hpp"
#include "../../JClass.hpp"
#include "./StrictMode_VmPolicy_Builder.hpp"

namespace android::os
{
	// Fields
	
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
	android::os::StrictMode_VmPolicy StrictMode_VmPolicy_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/os/StrictMode$VmPolicy;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectActivityLeaks() const
	{
		return callObjectMethod(
			"detectActivityLeaks",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectAll() const
	{
		return callObjectMethod(
			"detectAll",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectCleartextNetwork() const
	{
		return callObjectMethod(
			"detectCleartextNetwork",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectContentUriWithoutPermission() const
	{
		return callObjectMethod(
			"detectContentUriWithoutPermission",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectCredentialProtectedWhileLocked() const
	{
		return callObjectMethod(
			"detectCredentialProtectedWhileLocked",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectFileUriExposure() const
	{
		return callObjectMethod(
			"detectFileUriExposure",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectImplicitDirectBoot() const
	{
		return callObjectMethod(
			"detectImplicitDirectBoot",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectIncorrectContextUse() const
	{
		return callObjectMethod(
			"detectIncorrectContextUse",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectLeakedClosableObjects() const
	{
		return callObjectMethod(
			"detectLeakedClosableObjects",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectLeakedRegistrationObjects() const
	{
		return callObjectMethod(
			"detectLeakedRegistrationObjects",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectLeakedSqlLiteObjects() const
	{
		return callObjectMethod(
			"detectLeakedSqlLiteObjects",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectNonSdkApiUsage() const
	{
		return callObjectMethod(
			"detectNonSdkApiUsage",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectUnsafeIntentLaunch() const
	{
		return callObjectMethod(
			"detectUnsafeIntentLaunch",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::detectUntaggedSockets() const
	{
		return callObjectMethod(
			"detectUntaggedSockets",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::penaltyDeath() const
	{
		return callObjectMethod(
			"penaltyDeath",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::penaltyDeathOnCleartextNetwork() const
	{
		return callObjectMethod(
			"penaltyDeathOnCleartextNetwork",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::penaltyDeathOnFileUriExposure() const
	{
		return callObjectMethod(
			"penaltyDeathOnFileUriExposure",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::penaltyDropBox() const
	{
		return callObjectMethod(
			"penaltyDropBox",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::penaltyListener(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"penaltyListener",
			"(Ljava/util/concurrent/Executor;Landroid/os/StrictMode$OnVmViolationListener;)Landroid/os/StrictMode$VmPolicy$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::penaltyLog() const
	{
		return callObjectMethod(
			"penaltyLog",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::permitNonSdkApiUsage() const
	{
		return callObjectMethod(
			"permitNonSdkApiUsage",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::permitUnsafeIntentLaunch() const
	{
		return callObjectMethod(
			"permitUnsafeIntentLaunch",
			"()Landroid/os/StrictMode$VmPolicy$Builder;"
		);
	}
	android::os::StrictMode_VmPolicy_Builder StrictMode_VmPolicy_Builder::setClassInstanceLimit(JClass arg0, jint arg1) const
	{
		return callObjectMethod(
			"setClassInstanceLimit",
			"(Ljava/lang/Class;I)Landroid/os/StrictMode$VmPolicy$Builder;",
			arg0.object<jclass>(),
			arg1
		);
	}
} // namespace android::os

