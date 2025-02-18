#pragma once

#include "./BaseDexClassLoader.def.hpp"

class JArray;
namespace java::lang
{
	class ClassLoader;
}
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit InMemoryDexClassLoader(const char *className, const char *sig, Ts...agv) : dalvik::system::BaseDexClassLoader(className, sig, std::forward<Ts>(agv)...) {}
		InMemoryDexClassLoader(QJniObject obj) : dalvik::system::BaseDexClassLoader(obj) {}
		
		// Constructors
		InMemoryDexClassLoader(JArray arg0, java::lang::ClassLoader arg1);
		InMemoryDexClassLoader(java::nio::ByteBuffer arg0, java::lang::ClassLoader arg1);
		InMemoryDexClassLoader(JArray arg0, JString arg1, java::lang::ClassLoader arg2);
		
		// Methods
	};
} // namespace dalvik::system

