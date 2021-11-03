#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class File;
}
class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JString;

namespace dalvik::system
{
	class DexFile : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DexFile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DexFile(QJniObject obj);
		
		// Constructors
		DexFile(java::io::File arg0);
		DexFile(JString arg0);
		
		// Methods
		static jboolean isDexOptNeeded(JString arg0);
		static dalvik::system::DexFile loadDex(JString arg0, JString arg1, jint arg2);
		void close();
		JObject entries();
		JString getName();
		JClass loadClass(JString arg0, java::lang::ClassLoader arg1);
		JString toString();
	};
} // namespace dalvik::system

