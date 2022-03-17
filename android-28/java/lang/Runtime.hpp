#pragma once

#include "../../JArray.hpp"
#include "../io/File.def.hpp"
#include "../../JClass.hpp"
#include "./Process.def.hpp"
#include "../../JString.hpp"
#include "./Thread.def.hpp"
#include "./Runtime.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::lang::Runtime Runtime::getRuntime()
	{
		return callStaticObjectMethod(
			"java.lang.Runtime",
			"getRuntime",
			"()Ljava/lang/Runtime;"
		);
	}
	inline JObject Runtime::version()
	{
		return callStaticObjectMethod(
			"java.lang.Runtime",
			"version",
			"()Ljava/lang/Runtime$Version;"
		);
	}
	inline void Runtime::addShutdownHook(java::lang::Thread arg0) const
	{
		callMethod<void>(
			"addShutdownHook",
			"(Ljava/lang/Thread;)V",
			arg0.object()
		);
	}
	inline jint Runtime::availableProcessors() const
	{
		return callMethod<jint>(
			"availableProcessors",
			"()I"
		);
	}
	inline java::lang::Process Runtime::exec(JArray arg0) const
	{
		return callObjectMethod(
			"exec",
			"([Ljava/lang/String;)Ljava/lang/Process;",
			arg0.object<jarray>()
		);
	}
	inline java::lang::Process Runtime::exec(JString arg0) const
	{
		return callObjectMethod(
			"exec",
			"(Ljava/lang/String;)Ljava/lang/Process;",
			arg0.object<jstring>()
		);
	}
	inline java::lang::Process Runtime::exec(JArray arg0, JArray arg1) const
	{
		return callObjectMethod(
			"exec",
			"([Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;",
			arg0.object<jarray>(),
			arg1.object<jarray>()
		);
	}
	inline java::lang::Process Runtime::exec(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"exec",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline java::lang::Process Runtime::exec(JArray arg0, JArray arg1, java::io::File arg2) const
	{
		return callObjectMethod(
			"exec",
			"([Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;",
			arg0.object<jarray>(),
			arg1.object<jarray>(),
			arg2.object()
		);
	}
	inline java::lang::Process Runtime::exec(JString arg0, JArray arg1, java::io::File arg2) const
	{
		return callObjectMethod(
			"exec",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object()
		);
	}
	inline void Runtime::exit(jint arg0) const
	{
		callMethod<void>(
			"exit",
			"(I)V",
			arg0
		);
	}
	inline jlong Runtime::freeMemory() const
	{
		return callMethod<jlong>(
			"freeMemory",
			"()J"
		);
	}
	inline void Runtime::gc() const
	{
		callMethod<void>(
			"gc",
			"()V"
		);
	}
	inline void Runtime::halt(jint arg0) const
	{
		callMethod<void>(
			"halt",
			"(I)V",
			arg0
		);
	}
	inline void Runtime::load(JString arg0) const
	{
		callMethod<void>(
			"load",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Runtime::loadLibrary(JString arg0) const
	{
		callMethod<void>(
			"loadLibrary",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jlong Runtime::maxMemory() const
	{
		return callMethod<jlong>(
			"maxMemory",
			"()J"
		);
	}
	inline jboolean Runtime::removeShutdownHook(java::lang::Thread arg0) const
	{
		return callMethod<jboolean>(
			"removeShutdownHook",
			"(Ljava/lang/Thread;)Z",
			arg0.object()
		);
	}
	inline void Runtime::runFinalization() const
	{
		callMethod<void>(
			"runFinalization",
			"()V"
		);
	}
	inline jlong Runtime::totalMemory() const
	{
		return callMethod<jlong>(
			"totalMemory",
			"()J"
		);
	}
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
