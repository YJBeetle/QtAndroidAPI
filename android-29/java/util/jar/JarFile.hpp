#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../zip/ZipFile.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class InputStream;
}
namespace java::lang
{
	class ThreadLocal;
}
namespace java::lang::ref
{
	class SoftReference;
}
namespace java::net
{
	class URL;
}
namespace java::security
{
	class CodeSource;
}
namespace java::util::jar
{
	class JarEntry;
}
namespace java::util::jar
{
	class Manifest;
}
namespace java::util::zip
{
	class ZipEntry;
}

namespace java::util::jar
{
	class JarFile : public java::util::zip::ZipFile
	{
	public:
		// Fields
		static jstring MANIFEST_NAME();
		
		JarFile(QAndroidJniObject obj);
		// Constructors
		JarFile(java::io::File arg0);
		JarFile(jstring arg0);
		JarFile(java::io::File arg0, jboolean arg1);
		JarFile(jstring arg0, jboolean arg1);
		JarFile(java::io::File arg0, jboolean arg1, jint arg2);
		JarFile(java::io::File arg0, jboolean arg1, jint arg2, __JniBaseClass arg3);
		JarFile() = default;
		
		// Methods
		static QAndroidJniObject baseVersion();
		static QAndroidJniObject runtimeVersion();
		QAndroidJniObject entries();
		QAndroidJniObject getEntry(jstring arg0);
		QAndroidJniObject getInputStream(java::util::zip::ZipEntry arg0);
		QAndroidJniObject getJarEntry(jstring arg0);
		QAndroidJniObject getManifest();
		QAndroidJniObject getVersion();
		jboolean isMultiRelease();
		QAndroidJniObject stream();
		QAndroidJniObject versionedStream();
	};
} // namespace java::util::jar

