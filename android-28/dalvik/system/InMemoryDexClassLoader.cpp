#include "../../java/lang/ClassLoader.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./InMemoryDexClassLoader.hpp"

namespace dalvik::system
{
	// Fields
	
	// QAndroidJniObject forward
	InMemoryDexClassLoader::InMemoryDexClassLoader(QAndroidJniObject obj) : dalvik::system::BaseDexClassLoader(obj) {}
	
	// Constructors
	InMemoryDexClassLoader::InMemoryDexClassLoader(jarray arg0, java::lang::ClassLoader arg1)
		: dalvik::system::BaseDexClassLoader(
			"dalvik.system.InMemoryDexClassLoader",
			"([Ljava/nio/ByteBuffer;Ljava/lang/ClassLoader;)V",
			arg0,
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

