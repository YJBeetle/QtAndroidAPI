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
		
		DexFile(QAndroidJniObject obj);
		// Constructors
		DexFile(java::io::File &arg0);
		DexFile(jstring &arg0);
		DexFile(const QString &arg0);
		DexFile() = default;
		
		// Methods
		static jboolean isDexOptNeeded(jstring arg0);
		static jboolean isDexOptNeeded(const QString &arg0);
		static QAndroidJniObject loadDex(jstring arg0, jstring arg1, jint arg2);
		static QAndroidJniObject loadDex(const QString &arg0, const QString &arg1, jint arg2);
		void close();
		QAndroidJniObject entries();
		jstring getName();
		jclass loadClass(jstring arg0, java::lang::ClassLoader arg1);
		jclass loadClass(const QString &arg0, java::lang::ClassLoader arg1);
		jstring toString();
	};
} // namespace dalvik::system

