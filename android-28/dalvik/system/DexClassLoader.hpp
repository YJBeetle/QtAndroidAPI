#pragma once

#include "./BaseDexClassLoader.hpp"

namespace java::lang
{
	class ClassLoader;
}
class JString;

namespace dalvik::system
{
	class DexClassLoader : public dalvik::system::BaseDexClassLoader
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DexClassLoader(const char *className, const char *sig, Ts...agv) : dalvik::system::BaseDexClassLoader(className, sig, std::forward<Ts>(agv)...) {}
		DexClassLoader(QAndroidJniObject obj);
		
		// Constructors
		DexClassLoader(JString arg0, JString arg1, JString arg2, java::lang::ClassLoader arg3);
		
		// Methods
	};
} // namespace dalvik::system

