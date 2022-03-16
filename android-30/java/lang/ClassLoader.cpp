#include "../../JByteArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/File.hpp"
#include "../io/InputStream.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "./Package.hpp"
#include "../../JString.hpp"
#include "./Void.hpp"
#include "../net/URL.hpp"
#include "../nio/ByteBuffer.hpp"
#include "../security/CodeSource.hpp"
#include "../security/ProtectionDomain.hpp"
#include "../util/concurrent/ConcurrentHashMap.hpp"
#include "./ClassLoader.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	
	// Methods
	java::lang::ClassLoader ClassLoader::getPlatformClassLoader()
	{
		return callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getPlatformClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	java::lang::ClassLoader ClassLoader::getSystemClassLoader()
	{
		return callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	java::net::URL ClassLoader::getSystemResource(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0.object<jstring>()
		);
	}
	java::io::InputStream ClassLoader::getSystemResourceAsStream(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemResourceAsStream",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0.object<jstring>()
		);
	}
	JObject ClassLoader::getSystemResources(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0.object<jstring>()
		);
	}
	void ClassLoader::clearAssertionStatus() const
	{
		callMethod<void>(
			"clearAssertionStatus",
			"()V"
		);
	}
	java::lang::Package ClassLoader::getDefinedPackage(JString arg0) const
	{
		return callObjectMethod(
			"getDefinedPackage",
			"(Ljava/lang/String;)Ljava/lang/Package;",
			arg0.object<jstring>()
		);
	}
	JArray ClassLoader::getDefinedPackages() const
	{
		return callObjectMethod(
			"getDefinedPackages",
			"()[Ljava/lang/Package;"
		);
	}
	JString ClassLoader::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	java::lang::ClassLoader ClassLoader::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/lang/ClassLoader;"
		);
	}
	java::net::URL ClassLoader::getResource(JString arg0) const
	{
		return callObjectMethod(
			"getResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0.object<jstring>()
		);
	}
	java::io::InputStream ClassLoader::getResourceAsStream(JString arg0) const
	{
		return callObjectMethod(
			"getResourceAsStream",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0.object<jstring>()
		);
	}
	JObject ClassLoader::getResources(JString arg0) const
	{
		return callObjectMethod(
			"getResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0.object<jstring>()
		);
	}
	JObject ClassLoader::getUnnamedModule() const
	{
		return callObjectMethod(
			"getUnnamedModule",
			"()Ljava/lang/Module;"
		);
	}
	jboolean ClassLoader::isRegisteredAsParallelCapable() const
	{
		return callMethod<jboolean>(
			"isRegisteredAsParallelCapable",
			"()Z"
		);
	}
	JClass ClassLoader::loadClass(JString arg0) const
	{
		return callObjectMethod(
			"loadClass",
			"(Ljava/lang/String;)Ljava/lang/Class;",
			arg0.object<jstring>()
		);
	}
	JObject ClassLoader::resources(JString arg0) const
	{
		return callObjectMethod(
			"resources",
			"(Ljava/lang/String;)Ljava/util/stream/Stream;",
			arg0.object<jstring>()
		);
	}
	void ClassLoader::setClassAssertionStatus(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setClassAssertionStatus",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void ClassLoader::setDefaultAssertionStatus(jboolean arg0) const
	{
		callMethod<void>(
			"setDefaultAssertionStatus",
			"(Z)V",
			arg0
		);
	}
	void ClassLoader::setPackageAssertionStatus(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setPackageAssertionStatus",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace java::lang

