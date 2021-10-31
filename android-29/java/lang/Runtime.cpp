#include "../io/File.hpp"
#include "./Process.hpp"
#include "./Thread.hpp"
#include "./Runtime.hpp"

namespace java::lang
{
	// Fields
	
	Runtime::Runtime(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	void Runtime::addShutdownHook(java::lang::Thread arg0)
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
	QAndroidJniObject Runtime::exec(jarray arg0, jarray arg1, java::io::File arg2)
	{
		return __thiz.callObjectMethod(
			"exec",
			"([Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Runtime::exec(jstring arg0, jarray arg1, java::io::File arg2)
	{
		return __thiz.callObjectMethod(
			"exec",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;",
			arg0,
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
	void Runtime::loadLibrary(jstring arg0)
	{
		__thiz.callMethod<void>(
			"loadLibrary",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jlong Runtime::maxMemory()
	{
		return __thiz.callMethod<jlong>(
			"maxMemory",
			"()J"
		);
	}
	jboolean Runtime::removeShutdownHook(java::lang::Thread arg0)
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
} // namespace java::lang

