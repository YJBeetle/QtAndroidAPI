#pragma once

#include "../../java/io/File.def.hpp"
#include "../../JClass.hpp"
#include "../../java/lang/ClassLoader.def.hpp"
#include "../../java/lang/Package.def.hpp"
#include "../../JString.hpp"
#include "../../java/net/URL.def.hpp"
#include "./BaseDexClassLoader.def.hpp"

namespace dalvik::system
{
	// Fields
	
	// Constructors
	inline BaseDexClassLoader::BaseDexClassLoader(JString arg0, java::io::File arg1, JString arg2, java::lang::ClassLoader arg3)
		: java::lang::ClassLoader(
			"dalvik.system.BaseDexClassLoader",
			"(Ljava/lang/String;Ljava/io/File;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
	inline JString BaseDexClassLoader::findLibrary(JString arg0) const
	{
		return callObjectMethod(
			"findLibrary",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString BaseDexClassLoader::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace dalvik::system

// Base class headers
#include "../../java/lang/ClassLoader.hpp"

