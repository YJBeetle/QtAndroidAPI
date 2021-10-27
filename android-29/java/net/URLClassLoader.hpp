#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/ClassLoader.hpp"
#include "../security/SecureClassLoader.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::lang
{
	class ClassLoader;
}
namespace java::lang
{
	class Package;
}
namespace java::net
{
	class URL;
}
namespace java::security
{
	class AccessControlContext;
}
namespace java::security
{
	class CodeSource;
}
namespace java::security
{
	class PermissionCollection;
}
namespace java::util
{
	class WeakHashMap;
}
namespace java::util::jar
{
	class Manifest;
}

namespace java::net
{
	class URLClassLoader : public java::security::SecureClassLoader
	{
	public:
		// Fields
		
		URLClassLoader(QAndroidJniObject obj);
		// Constructors
		URLClassLoader(jarray &arg0);
		URLClassLoader(jarray &arg0, java::lang::ClassLoader &arg1);
		URLClassLoader(jarray &arg0, java::lang::ClassLoader &arg1, __JniBaseClass &arg2);
		URLClassLoader(jstring &arg0, jarray &arg1, java::lang::ClassLoader &arg2);
		URLClassLoader(const QString &arg0, jarray &arg1, java::lang::ClassLoader &arg2);
		URLClassLoader(jstring &arg0, jarray &arg1, java::lang::ClassLoader &arg2, __JniBaseClass &arg3);
		URLClassLoader(const QString &arg0, jarray &arg1, java::lang::ClassLoader &arg2, __JniBaseClass &arg3);
		URLClassLoader() = default;
		
		// Methods
		static QAndroidJniObject newInstance(jarray arg0);
		static QAndroidJniObject newInstance(jarray arg0, java::lang::ClassLoader arg1);
		void close();
		QAndroidJniObject findResource(jstring arg0);
		QAndroidJniObject findResource(const QString &arg0);
		QAndroidJniObject findResources(jstring arg0);
		QAndroidJniObject findResources(const QString &arg0);
		QAndroidJniObject getResourceAsStream(jstring arg0);
		QAndroidJniObject getResourceAsStream(const QString &arg0);
		jarray getURLs();
	};
} // namespace java::net

