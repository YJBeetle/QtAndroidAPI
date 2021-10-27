#pragma once

#ifndef JAVA_LANG_RUNTIME
#define JAVA_LANG_RUNTIME

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::lang
{
	class Process;
}
namespace __jni_impl::java::lang
{
	class Thread;
}

namespace __jni_impl::java::lang
{
	class Runtime : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getRuntime();
		static QAndroidJniObject version();
		void addShutdownHook(__jni_impl::java::lang::Thread arg0);
		jint availableProcessors();
		QAndroidJniObject exec(jarray arg0);
		QAndroidJniObject exec(jstring arg0);
		QAndroidJniObject exec(const QString &arg0);
		QAndroidJniObject exec(jarray arg0, jarray arg1);
		QAndroidJniObject exec(jstring arg0, jarray arg1);
		QAndroidJniObject exec(const QString &arg0, jarray arg1);
		QAndroidJniObject exec(jarray arg0, jarray arg1, __jni_impl::java::io::File arg2);
		QAndroidJniObject exec(jstring arg0, jarray arg1, __jni_impl::java::io::File arg2);
		QAndroidJniObject exec(const QString &arg0, jarray arg1, __jni_impl::java::io::File arg2);
		void exit(jint arg0);
		jlong freeMemory();
		void gc();
		void halt(jint arg0);
		void load(jstring arg0);
		void load(const QString &arg0);
		void loadLibrary(jstring arg0);
		void loadLibrary(const QString &arg0);
		jlong maxMemory();
		jboolean removeShutdownHook(__jni_impl::java::lang::Thread arg0);
		void runFinalization();
		jlong totalMemory();
	};
} // namespace __jni_impl::java::lang

#include "../io/File.hpp"
#include "Process.hpp"
#include "Thread.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void Runtime::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Runtime",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Runtime::getRuntime()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Runtime",
			"getRuntime",
			"()Ljava/lang/Runtime;"
		);
	}
	QAndroidJniObject Runtime::version()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Runtime",
			"version",
			"()Ljava/lang/Runtime$Version;"
		);
	}
	void Runtime::addShutdownHook(__jni_impl::java::lang::Thread arg0)
	{
		__thiz.callMethod<void>(
			"addShutdownHook",
			"(Ljava/lang/Thread;)V",
			arg0.__jniObject().object()
		);
	}
	jint Runtime::availableProcessors()
	{
		return __thiz.callMethod<jint>(
			"availableProcessors",
			"()I"
		);
	}
	QAndroidJniObject Runtime::exec(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"exec",
			"([Ljava/lang/String;)Ljava/lang/Process;",
			arg0
		);
	}
	QAndroidJniObject Runtime::exec(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"exec",
			"(Ljava/lang/String;)Ljava/lang/Process;",
			arg0
		);
	}
	QAndroidJniObject Runtime::exec(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"exec",
			"(Ljava/lang/String;)Ljava/lang/Process;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Runtime::exec(jarray arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"exec",
			"([Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Runtime::exec(jstring arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"exec",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Runtime::exec(const QString &arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"exec",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject Runtime::exec(jarray arg0, jarray arg1, __jni_impl::java::io::File arg2)
	{
		return __thiz.callObjectMethod(
			"exec",
			"([Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Runtime::exec(jstring arg0, jarray arg1, __jni_impl::java::io::File arg2)
	{
		return __thiz.callObjectMethod(
			"exec",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Runtime::exec(const QString &arg0, jarray arg1, __jni_impl::java::io::File arg2)
	{
		return __thiz.callObjectMethod(
			"exec",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Runtime::exit(jint arg0)
	{
		__thiz.callMethod<void>(
			"exit",
			"(I)V",
			arg0
		);
	}
	jlong Runtime::freeMemory()
	{
		return __thiz.callMethod<jlong>(
			"freeMemory",
			"()J"
		);
	}
	void Runtime::gc()
	{
		__thiz.callMethod<void>(
			"gc",
			"()V"
		);
	}
	void Runtime::halt(jint arg0)
	{
		__thiz.callMethod<void>(
			"halt",
			"(I)V",
			arg0
		);
	}
	void Runtime::load(jstring arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Runtime::load(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Runtime::loadLibrary(jstring arg0)
	{
		__thiz.callMethod<void>(
			"loadLibrary",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Runtime::loadLibrary(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"loadLibrary",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jlong Runtime::maxMemory()
	{
		return __thiz.callMethod<jlong>(
			"maxMemory",
			"()J"
		);
	}
	jboolean Runtime::removeShutdownHook(__jni_impl::java::lang::Thread arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeShutdownHook",
			"(Ljava/lang/Thread;)Z",
			arg0.__jniObject().object()
		);
	}
	void Runtime::runFinalization()
	{
		__thiz.callMethod<void>(
			"runFinalization",
			"()V"
		);
	}
	jlong Runtime::totalMemory()
	{
		return __thiz.callMethod<jlong>(
			"totalMemory",
			"()J"
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Runtime : public __jni_impl::java::lang::Runtime
	{
	public:
		Runtime(QAndroidJniObject obj) { __thiz = obj; }
		Runtime()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_RUNTIME

