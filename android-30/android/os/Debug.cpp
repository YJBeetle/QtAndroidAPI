#include "../../JArray.hpp"
#include "./Debug_MemoryInfo.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../JString.hpp"
#include "./Debug.hpp"

namespace android::os
{
	// Fields
	jint Debug::SHOW_CLASSLOADER()
	{
		return getStaticField<jint>(
			"android.os.Debug",
			"SHOW_CLASSLOADER"
		);
	}
	jint Debug::SHOW_FULL_DETAIL()
	{
		return getStaticField<jint>(
			"android.os.Debug",
			"SHOW_FULL_DETAIL"
		);
	}
	jint Debug::SHOW_INITIALIZED()
	{
		return getStaticField<jint>(
			"android.os.Debug",
			"SHOW_INITIALIZED"
		);
	}
	jint Debug::TRACE_COUNT_ALLOCS()
	{
		return getStaticField<jint>(
			"android.os.Debug",
			"TRACE_COUNT_ALLOCS"
		);
	}
	
	// QJniObject forward
	Debug::Debug(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Debug::attachJvmtiAgent(JString arg0, JString arg1, java::lang::ClassLoader arg2)
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
	void Debug::changeDebugPort(jint arg0)
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"changeDebugPort",
			"(I)V",
			arg0
		);
	}
	void Debug::dumpHprofData(JString arg0)
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"dumpHprofData",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jboolean Debug::dumpService(JString arg0, java::io::FileDescriptor arg1, JArray arg2)
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
	void Debug::enableEmulatorTraceOutput()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"enableEmulatorTraceOutput",
			"()V"
		);
	}
	jint Debug::getBinderDeathObjectCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderDeathObjectCount",
			"()I"
		);
	}
	jint Debug::getBinderLocalObjectCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderLocalObjectCount",
			"()I"
		);
	}
	jint Debug::getBinderProxyObjectCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderProxyObjectCount",
			"()I"
		);
	}
	jint Debug::getBinderReceivedTransactions()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderReceivedTransactions",
			"()I"
		);
	}
	jint Debug::getBinderSentTransactions()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderSentTransactions",
			"()I"
		);
	}
	jint Debug::getGlobalAllocCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalAllocCount",
			"()I"
		);
	}
	jint Debug::getGlobalAllocSize()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalAllocSize",
			"()I"
		);
	}
	jint Debug::getGlobalClassInitCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalClassInitCount",
			"()I"
		);
	}
	jint Debug::getGlobalClassInitTime()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalClassInitTime",
			"()I"
		);
	}
	jint Debug::getGlobalExternalAllocCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalAllocCount",
			"()I"
		);
	}
	jint Debug::getGlobalExternalAllocSize()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalAllocSize",
			"()I"
		);
	}
	jint Debug::getGlobalExternalFreedCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalFreedCount",
			"()I"
		);
	}
	jint Debug::getGlobalExternalFreedSize()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalFreedSize",
			"()I"
		);
	}
	jint Debug::getGlobalFreedCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalFreedCount",
			"()I"
		);
	}
	jint Debug::getGlobalFreedSize()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalFreedSize",
			"()I"
		);
	}
	jint Debug::getGlobalGcInvocationCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalGcInvocationCount",
			"()I"
		);
	}
	jint Debug::getLoadedClassCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getLoadedClassCount",
			"()I"
		);
	}
	void Debug::getMemoryInfo(android::os::Debug_MemoryInfo arg0)
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"getMemoryInfo",
			"(Landroid/os/Debug$MemoryInfo;)V",
			arg0.object()
		);
	}
	jlong Debug::getNativeHeapAllocatedSize()
	{
		return callStaticMethod<jlong>(
			"android.os.Debug",
			"getNativeHeapAllocatedSize",
			"()J"
		);
	}
	jlong Debug::getNativeHeapFreeSize()
	{
		return callStaticMethod<jlong>(
			"android.os.Debug",
			"getNativeHeapFreeSize",
			"()J"
		);
	}
	jlong Debug::getNativeHeapSize()
	{
		return callStaticMethod<jlong>(
			"android.os.Debug",
			"getNativeHeapSize",
			"()J"
		);
	}
	jlong Debug::getPss()
	{
		return callStaticMethod<jlong>(
			"android.os.Debug",
			"getPss",
			"()J"
		);
	}
	JString Debug::getRuntimeStat(JString arg0)
	{
		return callStaticObjectMethod(
			"android.os.Debug",
			"getRuntimeStat",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject Debug::getRuntimeStats()
	{
		return callStaticObjectMethod(
			"android.os.Debug",
			"getRuntimeStats",
			"()Ljava/util/Map;"
		);
	}
	jint Debug::getThreadAllocCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadAllocCount",
			"()I"
		);
	}
	jint Debug::getThreadAllocSize()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadAllocSize",
			"()I"
		);
	}
	jint Debug::getThreadExternalAllocCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadExternalAllocCount",
			"()I"
		);
	}
	jint Debug::getThreadExternalAllocSize()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadExternalAllocSize",
			"()I"
		);
	}
	jint Debug::getThreadGcInvocationCount()
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadGcInvocationCount",
			"()I"
		);
	}
	jboolean Debug::isDebuggerConnected()
	{
		return callStaticMethod<jboolean>(
			"android.os.Debug",
			"isDebuggerConnected",
			"()Z"
		);
	}
	void Debug::printLoadedClasses(jint arg0)
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"printLoadedClasses",
			"(I)V",
			arg0
		);
	}
	void Debug::resetAllCounts()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetAllCounts",
			"()V"
		);
	}
	void Debug::resetGlobalAllocCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalAllocCount",
			"()V"
		);
	}
	void Debug::resetGlobalAllocSize()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalAllocSize",
			"()V"
		);
	}
	void Debug::resetGlobalClassInitCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalClassInitCount",
			"()V"
		);
	}
	void Debug::resetGlobalClassInitTime()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalClassInitTime",
			"()V"
		);
	}
	void Debug::resetGlobalExternalAllocCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalAllocCount",
			"()V"
		);
	}
	void Debug::resetGlobalExternalAllocSize()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalAllocSize",
			"()V"
		);
	}
	void Debug::resetGlobalExternalFreedCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalFreedCount",
			"()V"
		);
	}
	void Debug::resetGlobalExternalFreedSize()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalFreedSize",
			"()V"
		);
	}
	void Debug::resetGlobalFreedCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalFreedCount",
			"()V"
		);
	}
	void Debug::resetGlobalFreedSize()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalFreedSize",
			"()V"
		);
	}
	void Debug::resetGlobalGcInvocationCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalGcInvocationCount",
			"()V"
		);
	}
	void Debug::resetThreadAllocCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadAllocCount",
			"()V"
		);
	}
	void Debug::resetThreadAllocSize()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadAllocSize",
			"()V"
		);
	}
	void Debug::resetThreadExternalAllocCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadExternalAllocCount",
			"()V"
		);
	}
	void Debug::resetThreadExternalAllocSize()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadExternalAllocSize",
			"()V"
		);
	}
	void Debug::resetThreadGcInvocationCount()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadGcInvocationCount",
			"()V"
		);
	}
	jint Debug::setAllocationLimit(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"setAllocationLimit",
			"(I)I",
			arg0
		);
	}
	jint Debug::setGlobalAllocationLimit(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.os.Debug",
			"setGlobalAllocationLimit",
			"(I)I",
			arg0
		);
	}
	void Debug::startAllocCounting()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"startAllocCounting",
			"()V"
		);
	}
	void Debug::startMethodTracing()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"()V"
		);
	}
	void Debug::startMethodTracing(JString arg0)
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Debug::startMethodTracing(JString arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Debug::startMethodTracing(JString arg0, jint arg1, jint arg2)
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
	void Debug::startMethodTracingSampling(JString arg0, jint arg1, jint arg2)
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
	void Debug::startNativeTracing()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"startNativeTracing",
			"()V"
		);
	}
	void Debug::stopAllocCounting()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"stopAllocCounting",
			"()V"
		);
	}
	void Debug::stopMethodTracing()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"stopMethodTracing",
			"()V"
		);
	}
	void Debug::stopNativeTracing()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"stopNativeTracing",
			"()V"
		);
	}
	jlong Debug::threadCpuTimeNanos()
	{
		return callStaticMethod<jlong>(
			"android.os.Debug",
			"threadCpuTimeNanos",
			"()J"
		);
	}
	void Debug::waitForDebugger()
	{
		callStaticMethod<void>(
			"android.os.Debug",
			"waitForDebugger",
			"()V"
		);
	}
	jboolean Debug::waitingForDebugger()
	{
		return callStaticMethod<jboolean>(
			"android.os.Debug",
			"waitingForDebugger",
			"()Z"
		);
	}
} // namespace android::os

