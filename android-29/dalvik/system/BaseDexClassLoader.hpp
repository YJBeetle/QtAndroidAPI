#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/ClassLoader.hpp"

namespace java::io
{
	class File;
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

namespace dalvik::system
{
	class BaseDexClassLoader : public java::lang::ClassLoader
	{
	public:
		// Fields
		
		BaseDexClassLoader(QAndroidJniObject obj);
		// Constructors
		BaseDexClassLoader(jstring &arg0, java::io::File &arg1, jstring &arg2, java::lang::ClassLoader &arg3);
		BaseDexClassLoader(const QString &arg0, java::io::File &arg1, const QString &arg2, java::lang::ClassLoader &arg3);
		BaseDexClassLoader() = default;
		
		// Methods
		jstring findLibrary(jstring arg0);
		jstring findLibrary(const QString &arg0);
		jstring toString();
	};
} // namespace dalvik::system

