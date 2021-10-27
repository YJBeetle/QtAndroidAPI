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
		static void attachJvmtiAgent(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2);
		static void attachJvmtiAgent(const QString &arg0, const QString &arg1, __jni_impl::java::lang::ClassLoader arg2);
		static void changeDebugPort(jint arg0);
		static void dumpHprofData(jstring arg0);
		static void dumpHprofData(const QString &arg0);
		static jboolean dumpService(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, jarray arg2);
		static jboolean dumpService(const QString &arg0, __jni_impl::java::io::FileDescriptor arg1, jarray arg2);
		static void enableEmulatorTraceOutput();
		static jint getBinderDeathObjectCount();
		static jint getBinderLocalObjectCount();
		static jint getBinderProxyObjectCount();
		static jint getBinderReceivedTransactions();
		static jint getBinderSentTransactions();
		static jint getGlobalAllocCount();
		static jint getGlobalAllocSize();
		static jint getGlobalClassInitCount();
		static jint getGlobalClassInitTime();
		static jint getGlobalExternalAllocCount();
		static jint getGlobalExternalAllocSize();
		static jint getGlobalExternalFreedCount();
		static jint getGlobalExternalFreedSize();
		static jint getGlobalFreedCount();
		static jint getGlobalFreedSize();
		static jint getGlobalGcInvocationCount();
		static jint getLoadedClassCount();
		static void getMemoryInfo(__jni_impl::android::os::Debug_MemoryInfo arg0);
		static jlong getNativeHeapAllocatedSize();
		static jlong getNativeHeapFreeSize();
		static jlong getNativeHeapSize();
		static jlong getPss();
		static jstring getRuntimeStat(jstring arg0);
		static jstring getRuntimeStat(const QString &arg0);
		static QAndroidJniObject getRuntimeStats();
		static jint getThreadAllocCount();
		static jint getThreadAllocSize();
		static jint getThreadExternalAllocCount();
		static jint getThreadExternalAllocSize();
		static jint getThreadGcInvocationCount();
		static jboolean isDebuggerConnected();
		static void printLoadedClasses(jint arg0);
		static void resetAllCounts();
		static void resetGlobalAllocCount();
		static void resetGlobalAllocSize();
		static void resetGlobalClassInitCount();
		static void resetGlobalClassInitTime();
		static void resetGlobalExternalAllocCount();
		static void resetGlobalExternalAllocSize();
		static void resetGlobalExternalFreedCount();
		static void resetGlobalExternalFreedSize();
		static void resetGlobalFreedCount();
		static void resetGlobalFreedSize();
		static void resetGlobalGcInvocationCount();
		static void resetThreadAllocCount();
		static void resetThreadAllocSize();
		static void resetThreadExternalAllocCount();
		static void resetThreadExternalAllocSize();
		static void resetThreadGcInvocationCount();
		static jint setAllocationLimit(jint arg0);
		static jint setGlobalAllocationLimit(jint arg0);
		static void startAllocCounting();
		static void startMethodTracing();
		static void startMethodTracing(jstring arg0);
		static void startMethodTracing(const QString &arg0);
		static void startMethodTracing(jstring arg0, jint arg1);
		static void startMethodTracing(const QString &arg0, jint arg1);
		static void startMethodTracing(jstring arg0, jint arg1, jint arg2);
		static void startMethodTracing(const QString &arg0, jint arg1, jint arg2);
		static void startMethodTracingSampling(jstring arg0, jint arg1, jint arg2);
		static void startMethodTracingSampling(const QString &arg0, jint arg1, jint arg2);
		static void startNativeTracing();
		static void stopAllocCounting();
		static void stopMethodTracing();
		static void stopNativeTracing();
		static jlong threadCpuTimeNanos();
		static void waitForDebugger();
		static jboolean waitingForDebugger();
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
	
	// Constructors
	void Debug::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Debug",
			"(V)V");
	}
	
	// Methods
	void Debug::attachJvmtiAgent(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"attachJvmtiAgent",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Debug::attachJvmtiAgent(const QString &arg0, const QString &arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"attachJvmtiAgent",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
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
	void Debug::dumpHprofData(const QString &arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"dumpHprofData",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Debug::dumpService(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Debug",
			"dumpService",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;[Ljava/lang/String;)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean Debug::dumpService(const QString &arg0, __jni_impl::java::io::FileDescriptor arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Debug",
			"dumpService",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;[Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
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
	void Debug::getMemoryInfo(__jni_impl::android::os::Debug_MemoryInfo arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"getMemoryInfo",
			"(Landroid/os/Debug$MemoryInfo;)V",
			arg0.__jniObject().object()
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
	jstring Debug::getRuntimeStat(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Debug",
			"getRuntimeStat",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject Debug::getRuntimeStats()
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
	void Debug::startMethodTracing(const QString &arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void Debug::startMethodTracing(const QString &arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	void Debug::startMethodTracing(const QString &arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracing",
			"(Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	void Debug::startMethodTracingSampling(const QString &arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Debug",
			"startMethodTracingSampling",
			"(Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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

