#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "./BaseDexClassLoader.hpp"
#include "./PathClassLoader.hpp"

namespace java::lang
{
	class ClassLoader;
}
namespace java::net
{
	class URL;
}

namespace dalvik::system
{
	class DelegateLastClassLoader : public dalvik::system::PathClassLoader
	{
	public:
		// Fields
		
		DelegateLastClassLoader(QAndroidJniObject obj);
		// Constructors
		DelegateLastClassLoader(jstring arg0, java::lang::ClassLoader arg1);
		DelegateLastClassLoader(jstring arg0, jstring arg1, java::lang::ClassLoader arg2);
		DelegateLastClassLoader(jstring arg0, jstring arg1, java::lang::ClassLoader arg2, jboolean arg3);
		DelegateLastClassLoader() = default;
		
		// Methods
		QAndroidJniObject getResource(jstring arg0);
		QAndroidJniObject getResources(jstring arg0);
	};
} // namespace dalvik::system

