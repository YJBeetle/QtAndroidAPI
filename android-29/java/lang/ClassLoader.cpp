#include "../io/File.hpp"
#include "../io/InputStream.hpp"
#include "./Package.hpp"
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
	
	// QAndroidJniObject forward
	ClassLoader::ClassLoader(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ClassLoader::getPlatformClassLoader()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getPlatformClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	QAndroidJniObject ClassLoader::getSystemClassLoader()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	QAndroidJniObject ClassLoader::getSystemResource(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0
		);
	}
	QAndroidJniObject ClassLoader::getSystemResourceAsStream(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemResourceAsStream",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0
		);
	}
	QAndroidJniObject ClassLoader::getSystemResources(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0
		);
	}
	void ClassLoader::clearAssertionStatus()
	{
		callMethod<void>(
			"clearAssertionStatus",
			"()V"
		);
	}
	QAndroidJniObject ClassLoader::getDefinedPackage(jstring arg0)
	{
		return callObjectMethod(
			"getDefinedPackage",
			"(Ljava/lang/String;)Ljava/lang/Package;",
			arg0
		);
	}
	jarray ClassLoader::getDefinedPackages()
	{
		return callObjectMethod(
			"getDefinedPackages",
			"()[Ljava/lang/Package;"
		).object<jarray>();
	}
	jstring ClassLoader::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ClassLoader::getParent()
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/lang/ClassLoader;"
		);
	}
	QAndroidJniObject ClassLoader::getResource(jstring arg0)
	{
		return callObjectMethod(
			"getResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0
		);
	}
	QAndroidJniObject ClassLoader::getResourceAsStream(jstring arg0)
	{
		return callObjectMethod(
			"getResourceAsStream",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0
		);
	}
	QAndroidJniObject ClassLoader::getResources(jstring arg0)
	{
		return callObjectMethod(
			"getResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0
		);
	}
	QAndroidJniObject ClassLoader::getUnnamedModule()
	{
		return callObjectMethod(
			"getUnnamedModule",
			"()Ljava/lang/Module;"
		);
	}
	jboolean ClassLoader::isRegisteredAsParallelCapable()
	{
		return callMethod<jboolean>(
			"isRegisteredAsParallelCapable",
			"()Z"
		);
	}
	jclass ClassLoader::loadClass(jstring arg0)
	{
		return callObjectMethod(
			"loadClass",
			"(Ljava/lang/String;)Ljava/lang/Class;",
			arg0
		).object<jclass>();
	}
	QAndroidJniObject ClassLoader::resources(jstring arg0)
	{
		return callObjectMethod(
			"resources",
			"(Ljava/lang/String;)Ljava/util/stream/Stream;",
			arg0
		);
	}
	void ClassLoader::setClassAssertionStatus(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setClassAssertionStatus",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void ClassLoader::setDefaultAssertionStatus(jboolean arg0)
	{
		callMethod<void>(
			"setDefaultAssertionStatus",
			"(Z)V",
			arg0
		);
	}
	void ClassLoader::setPackageAssertionStatus(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setPackageAssertionStatus",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
} // namespace java::lang

