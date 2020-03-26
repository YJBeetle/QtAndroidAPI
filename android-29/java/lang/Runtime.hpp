#pragma once

#ifndef JAVA_LANG_RUNTIME
#define JAVA_LANG_RUNTIME

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Process;
}
namespace __jni_impl::java::io
{
	class File;
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
		void exit(jint arg0);
		void runFinalization();
		static QAndroidJniObject version();
		void loadLibrary(jstring arg0);
		void gc();
		void load(jstring arg0);
		jlong freeMemory();
		jlong maxMemory();
		jint availableProcessors();
		void halt(jint arg0);
		QAndroidJniObject exec(jarray arg0);
		QAndroidJniObject exec(jstring arg0, jarray arg1, __jni_impl::java::io::File arg2);
		QAndroidJniObject exec(jstring arg0);
		QAndroidJniObject exec(jarray arg0, jarray arg1);
		QAndroidJniObject exec(jarray arg0, jarray arg1, __jni_impl::java::io::File arg2);
		QAndroidJniObject exec(jstring arg0, jarray arg1);
		void addShutdownHook(__jni_impl::java::lang::Thread arg0);
		jboolean removeShutdownHook(__jni_impl::java::lang::Thread arg0);
		jlong totalMemory();
	};
} // namespace __jni_impl::java::lang

#include "Process.hpp"
#include "../io/File.hpp"
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
	void Runtime::exit(jint arg0)
	{
		__thiz.callMethod<void>(
			"exit",
			"(I)V",
			arg0
		);
	}
	void Runtime::runFinalization()
	{
		__thiz.callMethod<void>(
			"runFinalization",
			"()V"
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
	void Runtime::loadLibrary(jstring arg0)
	{
		__thiz.callMethod<void>(
			"loadLibrary",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Runtime::gc()
	{
		__thiz.callMethod<void>(
			"gc",
			"()V"
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
	jlong Runtime::freeMemory()
	{
		return __thiz.callMethod<jlong>(
			"freeMemory",
			"()J"
		);
	}
	jlong Runtime::maxMemory()
	{
		return __thiz.callMethod<jlong>(
			"maxMemory",
			"()J"
		);
	}
	jint Runtime::availableProcessors()
	{
		return __thiz.callMethod<jint>(
			"availableProcessors",
			"()I"
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
	QAndroidJniObject Runtime::exec(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"exec",
			"([Ljava/lang/String;)Ljava/lang/Process;",
			arg0
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
	QAndroidJniObject Runtime::exec(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"exec",
			"(Ljava/lang/String;)Ljava/lang/Process;",
			arg0
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
	QAndroidJniObject Runtime::exec(jstring arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"exec",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;",
			arg0,
			arg1
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
	jboolean Runtime::removeShutdownHook(__jni_impl::java::lang::Thread arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeShutdownHook",
			"(Ljava/lang/Thread;)Z",
			arg0.__jniObject().object()
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

