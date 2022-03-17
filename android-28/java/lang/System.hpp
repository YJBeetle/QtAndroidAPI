#pragma once

#include "../io/Console.def.hpp"
#include "../io/FileOutputStream.def.hpp"
#include "../io/InputStream.def.hpp"
#include "../io/PrintStream.def.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "./SecurityManager.def.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "../util/Properties.def.hpp"
#include "../util/ResourceBundle.def.hpp"
#include "./System.def.hpp"

namespace java::lang
{
	// Fields
	inline java::io::PrintStream System::err()
	{
		return getStaticObjectField(
			"java.lang.System",
			"err",
			"Ljava/io/PrintStream;"
		);
	}
	inline java::io::InputStream System::in()
	{
		return getStaticObjectField(
			"java.lang.System",
			"in",
			"Ljava/io/InputStream;"
		);
	}
	inline java::io::PrintStream System::out()
	{
		return getStaticObjectField(
			"java.lang.System",
			"out",
			"Ljava/io/PrintStream;"
		);
	}
	
	// Constructors
	
	// Methods
	inline void System::arraycopy(JObject arg0, jint arg1, JObject arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"arraycopy",
			"(Ljava/lang/Object;ILjava/lang/Object;II)V",
			arg0.object<jobject>(),
			arg1,
			arg2.object<jobject>(),
			arg3,
			arg4
		);
	}
	inline JString System::clearProperty(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"clearProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline java::io::Console System::console()
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"console",
			"()Ljava/io/Console;"
		);
	}
	inline jlong System::currentTimeMillis()
	{
		return callStaticMethod<jlong>(
			"java.lang.System",
			"currentTimeMillis",
			"()J"
		);
	}
	inline void System::exit(jint arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"exit",
			"(I)V",
			arg0
		);
	}
	inline void System::gc()
	{
		callStaticMethod<void>(
			"java.lang.System",
			"gc",
			"()V"
		);
	}
	inline JObject System::getLogger(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getLogger",
			"(Ljava/lang/String;)Ljava/lang/System$Logger;",
			arg0.object<jstring>()
		);
	}
	inline JObject System::getLogger(JString arg0, java::util::ResourceBundle arg1)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getLogger",
			"(Ljava/lang/String;Ljava/util/ResourceBundle;)Ljava/lang/System$Logger;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::util::Properties System::getProperties()
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getProperties",
			"()Ljava/util/Properties;"
		);
	}
	inline JString System::getProperty(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString System::getProperty(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline java::lang::SecurityManager System::getSecurityManager()
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getSecurityManager",
			"()Ljava/lang/SecurityManager;"
		);
	}
	inline JString System::getenv(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getenv",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject System::getenv()
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getenv",
			"()Ljava/util/Map;"
		);
	}
	inline jint System::identityHashCode(JObject arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.System",
			"identityHashCode",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline JObject System::inheritedChannel()
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"inheritedChannel",
			"()Ljava/nio/channels/Channel;"
		);
	}
	inline JString System::lineSeparator()
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"lineSeparator",
			"()Ljava/lang/String;"
		);
	}
	inline void System::load(JString arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"load",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void System::loadLibrary(JString arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"loadLibrary",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JString System::mapLibraryName(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"mapLibraryName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jlong System::nanoTime()
	{
		return callStaticMethod<jlong>(
			"java.lang.System",
			"nanoTime",
			"()J"
		);
	}
	inline void System::runFinalization()
	{
		callStaticMethod<void>(
			"java.lang.System",
			"runFinalization",
			"()V"
		);
	}
	inline void System::setErr(java::io::PrintStream arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"setErr",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		);
	}
	inline void System::setIn(java::io::InputStream arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"setIn",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	inline void System::setOut(java::io::PrintStream arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"setOut",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		);
	}
	inline void System::setProperties(java::util::Properties arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"setProperties",
			"(Ljava/util/Properties;)V",
			arg0.object()
		);
	}
	inline JString System::setProperty(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void System::setSecurityManager(java::lang::SecurityManager arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"setSecurityManager",
			"(Ljava/lang/SecurityManager;)V",
			arg0.object()
		);
	}
} // namespace java::lang

// Base class headers

