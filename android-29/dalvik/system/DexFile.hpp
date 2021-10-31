#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}
namespace java::lang
{
	class ClassLoader;
}

namespace dalvik::system
{
	class DexFile : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DexFile(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DexFile(QAndroidJniObject obj);
		
		// Constructors
		DexFile(java::io::File arg0);
		DexFile(jstring arg0);
		
		// Methods
		static jboolean isDexOptNeeded(jstring arg0);
		static QAndroidJniObject loadDex(jstring arg0, jstring arg1, jint arg2);
		void close();
		QAndroidJniObject entries();
		jstring getName();
		jclass loadClass(jstring arg0, java::lang::ClassLoader arg1);
		jstring toString();
	};
} // namespace dalvik::system

