#include "../../java/lang/ClassLoader.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./InMemoryDexClassLoader.hpp"

namespace dalvik::system
{
	// Fields
	
	// QJniObject forward
	InMemoryDexClassLoader::InMemoryDexClassLoader(QJniObject obj) : dalvik::system::BaseDexClassLoader(obj) {}
	
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
	InMemoryDexClassLoader::InMemoryDexClassLoader(jarray arg0, jstring arg1, java::lang::ClassLoader arg2)
		: dalvik::system::BaseDexClassLoader(
			"dalvik.system.InMemoryDexClassLoader",
			"([Ljava/nio/ByteBuffer;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
} // namespace dalvik::system

