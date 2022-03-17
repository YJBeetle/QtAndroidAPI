#pragma once

#include "../../JArray.hpp"
#include "../../java/lang/ClassLoader.def.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "./InMemoryDexClassLoader.def.hpp"

namespace dalvik::system
{
	// Fields
	
	// Constructors
	inline InMemoryDexClassLoader::InMemoryDexClassLoader(JArray arg0, java::lang::ClassLoader arg1)
		: dalvik::system::BaseDexClassLoader(
			"dalvik.system.InMemoryDexClassLoader",
			"([Ljava/nio/ByteBuffer;Ljava/lang/ClassLoader;)V",
			arg0.object<jarray>(),
			arg1.object()
		) {}
	inline InMemoryDexClassLoader::InMemoryDexClassLoader(java::nio::ByteBuffer arg0, java::lang::ClassLoader arg1)
		: dalvik::system::BaseDexClassLoader(
			"dalvik.system.InMemoryDexClassLoader",
			"(Ljava/nio/ByteBuffer;Ljava/lang/ClassLoader;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
} // namespace dalvik::system

// Base class headers
#include "../../java/lang/ClassLoader.hpp"
#include "./BaseDexClassLoader.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace dalvik::system;
#endif
