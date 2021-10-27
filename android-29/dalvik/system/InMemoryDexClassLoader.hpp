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
		
		InMemoryDexClassLoader(QAndroidJniObject obj);
		// Constructors
		InMemoryDexClassLoader(jarray &arg0, java::lang::ClassLoader &arg1);
		InMemoryDexClassLoader(java::nio::ByteBuffer &arg0, java::lang::ClassLoader &arg1);
		InMemoryDexClassLoader(jarray &arg0, jstring &arg1, java::lang::ClassLoader &arg2);
		InMemoryDexClassLoader(jarray &arg0, const QString &arg1, java::lang::ClassLoader &arg2);
		InMemoryDexClassLoader() = default;
		
		// Methods
	};
} // namespace dalvik::system

