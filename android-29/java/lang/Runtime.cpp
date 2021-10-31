#include "../io/File.hpp"
#include "./Process.hpp"
#include "./Thread.hpp"
#include "./Runtime.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	Runtime::Runtime(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
		callMethod<void>(
			"addShutdownHook",
			"(Ljava/lang/Thread;)V",
			arg0.object()
		);
	}
	jint Runtime::availableProcessors()
	{
		return callMethod<jint>(
			"availableProcessors",
			"()I"
		);
	}
	QAndroidJniObject Runtime::exec(jarray arg0)
	{
		return callObjectMethod(
			"exec",
			"([Ljava/lang/String;)Ljava/lang/Process;",
			arg0
		);
	}
	QAndroidJniObject Runtime::exec(jstring arg0)
	{
		return callObjectMethod(
			"exec",
			"(Ljava/lang/String;)Ljava/lang/Process;",
			arg0
		);
	}
	QAndroidJniObject Runtime::exec(jarray arg0, jarray arg1)
	{
		return callObjectMethod(
			"exec",
			"([Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Runtime::exec(jstring arg0, jarray arg1)
	{
		return callObjectMethod(
			"exec",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Runtime::exec(jarray arg0, jarray arg1, java::io::File arg2)
	{
		return callObjectMethod(
			"exec",
			"([Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	QAndroidJniObject Runtime::exec(jstring arg0, jarray arg1, java::io::File arg2)
	{
		return callObjectMethod(
			"exec",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void Runtime::exit(jint arg0)
	{
		callMethod<void>(
			"exit",
			"(I)V",
			arg0
		);
	}
	jlong Runtime::freeMemory()
	{
		return callMethod<jlong>(
			"freeMemory",
			"()J"
		);
	}
	void Runtime::gc()
	{
		callMethod<void>(
			"gc",
			"()V"
		);
	}
	void Runtime::halt(jint arg0)
	{
		callMethod<void>(
			"halt",
			"(I)V",
			arg0
		);
	}
	void Runtime::load(jstring arg0)
	{
		callMethod<void>(
			"load",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Runtime::loadLibrary(jstring arg0)
	{
		callMethod<void>(
			"loadLibrary",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jlong Runtime::maxMemory()
	{
		return callMethod<jlong>(
			"maxMemory",
			"()J"
		);
	}
	jboolean Runtime::removeShutdownHook(java::lang::Thread arg0)
	{
		return callMethod<jboolean>(
			"removeShutdownHook",
			"(Ljava/lang/Thread;)Z",
			arg0.object()
		);
	}
	void Runtime::runFinalization()
	{
		callMethod<void>(
			"runFinalization",
			"()V"
		);
	}
	jlong Runtime::totalMemory()
	{
		return callMethod<jlong>(
			"totalMemory",
			"()J"
		);
	}
} // namespace java::lang

