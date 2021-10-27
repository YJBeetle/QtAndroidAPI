#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "./BaseDexClassLoader.hpp"

namespace java::lang
{
	class ClassLoader;
}

namespace dalvik::system
{
	class PathClassLoader : public dalvik::system::BaseDexClassLoader
	{
	public:
		// Fields
		
		PathClassLoader(QAndroidJniObject obj);
		// Constructors
		PathClassLoader(jstring &arg0, java::lang::ClassLoader &arg1);
		PathClassLoader(const QString &arg0, java::lang::ClassLoader &arg1);
		PathClassLoader(jstring &arg0, jstring &arg1, java::lang::ClassLoader &arg2);
		PathClassLoader(const QString &arg0, const QString &arg1, java::lang::ClassLoader &arg2);
		PathClassLoader() = default;
		
		// Methods
	};
} // namespace dalvik::system

