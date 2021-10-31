#include "./Debug_MemoryInfo.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "./Debug.hpp"

namespace android::os
{
	// Fields
	jint Debug::SHOW_CLASSLOADER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Debug",
			"SHOW_CLASSLOADER"
		);
	}
	jint Debug::SHOW_FULL_DETAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Debug",
			"SHOW_FULL_DETAIL"
		);
	}
	jint Debug::SHOW_INITIALIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Debug",
			"SHOW_INITIALIZED"
		);
	}
	jint Debug::TRACE_COUNT_ALLOCS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Debug",
			"TRACE_COUNT_ALLOCS"
		);
	}
	
	// QAndroidJniObject forward
	Debug::Debug(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void Debug::attachJvmtiAgent(jstring arg0, jstring arg1, java::lang::ClassLoader arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"attachJvmtiAgent",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void Debug::changeDebugPort(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"changeDebugPort",
			"(I)V",
			arg0
		);
	}
	void Debug::dumpHprofData(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"dumpHprofData",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean Debug::dumpService(jstring arg0, java::io::FileDescriptor arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Debug",
			"dumpService",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;[Ljava/lang/String;)Z",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void Debug::enableEmulatorTraceOutput()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"enableEmulatorTraceOutput",
			"()V"
		);
	}
	jint Debug::getBinderDeathObjectCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderDeathObjectCount",
			"()I"
		);
	}
	jint Debug::getBinderLocalObjectCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderLocalObjectCount",
			"()I"
		);
	}
	jint Debug::getBinderProxyObjectCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderProxyObjectCount",
			"()I"
		);
	}
	jint Debug::getBinderReceivedTransactions()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderReceivedTransactions",
			"()I"
		);
	}
	jint Debug::getBinderSentTransactions()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderSentTransactions",
			"()I"
		);
	}
	jint Debug::getGlobalAllocCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalAllocCount",
			"()I"
		);
	}
	jint Debug::getGlobalAllocSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalAllocSize",
			"()I"
		);
	}
	jint Debug::getGlobalClassInitCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalClassInitCount",
			"()I"
		);
	}
	jint Debug::getGlobalClassInitTime()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalClassInitTime",
			"()I"
		);
	}
	jint Debug::getGlobalExternalAllocCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalAllocCount",
			"()I"
		);
	}
	jint Debug::getGlobalExternalAllocSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalAllocSize",
			"()I"
		);
	}
	jint Debug::getGlobalExternalFreedCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalFreedCount",
			"()I"
		);
	}
	jint Debug::getGlobalExternalFreedSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalFreedSize",
			"()I"
		);
	}
	jint Debug::getGlobalFreedCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalFreedCount",
			"()I"
		);
	}
	jint Debug::getGlobalFreedSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalFreedSize",
			"()I"
		);
	}
	jint Debug::getGlobalGcInvocationCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalGcInvocationCount",
			"()I"
		);
	}
	jint Debug::getLoadedClassCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getLoadedClassCount",
			"()I"
		);
	}
	void Debug::getMemoryInfo(android::os::Debug_MemoryInfo arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"getMemoryInfo",
			"(Landroid/os/Debug$MemoryInfo;)V",
			arg0.object()
		);
	}
	jlong Debug::getNativeHeapAllocatedSize()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Debug",
			"getNativeHeapAllocatedSize",
			"()J"
		);
	}
	jlong Debug::getNativeHeapFreeSize()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Debug",
			"getNativeHeapFreeSize",
			"()J"
		);
	}
	jlong Debug::getNativeHeapSize()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Debug",
			"getNativeHeapSize",
			"()J"
		);
	}
	jlong Debug::getPss()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Debug",
			"getPss",
			"()J"
		);
	}
	jstring Debug::getRuntimeStat(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Debug",
			"getRuntimeStat",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	__JniBaseClass Debug::getRuntimeStats()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Debug",
			"getRuntimeStats",
			"()Ljava/util/Map;"
		);
	}
	jint Debug::getThreadAllocCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadAllocCount",
			"()I"
		);
	}
	jint Debug::getThreadAllocSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadAllocSize",
			"()I"
		);
	}
	jint Debug::getThreadExternalAllocCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadExternalAllocCount",
			"()I"
		);
	}
	jint Debug::getThreadExternalAllocSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadExternalAllocSize",
			"()I"
		);
	}
	jint Debug::getThreadGcInvocationCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadGcInvocationCount",
			"()I"
		);
	}
	jboolean Debug::isDebuggerConnected()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Debug",
			"isDebuggerConnected",
			"()Z"
		);
	}
	void Debug::printLoadedClasses(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"printLoadedClasses",
			"(I)V",
			arg0
		);
	}
	void Debug::resetAllCounts()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetAllCounts",
			"()V"
		);
	}
	void Debug::resetGlobalAllocCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalAllocCount",
			"()V"
		);
	}
	void Debug::resetGlobalAllocSize()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalAllocSize",
			"()V"
		);
	}
	void Debug::resetGlobalClassInitCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalClassInitCount",
			"()V"
		);
	}
	void Debug::resetGlobalClassInitTime()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalClassInitTime",
			"()V"
		);
	}
	void Debug::resetGlobalExternalAllocCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalAllocCount",
			"()V"
		);
	}
	void Debug::resetGlobalExternalAllocSize()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalAllocSize",
			"()V"
		);
	}
	void Debug::resetGlobalExternalFreedCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalFreedCount",
			"()V"
		);
	}
	void Debug::resetGlobalExternalFreedSize()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalFreedSize",
			"()V"
		);
	}
	void Debug::resetGlobalFreedCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalFreedCount",
			"()V"
		);
	}
	void Debug::resetGlobalFreedSize()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalFreedSize",
			"()V"
		);
	}
	void Debug::resetGlobalGcInvocationCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalGcInvocationCount",
			"()V"
		);
	}
	void Debug::resetThreadAllocCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadAllocCount",
			"()V"
		);
	}
	void Debug::resetThreadAllocSize()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadAllocSize",
			"()V"
		);
	}
	void Debug::resetThreadExternalAllocCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadExternalAllocCount",
			"()V"
		);
	}
	void Debug::resetThreadExternalAllocSize()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadExternalAllocSize",
			"()V"
		);
	}
	void Debug::resetThreadGcInvocationCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadGcInvocationCount",
			"()V"
		);
	}
	jint Debug::setAllocationLimit(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"setAllocationLimit",
			"(I)I",
			arg0
		);
	}
	jint Debug::setGlobalAllocationLimit(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"setGlobalAllocationLimit",
			"(I)I",
			arg0
		);
	}
	void Debug::startAllocCounting()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startAllocCounting",
			"()V"
		);
	}
	void Debug::startMethodTracing()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"()V"
		);
	}
	void Debug::startMethodTracing(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Debug::startMethodTracing(jstring arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Debug::startMethodTracing(jstring arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Debug::startMethodTracingSampling(jstring arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracingSampling",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Debug::startNativeTracing()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startNativeTracing",
			"()V"
		);
	}
	void Debug::stopAllocCounting()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"stopAllocCounting",
			"()V"
		);
	}
	void Debug::stopMethodTracing()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"stopMethodTracing",
			"()V"
		);
	}
	void Debug::stopNativeTracing()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"stopNativeTracing",
			"()V"
		);
	}
	jlong Debug::threadCpuTimeNanos()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Debug",
			"threadCpuTimeNanos",
			"()J"
		);
	}
	void Debug::waitForDebugger()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"waitForDebugger",
			"()V"
		);
	}
	jboolean Debug::waitingForDebugger()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Debug",
			"waitingForDebugger",
			"()Z"
		);
	}
} // namespace android::os

