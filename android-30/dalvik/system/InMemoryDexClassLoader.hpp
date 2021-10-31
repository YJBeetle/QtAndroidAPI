#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "./BaseDexClassLoader.hpp"

namespace java::lang
{
	class ClassLoader;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace dalvik::system
{
	class InMemoryDexClassLoader : public dalvik::system::BaseDexClassLoader
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InMemoryDexClassLoader(const char *className, const char *sig, Ts...agv) : dalvik::system::BaseDexClassLoader(className, sig, std::forward<Ts>(agv)...) {}
		InMemoryDexClassLoader(QAndroidJniObject obj);
		
		// Constructors
		InMemoryDexClassLoader(jarray arg0, java::lang::ClassLoader arg1);
		InMemoryDexClassLoader(java::nio::ByteBuffer arg0, java::lang::ClassLoader arg1);
		InMemoryDexClassLoader(jarray arg0, jstring arg1, java::lang::ClassLoader arg2);
		
		// Methods
	};
} // namespace dalvik::system

