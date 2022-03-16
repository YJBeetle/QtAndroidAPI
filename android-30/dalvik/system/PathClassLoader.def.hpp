#pragma once

#include "./BaseDexClassLoader.def.hpp"

namespace java::lang
{
	class ClassLoader;
}
class JString;

namespace dalvik::system
{
	class PathClassLoader : public dalvik::system::BaseDexClassLoader
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PathClassLoader(const char *className, const char *sig, Ts...agv) : dalvik::system::BaseDexClassLoader(className, sig, std::forward<Ts>(agv)...) {}
		PathClassLoader(QJniObject obj) : dalvik::system::BaseDexClassLoader(obj) {}
		
		// Constructors
		PathClassLoader(JString arg0, java::lang::ClassLoader arg1);
		PathClassLoader(JString arg0, JString arg1, java::lang::ClassLoader arg2);
		
		// Methods
	};
} // namespace dalvik::system

