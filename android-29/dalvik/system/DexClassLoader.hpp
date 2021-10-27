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
	class DexClassLoader : public dalvik::system::BaseDexClassLoader
	{
	public:
		// Fields
		
		DexClassLoader(QAndroidJniObject obj);
		// Constructors
		DexClassLoader(jstring &arg0, jstring &arg1, jstring &arg2, java::lang::ClassLoader &arg3);
		DexClassLoader(const QString &arg0, const QString &arg1, const QString &arg2, java::lang::ClassLoader &arg3);
		DexClassLoader() = default;
		
		// Methods
	};
} // namespace dalvik::system

