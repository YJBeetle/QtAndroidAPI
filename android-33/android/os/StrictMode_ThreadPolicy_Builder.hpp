#pragma once

#include "./StrictMode_ThreadPolicy.def.hpp"
#include "./StrictMode_ThreadPolicy_Builder.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline StrictMode_ThreadPolicy_Builder::StrictMode_ThreadPolicy_Builder()
		: JObject(
			"android.os.StrictMode$ThreadPolicy$Builder",
			"()V"
		) {}
	inline StrictMode_ThreadPolicy_Builder::StrictMode_ThreadPolicy_Builder(android::os::StrictMode_ThreadPolicy arg0)
		: JObject(
			"android.os.StrictMode$ThreadPolicy$Builder",
			"(Landroid/os/StrictMode$ThreadPolicy;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::os::StrictMode_ThreadPolicy StrictMode_ThreadPolicy_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::detectAll() const
	{
		return callObjectMethod(
			"detectAll",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::detectCustomSlowCalls() const
	{
		return callObjectMethod(
			"detectCustomSlowCalls",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::detectDiskReads() const
	{
		return callObjectMethod(
			"detectDiskReads",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::detectDiskWrites() const
	{
		return callObjectMethod(
			"detectDiskWrites",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::detectNetwork() const
	{
		return callObjectMethod(
			"detectNetwork",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::detectResourceMismatches() const
	{
		return callObjectMethod(
			"detectResourceMismatches",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::detectUnbufferedIo() const
	{
		return callObjectMethod(
			"detectUnbufferedIo",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::penaltyDeath() const
	{
		return callObjectMethod(
			"penaltyDeath",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::penaltyDeathOnNetwork() const
	{
		return callObjectMethod(
			"penaltyDeathOnNetwork",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::penaltyDialog() const
	{
		return callObjectMethod(
			"penaltyDialog",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::penaltyDropBox() const
	{
		return callObjectMethod(
			"penaltyDropBox",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::penaltyFlashScreen() const
	{
		return callObjectMethod(
			"penaltyFlashScreen",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::penaltyListener(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"penaltyListener",
			"(Ljava/util/concurrent/Executor;Landroid/os/StrictMode$OnThreadViolationListener;)Landroid/os/StrictMode$ThreadPolicy$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::penaltyLog() const
	{
		return callObjectMethod(
			"penaltyLog",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::permitAll() const
	{
		return callObjectMethod(
			"permitAll",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::permitCustomSlowCalls() const
	{
		return callObjectMethod(
			"permitCustomSlowCalls",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::permitDiskReads() const
	{
		return callObjectMethod(
			"permitDiskReads",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::permitDiskWrites() const
	{
		return callObjectMethod(
			"permitDiskWrites",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::permitNetwork() const
	{
		return callObjectMethod(
			"permitNetwork",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::permitResourceMismatches() const
	{
		return callObjectMethod(
			"permitResourceMismatches",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy_Builder StrictMode_ThreadPolicy_Builder::permitUnbufferedIo() const
	{
		return callObjectMethod(
			"permitUnbufferedIo",
			"()Landroid/os/StrictMode$ThreadPolicy$Builder;"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
