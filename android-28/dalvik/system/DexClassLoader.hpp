#pragma once

#include "../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit DexClassLoader(const char *className, const char *sig, Ts...agv) : dalvik::system::BaseDexClassLoader(className, sig, std::forward<Ts>(agv)...) {}
		DexClassLoader(QJniObject obj);
		
		// Constructors
		DexClassLoader(jstring arg0, jstring arg1, jstring arg2, java::lang::ClassLoader arg3);
		
		// Methods
	};
} // namespace dalvik::system

