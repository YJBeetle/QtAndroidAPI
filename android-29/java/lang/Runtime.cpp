#include "../../JArray.hpp"
#include "../io/File.hpp"
#include "../../JClass.hpp"
#include "./Process.hpp"
#include "../../JString.hpp"
#include "./Thread.hpp"
#include "./Runtime.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	Runtime::Runtime(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::lang::Runtime Runtime::getRuntime()
	{
		return callStaticObjectMethod(
			"java.lang.Runtime",
			"getRuntime",
			"()Ljava/lang/Runtime;"
		);
	}
	JObject Runtime::version()
	{
		return callStaticObjectMethod(
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
	java::lang::Process Runtime::exec(JArray arg0)
	{
		return callObjectMethod(
			"exec",
			"([Ljava/lang/String;)Ljava/lang/Process;",
			arg0.object<jarray>()
		);
	}
	java::lang::Process Runtime::exec(JString arg0)
	{
		return callObjectMethod(
			"exec",
			"(Ljava/lang/String;)Ljava/lang/Process;",
			arg0.object<jstring>()
		);
	}
	java::lang::Process Runtime::exec(JArray arg0, JArray arg1)
	{
		return callObjectMethod(
			"exec",
			"([Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;",
			arg0.object<jarray>(),
			arg1.object<jarray>()
		);
	}
	java::lang::Process Runtime::exec(JString arg0, JArray arg1)
	{
		return callObjectMethod(
			"exec",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	java::lang::Process Runtime::exec(JArray arg0, JArray arg1, java::io::File arg2)
	{
		return callObjectMethod(
			"exec",
			"([Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;",
			arg0.object<jarray>(),
			arg1.object<jarray>(),
			arg2.object()
		);
	}
	java::lang::Process Runtime::exec(JString arg0, JArray arg1, java::io::File arg2)
	{
		return callObjectMethod(
			"exec",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
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
	void Runtime::load(JString arg0)
	{
		callMethod<void>(
			"load",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Runtime::loadLibrary(JString arg0)
	{
		callMethod<void>(
			"loadLibrary",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
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

