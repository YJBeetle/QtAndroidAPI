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
	void Runtime::addShutdownHook(java::lang::Thread arg0) const
	{
		callMethod<void>(
			"addShutdownHook",
			"(Ljava/lang/Thread;)V",
			arg0.object()
		);
	}
	jint Runtime::availableProcessors() const
	{
		return callMethod<jint>(
			"availableProcessors",
			"()I"
		);
	}
	java::lang::Process Runtime::exec(JArray arg0) const
	{
		return callObjectMethod(
			"exec",
			"([Ljava/lang/String;)Ljava/lang/Process;",
			arg0.object<jarray>()
		);
	}
	java::lang::Process Runtime::exec(JString arg0) const
	{
		return callObjectMethod(
			"exec",
			"(Ljava/lang/String;)Ljava/lang/Process;",
			arg0.object<jstring>()
		);
	}
	java::lang::Process Runtime::exec(JArray arg0, JArray arg1) const
	{
		return callObjectMethod(
			"exec",
			"([Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;",
			arg0.object<jarray>(),
			arg1.object<jarray>()
		);
	}
	java::lang::Process Runtime::exec(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"exec",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	java::lang::Process Runtime::exec(JArray arg0, JArray arg1, java::io::File arg2) const
	{
		return callObjectMethod(
			"exec",
			"([Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;",
			arg0.object<jarray>(),
			arg1.object<jarray>(),
			arg2.object()
		);
	}
	java::lang::Process Runtime::exec(JString arg0, JArray arg1, java::io::File arg2) const
	{
		return callObjectMethod(
			"exec",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object()
		);
	}
	void Runtime::exit(jint arg0) const
	{
		callMethod<void>(
			"exit",
			"(I)V",
			arg0
		);
	}
	jlong Runtime::freeMemory() const
	{
		return callMethod<jlong>(
			"freeMemory",
			"()J"
		);
	}
	void Runtime::gc() const
	{
		callMethod<void>(
			"gc",
			"()V"
		);
	}
	void Runtime::halt(jint arg0) const
	{
		callMethod<void>(
			"halt",
			"(I)V",
			arg0
		);
	}
	void Runtime::load(JString arg0) const
	{
		callMethod<void>(
			"load",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Runtime::loadLibrary(JString arg0) const
	{
		callMethod<void>(
			"loadLibrary",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jlong Runtime::maxMemory() const
	{
		return callMethod<jlong>(
			"maxMemory",
			"()J"
		);
	}
	jboolean Runtime::removeShutdownHook(java::lang::Thread arg0) const
	{
		return callMethod<jboolean>(
			"removeShutdownHook",
			"(Ljava/lang/Thread;)Z",
			arg0.object()
		);
	}
	void Runtime::runFinalization() const
	{
		callMethod<void>(
			"runFinalization",
			"()V"
		);
	}
	jlong Runtime::totalMemory() const
	{
		return callMethod<jlong>(
			"totalMemory",
			"()J"
		);
	}
} // namespace java::lang

