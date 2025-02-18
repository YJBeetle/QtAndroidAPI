#pragma once

#include "../../JByteArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/File.def.hpp"
#include "../io/InputStream.def.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "./Package.def.hpp"
#include "../../JString.hpp"
#include "./Void.def.hpp"
#include "../net/URL.def.hpp"
#include "../nio/ByteBuffer.def.hpp"
#include "../security/CodeSource.def.hpp"
#include "../security/ProtectionDomain.def.hpp"
#include "../util/concurrent/ConcurrentHashMap.def.hpp"
#include "./ClassLoader.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::lang::ClassLoader ClassLoader::getPlatformClassLoader()
	{
		return callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getPlatformClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	inline java::lang::ClassLoader ClassLoader::getSystemClassLoader()
	{
		return callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	inline java::net::URL ClassLoader::getSystemResource(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0.object<jstring>()
		);
	}
	inline java::io::InputStream ClassLoader::getSystemResourceAsStream(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemResourceAsStream",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0.object<jstring>()
		);
	}
	inline JObject ClassLoader::getSystemResources(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0.object<jstring>()
		);
	}
	inline void ClassLoader::clearAssertionStatus() const
	{
		callMethod<void>(
			"clearAssertionStatus",
			"()V"
		);
	}
	inline java::lang::Package ClassLoader::getDefinedPackage(JString arg0) const
	{
		return callObjectMethod(
			"getDefinedPackage",
			"(Ljava/lang/String;)Ljava/lang/Package;",
			arg0.object<jstring>()
		);
	}
	inline JArray ClassLoader::getDefinedPackages() const
	{
		return callObjectMethod(
			"getDefinedPackages",
			"()[Ljava/lang/Package;"
		);
	}
	inline JString ClassLoader::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline java::lang::ClassLoader ClassLoader::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/lang/ClassLoader;"
		);
	}
	inline java::net::URL ClassLoader::getResource(JString arg0) const
	{
		return callObjectMethod(
			"getResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0.object<jstring>()
		);
	}
	inline java::io::InputStream ClassLoader::getResourceAsStream(JString arg0) const
	{
		return callObjectMethod(
			"getResourceAsStream",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0.object<jstring>()
		);
	}
	inline JObject ClassLoader::getResources(JString arg0) const
	{
		return callObjectMethod(
			"getResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0.object<jstring>()
		);
	}
	inline JObject ClassLoader::getUnnamedModule() const
	{
		return callObjectMethod(
			"getUnnamedModule",
			"()Ljava/lang/Module;"
		);
	}
	inline jboolean ClassLoader::isRegisteredAsParallelCapable() const
	{
		return callMethod<jboolean>(
			"isRegisteredAsParallelCapable",
			"()Z"
		);
	}
	inline JClass ClassLoader::loadClass(JString arg0) const
	{
		return callObjectMethod(
			"loadClass",
			"(Ljava/lang/String;)Ljava/lang/Class;",
			arg0.object<jstring>()
		);
	}
	inline JObject ClassLoader::resources(JString arg0) const
	{
		return callObjectMethod(
			"resources",
			"(Ljava/lang/String;)Ljava/util/stream/Stream;",
			arg0.object<jstring>()
		);
	}
	inline void ClassLoader::setClassAssertionStatus(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setClassAssertionStatus",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void ClassLoader::setDefaultAssertionStatus(jboolean arg0) const
	{
		callMethod<void>(
			"setDefaultAssertionStatus",
			"(Z)V",
			arg0
		);
	}
	inline void ClassLoader::setPackageAssertionStatus(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setPackageAssertionStatus",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
