#pragma once

#include "../../java/lang/ClassLoader.def.hpp"
#include "../../JString.hpp"
#include "./DexClassLoader.def.hpp"

namespace dalvik::system
{
	// Fields
	
	// Constructors
	inline DexClassLoader::DexClassLoader(JString arg0, JString arg1, JString arg2, java::lang::ClassLoader arg3)
		: dalvik::system::BaseDexClassLoader(
			"dalvik.system.DexClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
} // namespace dalvik::system

// Base class headers
#include "../../java/lang/ClassLoader.hpp"
#include "./BaseDexClassLoader.hpp"

