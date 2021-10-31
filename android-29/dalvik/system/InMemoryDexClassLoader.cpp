#include "../../java/lang/ClassLoader.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./InMemoryDexClassLoader.hpp"

namespace dalvik::system
{
	// Fields
	
	InMemoryDexClassLoader::InMemoryDexClassLoader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InMemoryDexClassLoader::InMemoryDexClassLoader(jarray arg0, java::lang::ClassLoader arg1)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.InMemoryDexClassLoader",
			"([Ljava/nio/ByteBuffer;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	InMemoryDexClassLoader::InMemoryDexClassLoader(java::nio::ByteBuffer arg0, java::lang::ClassLoader arg1)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.InMemoryDexClassLoader",
			"(Ljava/nio/ByteBuffer;Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	InMemoryDexClassLoader::InMemoryDexClassLoader(jarray arg0, jstring arg1, java::lang::ClassLoader arg2)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.InMemoryDexClassLoader",
			"([Ljava/nio/ByteBuffer;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	
	// Methods
} // namespace dalvik::system

