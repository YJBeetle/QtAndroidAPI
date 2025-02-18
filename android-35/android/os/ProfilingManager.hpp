#pragma once

#include "./Bundle.def.hpp"
#include "./CancellationSignal.def.hpp"
#include "../../JString.hpp"
#include "./ProfilingManager.def.hpp"

namespace android::os
{
	// Fields
	inline jint ProfilingManager::PROFILING_TYPE_HEAP_PROFILE()
	{
		return getStaticField<jint>(
			"android.os.ProfilingManager",
			"PROFILING_TYPE_HEAP_PROFILE"
		);
	}
	inline jint ProfilingManager::PROFILING_TYPE_JAVA_HEAP_DUMP()
	{
		return getStaticField<jint>(
			"android.os.ProfilingManager",
			"PROFILING_TYPE_JAVA_HEAP_DUMP"
		);
	}
	inline jint ProfilingManager::PROFILING_TYPE_STACK_SAMPLING()
	{
		return getStaticField<jint>(
			"android.os.ProfilingManager",
			"PROFILING_TYPE_STACK_SAMPLING"
		);
	}
	inline jint ProfilingManager::PROFILING_TYPE_SYSTEM_TRACE()
	{
		return getStaticField<jint>(
			"android.os.ProfilingManager",
			"PROFILING_TYPE_SYSTEM_TRACE"
		);
	}
	
	// Constructors
	
	// Methods
	inline void ProfilingManager::registerForAllProfilingResults(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerForAllProfilingResults",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ProfilingManager::requestProfiling(jint arg0, android::os::Bundle arg1, JString arg2, android::os::CancellationSignal arg3, JObject arg4, JObject arg5) const
	{
		callMethod<void>(
			"requestProfiling",
			"(ILandroid/os/Bundle;Ljava/lang/String;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object(),
			arg5.object()
		);
	}
	inline void ProfilingManager::unregisterForAllProfilingResults(JObject arg0) const
	{
		callMethod<void>(
			"unregisterForAllProfilingResults",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
