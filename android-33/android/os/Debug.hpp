#pragma once

#include "../../JArray.hpp"
#include "./Debug_MemoryInfo.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/lang/ClassLoader.def.hpp"
#include "../../JString.hpp"
#include "./Debug.def.hpp"

namespace android::os
{
	// Fields
	inline jint Debug::SHOW_CLASSLOADER()
	{
		return getStaticField<jint>(
			"android.os.Debug",
			"SHOW_CLASSLOADER"
		);
	}
	inline jint Debug::SHOW_FULL_DETAIL()
	{
		return getStaticField<jint>(
			"android.os.Debug",
			"SHOW_FULL_DETAIL"
		);
	}
	inline jint Debug::SHOW_INITIALIZED()
	{
		return getStaticField<jint>(
			"android.os.Debug",
			"SHOW_INITIALIZED"
		);
	}
	inline jint Debug::TRACE_COUNT_ALLOCS()
	{
		return getStaticField<jint>(
			"android.os.Debug",
			"TRACE_COUNT_ALLOCS"
		);
	}
	
	// Constructors
	
	// Methods
	inline void Debug::attachJvmtiAgent(JString arg0, JString arg1, java::lang::ClassLoader arg2)
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"attachJvmtiAgent",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void Debug::changeDebugPort(jint arg0)
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"changeDebugPort",
			"(I)V",
			arg0
		);
	}
	inline void Debug::dumpHprofData(JString arg0)
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"dumpHprofData",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean Debug::dumpService(JString arg0, java::io::FileDescriptor arg1, JArray arg2)
	{
		return callStaticMethod<jboolean>(
			"android.os.Debug",
			"dumpService",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;[Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	inline void Debug::enableEmulatorTraceOutput()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"enableEmulatorTraceOutput",
			"()V"
		);
	}
	inline jint Debug::getBinderDeathObjectCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderDeathObjectCount",
			"()I"
		);
	}
	inline jint Debug::getBinderLocalObjectCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderLocalObjectCount",
			"()I"
		);
	}
	inline jint Debug::getBinderProxyObjectCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderProxyObjectCount",
			"()I"
		);
	}
	inline jint Debug::getBinderReceivedTransactions()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderReceivedTransactions",
			"()I"
		);
	}
	inline jint Debug::getBinderSentTransactions()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderSentTransactions",
			"()I"
		);
	}
	inline jint Debug::getGlobalAllocCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalAllocCount",
			"()I"
		);
	}
	inline jint Debug::getGlobalAllocSize()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalAllocSize",
			"()I"
		);
	}
	inline jint Debug::getGlobalClassInitCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalClassInitCount",
			"()I"
		);
	}
	inline jint Debug::getGlobalClassInitTime()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalClassInitTime",
			"()I"
		);
	}
	inline jint Debug::getGlobalExternalAllocCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalAllocCount",
			"()I"
		);
	}
	inline jint Debug::getGlobalExternalAllocSize()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalAllocSize",
			"()I"
		);
	}
	inline jint Debug::getGlobalExternalFreedCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalFreedCount",
			"()I"
		);
	}
	inline jint Debug::getGlobalExternalFreedSize()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalFreedSize",
			"()I"
		);
	}
	inline jint Debug::getGlobalFreedCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalFreedCount",
			"()I"
		);
	}
	inline jint Debug::getGlobalFreedSize()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalFreedSize",
			"()I"
		);
	}
	inline jint Debug::getGlobalGcInvocationCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalGcInvocationCount",
			"()I"
		);
	}
	inline jint Debug::getLoadedClassCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getLoadedClassCount",
			"()I"
		);
	}
	inline void Debug::getMemoryInfo(android::os::Debug_MemoryInfo arg0)
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"getMemoryInfo",
			"(Landroid/os/Debug$MemoryInfo;)V",
			arg0.object()
		);
	}
	inline jlong Debug::getNativeHeapAllocatedSize()
	{
		return callStaticMethod<jlong>(
			"android.os.Debug",
			"getNativeHeapAllocatedSize",
			"()J"
		);
	}
	inline jlong Debug::getNativeHeapFreeSize()
	{
		return callStaticMethod<jlong>(
			"android.os.Debug",
			"getNativeHeapFreeSize",
			"()J"
		);
	}
	inline jlong Debug::getNativeHeapSize()
	{
		return callStaticMethod<jlong>(
			"android.os.Debug",
			"getNativeHeapSize",
			"()J"
		);
	}
	inline jlong Debug::getPss()
	{
		return callStaticMethod<jlong>(
			"android.os.Debug",
			"getPss",
			"()J"
		);
	}
	inline JString Debug::getRuntimeStat(JString arg0)
	{
		return callStaticObjectMethod(
			"android.os.Debug",
			"getRuntimeStat",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject Debug::getRuntimeStats()
	{
		return callStaticObjectMethod(
			"android.os.Debug",
			"getRuntimeStats",
			"()Ljava/util/Map;"
		);
	}
	inline jint Debug::getThreadAllocCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadAllocCount",
			"()I"
		);
	}
	inline jint Debug::getThreadAllocSize()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadAllocSize",
			"()I"
		);
	}
	inline jint Debug::getThreadExternalAllocCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadExternalAllocCount",
			"()I"
		);
	}
	inline jint Debug::getThreadExternalAllocSize()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadExternalAllocSize",
			"()I"
		);
	}
	inline jint Debug::getThreadGcInvocationCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadGcInvocationCount",
			"()I"
		);
	}
	inline jboolean Debug::isDebuggerConnected()
	{
		return callStaticMethod<jboolean>(
			"android.os.Debug",
			"isDebuggerConnected",
			"()Z"
		);
	}
	inline void Debug::printLoadedClasses(jint arg0)
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"printLoadedClasses",
			"(I)V",
			arg0
		);
	}
	inline void Debug::resetAllCounts()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetAllCounts",
			"()V"
		);
	}
	inline void Debug::resetGlobalAllocCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalAllocCount",
			"()V"
		);
	}
	inline void Debug::resetGlobalAllocSize()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalAllocSize",
			"()V"
		);
	}
	inline void Debug::resetGlobalClassInitCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalClassInitCount",
			"()V"
		);
	}
	inline void Debug::resetGlobalClassInitTime()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalClassInitTime",
			"()V"
		);
	}
	inline void Debug::resetGlobalExternalAllocCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalAllocCount",
			"()V"
		);
	}
	inline void Debug::resetGlobalExternalAllocSize()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalAllocSize",
			"()V"
		);
	}
	inline void Debug::resetGlobalExternalFreedCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalFreedCount",
			"()V"
		);
	}
	inline void Debug::resetGlobalExternalFreedSize()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalFreedSize",
			"()V"
		);
	}
	inline void Debug::resetGlobalFreedCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalFreedCount",
			"()V"
		);
	}
	inline void Debug::resetGlobalFreedSize()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalFreedSize",
			"()V"
		);
	}
	inline void Debug::resetGlobalGcInvocationCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalGcInvocationCount",
			"()V"
		);
	}
	inline void Debug::resetThreadAllocCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadAllocCount",
			"()V"
		);
	}
	inline void Debug::resetThreadAllocSize()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadAllocSize",
			"()V"
		);
	}
	inline void Debug::resetThreadExternalAllocCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadExternalAllocCount",
			"()V"
		);
	}
	inline void Debug::resetThreadExternalAllocSize()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadExternalAllocSize",
			"()V"
		);
	}
	inline void Debug::resetThreadGcInvocationCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadGcInvocationCount",
			"()V"
		);
	}
	inline jint Debug::setAllocationLimit(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"setAllocationLimit",
			"(I)I",
			arg0
		);
	}
	inline jint Debug::setGlobalAllocationLimit(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"setGlobalAllocationLimit",
			"(I)I",
			arg0
		);
	}
	inline void Debug::startAllocCounting()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"startAllocCounting",
			"()V"
		);
	}
	inline void Debug::startMethodTracing()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"()V"
		);
	}
	inline void Debug::startMethodTracing(JString arg0)
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Debug::startMethodTracing(JString arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Debug::startMethodTracing(JString arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void Debug::startMethodTracingSampling(JString arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracingSampling",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void Debug::startNativeTracing()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"startNativeTracing",
			"()V"
		);
	}
	inline void Debug::stopAllocCounting()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"stopAllocCounting",
			"()V"
		);
	}
	inline void Debug::stopMethodTracing()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"stopMethodTracing",
			"()V"
		);
	}
	inline void Debug::stopNativeTracing()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"stopNativeTracing",
			"()V"
		);
	}
	inline jlong Debug::threadCpuTimeNanos()
	{
		return callStaticMethod<jlong>(
			"android.os.Debug",
			"threadCpuTimeNanos",
			"()J"
		);
	}
	inline void Debug::waitForDebugger()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"waitForDebugger",
			"()V"
		);
	}
	inline jboolean Debug::waitingForDebugger()
	{
		return callStaticMethod<jboolean>(
			"android.os.Debug",
			"waitingForDebugger",
			"()Z"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
