#pragma once

#include "../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BaseDexClassLoader(const char *className, const char *sig, Ts...agv) : java::lang::ClassLoader(className, sig, std::forward<Ts>(agv)...) {}
		BaseDexClassLoader(QAndroidJniObject obj);
		
		// Constructors
		BaseDexClassLoader(jstring arg0, java::io::File arg1, jstring arg2, java::lang::ClassLoader arg3);
		
		// Methods
		jstring findLibrary(jstring arg0);
		jstring toString();
	};
} // namespace dalvik::system

