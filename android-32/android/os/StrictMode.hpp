#pragma once

#include "./StrictMode_ThreadPolicy.def.hpp"
#include "./StrictMode_VmPolicy.def.hpp"
#include "../../JString.hpp"
#include "./StrictMode.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::os::StrictMode_ThreadPolicy StrictMode::allowThreadDiskReads()
	{
		return callStaticObjectMethod(
			"android.os.StrictMode",
			"allowThreadDiskReads",
			"()Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	inline android::os::StrictMode_ThreadPolicy StrictMode::allowThreadDiskWrites()
	{
		return callStaticObjectMethod(
			"android.os.StrictMode",
			"allowThreadDiskWrites",
			"()Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	inline void StrictMode::enableDefaults()
	{
		callStaticMethod<void>(
			"android.os.StrictMode",
			"enableDefaults",
			"()V"
		);
	}
	inline android::os::StrictMode_ThreadPolicy StrictMode::getThreadPolicy()
	{
		return callStaticObjectMethod(
			"android.os.StrictMode",
			"getThreadPolicy",
			"()Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	inline android::os::StrictMode_VmPolicy StrictMode::getVmPolicy()
	{
		return callStaticObjectMethod(
			"android.os.StrictMode",
			"getVmPolicy",
			"()Landroid/os/StrictMode$VmPolicy;"
		);
	}
	inline void StrictMode::noteSlowCall(JString arg0)
	{
		callStaticMethod<void>(
			"android.os.StrictMode",
			"noteSlowCall",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void StrictMode::setThreadPolicy(android::os::StrictMode_ThreadPolicy arg0)
	{
		callStaticMethod<void>(
			"android.os.StrictMode",
			"setThreadPolicy",
			"(Landroid/os/StrictMode$ThreadPolicy;)V",
			arg0.object()
		);
	}
	inline void StrictMode::setVmPolicy(android::os::StrictMode_VmPolicy arg0)
	{
		callStaticMethod<void>(
			"android.os.StrictMode",
			"setVmPolicy",
			"(Landroid/os/StrictMode$VmPolicy;)V",
			arg0.object()
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
