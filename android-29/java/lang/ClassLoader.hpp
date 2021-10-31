#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class InputStream;
}
namespace java::lang
{
	class Package;
}
namespace java::lang
{
	class Void;
}
namespace java::net
{
	class URL;
}
namespace java::nio
{
	class ByteBuffer;
}
namespace java::security
{
	class CodeSource;
}
namespace java::security
{
	class ProtectionDomain;
}
namespace java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace java::lang
{
	class ClassLoader : public __JniBaseClass
	{
	public:
		// Fields
		
		ClassLoader(QAndroidJniObject obj);
		// Constructors
		ClassLoader() = default;
		
		// Methods
		static QAndroidJniObject getPlatformClassLoader();
		static QAndroidJniObject getSystemClassLoader();
		static QAndroidJniObject getSystemResource(jstring arg0);
		static QAndroidJniObject getSystemResourceAsStream(jstring arg0);
		static QAndroidJniObject getSystemResources(jstring arg0);
		void clearAssertionStatus();
		QAndroidJniObject getDefinedPackage(jstring arg0);
		jarray getDefinedPackages();
		jstring getName();
		QAndroidJniObject getParent();
		QAndroidJniObject getResource(jstring arg0);
		QAndroidJniObject getResourceAsStream(jstring arg0);
		QAndroidJniObject getResources(jstring arg0);
		QAndroidJniObject getUnnamedModule();
		jboolean isRegisteredAsParallelCapable();
		jclass loadClass(jstring arg0);
		QAndroidJniObject resources(jstring arg0);
		void setClassAssertionStatus(jstring arg0, jboolean arg1);
		void setDefaultAssertionStatus(jboolean arg0);
		void setPackageAssertionStatus(jstring arg0, jboolean arg1);
	};
} // namespace java::lang

