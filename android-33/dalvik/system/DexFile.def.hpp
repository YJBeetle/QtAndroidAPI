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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DexFile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DexFile(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DexFile(java::io::File arg0);
		DexFile(JString arg0);
		
		// Methods
		static jboolean isDexOptNeeded(JString arg0);
		static dalvik::system::DexFile loadDex(JString arg0, JString arg1, jint arg2);
		void close() const;
		JObject entries() const;
		JString getName() const;
		JClass loadClass(JString arg0, java::lang::ClassLoader arg1) const;
		JString toString() const;
	};
} // namespace dalvik::system

