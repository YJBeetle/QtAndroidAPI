#include "../../JArray.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./InMemoryDexClassLoader.hpp"

namespace dalvik::system
{
	// Fields
	
	// Constructors
	InMemoryDexClassLoader::InMemoryDexClassLoader(JArray arg0, java::lang::ClassLoader arg1)
		: dalvik::system::BaseDexClassLoader(
			"dalvik.system.InMemoryDexClassLoader",
			"([Ljava/nio/ByteBuffer;Ljava/lang/ClassLoader;)V",
			arg0.object<jarray>(),
			arg1.object()
		) {}
	InMemoryDexClassLoader::InMemoryDexClassLoader(java::nio::ByteBuffer arg0, java::lang::ClassLoader arg1)
		: dalvik::system::BaseDexClassLoader(
			"dalvik.system.InMemoryDexClassLoader",
			"(Ljava/nio/ByteBuffer;Ljava/lang/ClassLoader;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
} // namespace dalvik::system

