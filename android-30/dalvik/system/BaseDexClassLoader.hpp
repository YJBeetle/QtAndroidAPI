#pragma once

#include "../../java/lang/ClassLoader.hpp"

namespace java::io
{
	class File;
}
class JClass;
namespace java::lang
{
	class ClassLoader;
}
namespace java::lang
{
	class Package;
}
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit BaseDexClassLoader(const char *className, const char *sig, Ts...agv) : java::lang::ClassLoader(className, sig, std::forward<Ts>(agv)...) {}
		BaseDexClassLoader(QJniObject obj);
		
		// Constructors
		BaseDexClassLoader(JString arg0, java::io::File arg1, JString arg2, java::lang::ClassLoader arg3);
		
		// Methods
		JString findLibrary(JString arg0);
		JString toString();
	};
} // namespace dalvik::system

