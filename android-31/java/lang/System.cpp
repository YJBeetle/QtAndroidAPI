#include "../io/Console.hpp"
#include "../io/FileOutputStream.hpp"
#include "../io/InputStream.hpp"
#include "../io/PrintStream.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "./SecurityManager.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "../util/Properties.hpp"
#include "../util/ResourceBundle.hpp"
#include "./System.hpp"

namespace java::lang
{
	// Fields
	java::io::PrintStream System::err()
	{
		return getStaticObjectField(
			"java.lang.System",
			"err",
			"Ljava/io/PrintStream;"
		);
	}
	java::io::InputStream System::in()
	{
		return getStaticObjectField(
			"java.lang.System",
			"in",
			"Ljava/io/InputStream;"
		);
	}
	java::io::PrintStream System::out()
	{
		return getStaticObjectField(
			"java.lang.System",
			"out",
			"Ljava/io/PrintStream;"
		);
	}
	
	// Constructors
	
	// Methods
	void System::arraycopy(JObject arg0, jint arg1, JObject arg2, jint arg3, jint arg4)
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
	JString System::clearProperty(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"clearProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	java::io::Console System::console()
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"console",
			"()Ljava/io/Console;"
		);
	}
	jlong System::currentTimeMillis()
	{
		return callStaticMethod<jlong>(
			"java.lang.System",
			"currentTimeMillis",
			"()J"
		);
	}
	void System::exit(jint arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"exit",
			"(I)V",
			arg0
		);
	}
	void System::gc()
	{
		callStaticMethod<void>(
			"java.lang.System",
			"gc",
			"()V"
		);
	}
	JObject System::getLogger(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getLogger",
			"(Ljava/lang/String;)Ljava/lang/System$Logger;",
			arg0.object<jstring>()
		);
	}
	JObject System::getLogger(JString arg0, java::util::ResourceBundle arg1)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getLogger",
			"(Ljava/lang/String;Ljava/util/ResourceBundle;)Ljava/lang/System$Logger;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	java::util::Properties System::getProperties()
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getProperties",
			"()Ljava/util/Properties;"
		);
	}
	JString System::getProperty(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString System::getProperty(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	java::lang::SecurityManager System::getSecurityManager()
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getSecurityManager",
			"()Ljava/lang/SecurityManager;"
		);
	}
	JString System::getenv(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getenv",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject System::getenv()
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"getenv",
			"()Ljava/util/Map;"
		);
	}
	jint System::identityHashCode(JObject arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.System",
			"identityHashCode",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	JObject System::inheritedChannel()
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"inheritedChannel",
			"()Ljava/nio/channels/Channel;"
		);
	}
	JString System::lineSeparator()
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"lineSeparator",
			"()Ljava/lang/String;"
		);
	}
	void System::load(JString arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"load",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void System::loadLibrary(JString arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"loadLibrary",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString System::mapLibraryName(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"mapLibraryName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jlong System::nanoTime()
	{
		return callStaticMethod<jlong>(
			"java.lang.System",
			"nanoTime",
			"()J"
		);
	}
	void System::runFinalization()
	{
		callStaticMethod<void>(
			"java.lang.System",
			"runFinalization",
			"()V"
		);
	}
	void System::setErr(java::io::PrintStream arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"setErr",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		);
	}
	void System::setIn(java::io::InputStream arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"setIn",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	void System::setOut(java::io::PrintStream arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"setOut",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		);
	}
	void System::setProperties(java::util::Properties arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"setProperties",
			"(Ljava/util/Properties;)V",
			arg0.object()
		);
	}
	JString System::setProperty(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.lang.System",
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void System::setSecurityManager(java::lang::SecurityManager arg0)
	{
		callStaticMethod<void>(
			"java.lang.System",
			"setSecurityManager",
			"(Ljava/lang/SecurityManager;)V",
			arg0.object()
		);
	}
} // namespace java::lang

