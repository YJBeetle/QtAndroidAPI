#pragma once

#ifndef ANDROID_OS_DEBUG
#define ANDROID_OS_DEBUG

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Debug_MemoryInfo;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}

namespace __jni_impl::android::os
{
	class Debug : public __JniBaseClass
	{
	public:
		// Fields
		static jint SHOW_CLASSLOADER();
		static jint SHOW_FULL_DETAIL();
		static jint SHOW_INITIALIZED();
		static jint TRACE_COUNT_ALLOCS();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void getMemoryInfo(__jni_impl::android::os::Debug_MemoryInfo arg0);
		static void waitForDebugger();
		static jboolean waitingForDebugger();
		static jboolean isDebuggerConnected();
		static void changeDebugPort(jint arg0);
		static void startNativeTracing();
		static void stopNativeTracing();
		static void enableEmulatorTraceOutput();
		static void startMethodTracing(jstring arg0, jint arg1, jint arg2);
		static void startMethodTracing(jstring arg0, jint arg1);
		static void startMethodTracing();
		static void startMethodTracing(jstring arg0);
		static void startMethodTracingSampling(jstring arg0, jint arg1, jint arg2);
		static void stopMethodTracing();
		static jlong threadCpuTimeNanos();
		static jint getGlobalAllocCount();
		static void resetGlobalAllocCount();
		static jint getGlobalAllocSize();
		static void resetGlobalAllocSize();
		static jint getGlobalFreedCount();
		static void resetGlobalFreedCount();
		static jint getGlobalFreedSize();
		static void resetGlobalFreedSize();
		static jint getGlobalGcInvocationCount();
		static void resetGlobalGcInvocationCount();
		static jint getGlobalClassInitCount();
		static void resetGlobalClassInitCount();
		static jint getGlobalClassInitTime();
		static void resetGlobalClassInitTime();
		static jint getGlobalExternalAllocCount();
		static void resetGlobalExternalAllocSize();
		static void resetGlobalExternalAllocCount();
		static jint getGlobalExternalAllocSize();
		static jint getGlobalExternalFreedCount();
		static void resetGlobalExternalFreedCount();
		static jint getGlobalExternalFreedSize();
		static void resetGlobalExternalFreedSize();
		static jint getThreadAllocCount();
		static void resetThreadAllocCount();
		static jint getThreadAllocSize();
		static void resetThreadAllocSize();
		static jint getThreadExternalAllocCount();
		static void resetThreadExternalAllocCount();
		static jint getThreadExternalAllocSize();
		static void resetThreadExternalAllocSize();
		static jint getThreadGcInvocationCount();
		static void resetThreadGcInvocationCount();
		static void resetAllCounts();
		static QAndroidJniObject getRuntimeStat(jstring arg0);
		static QAndroidJniObject getRuntimeStats();
		static jlong getNativeHeapSize();
		static jlong getNativeHeapAllocatedSize();
		static jlong getNativeHeapFreeSize();
		static jlong getPss();
		static jint setAllocationLimit(jint arg0);
		static jint setGlobalAllocationLimit(jint arg0);
		static void printLoadedClasses(jint arg0);
		static jint getLoadedClassCount();
		static void dumpHprofData(jstring arg0);
		static jint getBinderSentTransactions();
		static jint getBinderReceivedTransactions();
		static jint getBinderLocalObjectCount();
		static jint getBinderProxyObjectCount();
		static jint getBinderDeathObjectCount();
		static jboolean dumpService(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, jarray arg2);
		static void attachJvmtiAgent(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2);
		static void startAllocCounting();
		static void stopAllocCounting();
	};
} // namespace __jni_impl::android::os

#include "Debug_MemoryInfo.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/lang/ClassLoader.hpp"

namespace __jni_impl::android::os
{
	// Fields
	jint Debug::SHOW_CLASSLOADER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Debug",
			"SHOW_CLASSLOADER");
	}
	jint Debug::SHOW_FULL_DETAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Debug",
			"SHOW_FULL_DETAIL");
	}
	jint Debug::SHOW_INITIALIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Debug",
			"SHOW_INITIALIZED");
	}
	jint Debug::TRACE_COUNT_ALLOCS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Debug",
			"TRACE_COUNT_ALLOCS");
	}
	
	// Constructors
	void Debug::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Debug",
			"(V)V");
	}
	
	// Methods
	void Debug::getMemoryInfo(__jni_impl::android::os::Debug_MemoryInfo arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"getMemoryInfo",
			"(Landroid/os/Debug$MemoryInfo;)V",
			arg0.__jniObject().object());
	}
	void Debug::waitForDebugger()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"waitForDebugger",
			"()V");
	}
	jboolean Debug::waitingForDebugger()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Debug",
			"waitingForDebugger",
			"()Z");
	}
	jboolean Debug::isDebuggerConnected()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Debug",
			"isDebuggerConnected",
			"()Z");
	}
	void Debug::changeDebugPort(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"changeDebugPort",
			"(I)V",
			arg0);
	}
	void Debug::startNativeTracing()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startNativeTracing",
			"()V");
	}
	void Debug::stopNativeTracing()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"stopNativeTracing",
			"()V");
	}
	void Debug::enableEmulatorTraceOutput()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"enableEmulatorTraceOutput",
			"()V");
	}
	void Debug::startMethodTracing(jstring arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2);
	}
	void Debug::startMethodTracing(jstring arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	void Debug::startMethodTracing()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"()V");
	}
	void Debug::startMethodTracing(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void Debug::startMethodTracingSampling(jstring arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracingSampling",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2);
	}
	void Debug::stopMethodTracing()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"stopMethodTracing",
			"()V");
	}
	jlong Debug::threadCpuTimeNanos()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Debug",
			"threadCpuTimeNanos",
			"()J");
	}
	jint Debug::getGlobalAllocCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalAllocCount",
			"()I");
	}
	void Debug::resetGlobalAllocCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalAllocCount",
			"()V");
	}
	jint Debug::getGlobalAllocSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalAllocSize",
			"()I");
	}
	void Debug::resetGlobalAllocSize()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalAllocSize",
			"()V");
	}
	jint Debug::getGlobalFreedCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalFreedCount",
			"()I");
	}
	void Debug::resetGlobalFreedCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalFreedCount",
			"()V");
	}
	jint Debug::getGlobalFreedSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalFreedSize",
			"()I");
	}
	void Debug::resetGlobalFreedSize()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalFreedSize",
			"()V");
	}
	jint Debug::getGlobalGcInvocationCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalGcInvocationCount",
			"()I");
	}
	void Debug::resetGlobalGcInvocationCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalGcInvocationCount",
			"()V");
	}
	jint Debug::getGlobalClassInitCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalClassInitCount",
			"()I");
	}
	void Debug::resetGlobalClassInitCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalClassInitCount",
			"()V");
	}
	jint Debug::getGlobalClassInitTime()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalClassInitTime",
			"()I");
	}
	void Debug::resetGlobalClassInitTime()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalClassInitTime",
			"()V");
	}
	jint Debug::getGlobalExternalAllocCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalAllocCount",
			"()I");
	}
	void Debug::resetGlobalExternalAllocSize()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalAllocSize",
			"()V");
	}
	void Debug::resetGlobalExternalAllocCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalAllocCount",
			"()V");
	}
	jint Debug::getGlobalExternalAllocSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalAllocSize",
			"()I");
	}
	jint Debug::getGlobalExternalFreedCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalFreedCount",
			"()I");
	}
	void Debug::resetGlobalExternalFreedCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalFreedCount",
			"()V");
	}
	jint Debug::getGlobalExternalFreedSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getGlobalExternalFreedSize",
			"()I");
	}
	void Debug::resetGlobalExternalFreedSize()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetGlobalExternalFreedSize",
			"()V");
	}
	jint Debug::getThreadAllocCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadAllocCount",
			"()I");
	}
	void Debug::resetThreadAllocCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadAllocCount",
			"()V");
	}
	jint Debug::getThreadAllocSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadAllocSize",
			"()I");
	}
	void Debug::resetThreadAllocSize()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadAllocSize",
			"()V");
	}
	jint Debug::getThreadExternalAllocCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadExternalAllocCount",
			"()I");
	}
	void Debug::resetThreadExternalAllocCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadExternalAllocCount",
			"()V");
	}
	jint Debug::getThreadExternalAllocSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadExternalAllocSize",
			"()I");
	}
	void Debug::resetThreadExternalAllocSize()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadExternalAllocSize",
			"()V");
	}
	jint Debug::getThreadGcInvocationCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getThreadGcInvocationCount",
			"()I");
	}
	void Debug::resetThreadGcInvocationCount()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetThreadGcInvocationCount",
			"()V");
	}
	void Debug::resetAllCounts()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"resetAllCounts",
			"()V");
	}
	QAndroidJniObject Debug::getRuntimeStat(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Debug",
			"getRuntimeStat",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Debug::getRuntimeStats()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Debug",
			"getRuntimeStats",
			"()Ljava/util/Map;");
	}
	jlong Debug::getNativeHeapSize()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Debug",
			"getNativeHeapSize",
			"()J");
	}
	jlong Debug::getNativeHeapAllocatedSize()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Debug",
			"getNativeHeapAllocatedSize",
			"()J");
	}
	jlong Debug::getNativeHeapFreeSize()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Debug",
			"getNativeHeapFreeSize",
			"()J");
	}
	jlong Debug::getPss()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Debug",
			"getPss",
			"()J");
	}
	jint Debug::setAllocationLimit(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"setAllocationLimit",
			"(I)I",
			arg0);
	}
	jint Debug::setGlobalAllocationLimit(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"setGlobalAllocationLimit",
			"(I)I",
			arg0);
	}
	void Debug::printLoadedClasses(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"printLoadedClasses",
			"(I)V",
			arg0);
	}
	jint Debug::getLoadedClassCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getLoadedClassCount",
			"()I");
	}
	void Debug::dumpHprofData(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"dumpHprofData",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jint Debug::getBinderSentTransactions()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderSentTransactions",
			"()I");
	}
	jint Debug::getBinderReceivedTransactions()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderReceivedTransactions",
			"()I");
	}
	jint Debug::getBinderLocalObjectCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderLocalObjectCount",
			"()I");
	}
	jint Debug::getBinderProxyObjectCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderProxyObjectCount",
			"()I");
	}
	jint Debug::getBinderDeathObjectCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Debug",
			"getBinderDeathObjectCount",
			"()I");
	}
	jboolean Debug::dumpService(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Debug",
			"dumpService",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;[Ljava/lang/String;)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
	void Debug::attachJvmtiAgent(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"attachJvmtiAgent",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void Debug::startAllocCounting()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startAllocCounting",
			"()V");
	}
	void Debug::stopAllocCounting()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"stopAllocCounting",
			"()V");
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class Debug : public __jni_impl::android::os::Debug
	{
	public:
		Debug(QAndroidJniObject obj) { __thiz = obj; }
		Debug()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_DEBUG

