#pragma once

#ifndef JAVA_LANG_CLASSLOADER
#define JAVA_LANG_CLASSLOADER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Void;
}
namespace __jni_impl::java::security
{
	class ProtectionDomain;
}
namespace __jni_impl::java::lang
{
	class Package;
}
namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::security
{
	class CodeSource;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace __jni_impl::java::lang
{
	class ClassLoader : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName();
		jclass loadClass(jstring arg0);
		jclass loadClass(const QString &arg0);
		static QAndroidJniObject getPlatformClassLoader();
		static QAndroidJniObject getSystemClassLoader();
		static QAndroidJniObject getSystemResourceAsStream(jstring arg0);
		static QAndroidJniObject getSystemResourceAsStream(const QString &arg0);
		QAndroidJniObject getResourceAsStream(jstring arg0);
		QAndroidJniObject getResourceAsStream(const QString &arg0);
		static QAndroidJniObject getSystemResource(jstring arg0);
		static QAndroidJniObject getSystemResource(const QString &arg0);
		QAndroidJniObject getResource(jstring arg0);
		QAndroidJniObject getResource(const QString &arg0);
		QAndroidJniObject getResources(jstring arg0);
		QAndroidJniObject getResources(const QString &arg0);
		QAndroidJniObject getDefinedPackage(jstring arg0);
		QAndroidJniObject getDefinedPackage(const QString &arg0);
		QAndroidJniObject resources(jstring arg0);
		QAndroidJniObject resources(const QString &arg0);
		jboolean isRegisteredAsParallelCapable();
		static QAndroidJniObject getSystemResources(jstring arg0);
		static QAndroidJniObject getSystemResources(const QString &arg0);
		QAndroidJniObject getParent();
		QAndroidJniObject getUnnamedModule();
		jarray getDefinedPackages();
		void setDefaultAssertionStatus(jboolean arg0);
		void setPackageAssertionStatus(jstring arg0, jboolean arg1);
		void setPackageAssertionStatus(const QString &arg0, jboolean arg1);
		void setClassAssertionStatus(jstring arg0, jboolean arg1);
		void setClassAssertionStatus(const QString &arg0, jboolean arg1);
		void clearAssertionStatus();
	};
} // namespace __jni_impl::java::lang

#include "Void.hpp"
#include "../security/ProtectionDomain.hpp"
#include "Package.hpp"
#include "../net/URL.hpp"
#include "../io/InputStream.hpp"
#include "../nio/ByteBuffer.hpp"
#include "../security/CodeSource.hpp"
#include "../io/File.hpp"
#include "../util/concurrent/ConcurrentHashMap.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void ClassLoader::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassLoader",
			"(V)V");
	}
	
	// Methods
	jstring ClassLoader::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jclass ClassLoader::loadClass(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"loadClass",
			"(Ljava/lang/String;)Ljava/lang/Class;",
			arg0
		).object<jclass>();
	}
	jclass ClassLoader::loadClass(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"loadClass",
			"(Ljava/lang/String;)Ljava/lang/Class;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jclass>();
	}
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
	QAndroidJniObject ClassLoader::getSystemResourceAsStream(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemResourceAsStream",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0
		);
	}
	QAndroidJniObject ClassLoader::getSystemResourceAsStream(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemResourceAsStream",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ClassLoader::getResourceAsStream(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getResourceAsStream",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0
		);
	}
	QAndroidJniObject ClassLoader::getResourceAsStream(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getResourceAsStream",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject ClassLoader::getSystemResource(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ClassLoader::getResource(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0
		);
	}
	QAndroidJniObject ClassLoader::getResource(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ClassLoader::getResources(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0
		);
	}
	QAndroidJniObject ClassLoader::getResources(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ClassLoader::getDefinedPackage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDefinedPackage",
			"(Ljava/lang/String;)Ljava/lang/Package;",
			arg0
		);
	}
	QAndroidJniObject ClassLoader::getDefinedPackage(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getDefinedPackage",
			"(Ljava/lang/String;)Ljava/lang/Package;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ClassLoader::resources(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"resources",
			"(Ljava/lang/String;)Ljava/util/stream/Stream;",
			arg0
		);
	}
	QAndroidJniObject ClassLoader::resources(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"resources",
			"(Ljava/lang/String;)Ljava/util/stream/Stream;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean ClassLoader::isRegisteredAsParallelCapable()
	{
		return __thiz.callMethod<jboolean>(
			"isRegisteredAsParallelCapable",
			"()Z"
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
	QAndroidJniObject ClassLoader::getSystemResources(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ClassLoader",
			"getSystemResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ClassLoader::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Ljava/lang/ClassLoader;"
		);
	}
	QAndroidJniObject ClassLoader::getUnnamedModule()
	{
		return __thiz.callObjectMethod(
			"getUnnamedModule",
			"()Ljava/lang/Module;"
		);
	}
	jarray ClassLoader::getDefinedPackages()
	{
		return __thiz.callObjectMethod(
			"getDefinedPackages",
			"()[Ljava/lang/Package;"
		).object<jarray>();
	}
	void ClassLoader::setDefaultAssertionStatus(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultAssertionStatus",
			"(Z)V",
			arg0
		);
	}
	void ClassLoader::setPackageAssertionStatus(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setPackageAssertionStatus",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void ClassLoader::setPackageAssertionStatus(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setPackageAssertionStatus",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void ClassLoader::setClassAssertionStatus(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setClassAssertionStatus",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void ClassLoader::setClassAssertionStatus(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setClassAssertionStatus",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void ClassLoader::clearAssertionStatus()
	{
		__thiz.callMethod<void>(
			"clearAssertionStatus",
			"()V"
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ClassLoader : public __jni_impl::java::lang::ClassLoader
	{
	public:
		ClassLoader(QAndroidJniObject obj) { __thiz = obj; }
		ClassLoader()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_CLASSLOADER

