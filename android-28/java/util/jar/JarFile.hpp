#pragma once

#include "../../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JarFile(const char *className, const char *sig, Ts...agv) : java::util::zip::ZipFile(className, sig, std::forward<Ts>(agv)...) {}
		JarFile(QAndroidJniObject obj);
		
		// Constructors
		JarFile(java::io::File arg0);
		JarFile(jstring arg0);
		JarFile(java::io::File arg0, jboolean arg1);
		JarFile(jstring arg0, jboolean arg1);
		JarFile(java::io::File arg0, jboolean arg1, jint arg2);
		JarFile(java::io::File arg0, jboolean arg1, jint arg2, JObject arg3);
		
		// Methods
		static JObject baseVersion();
		static JObject runtimeVersion();
		JObject entries();
		java::util::zip::ZipEntry getEntry(jstring arg0);
		java::io::InputStream getInputStream(java::util::zip::ZipEntry arg0);
		java::util::jar::JarEntry getJarEntry(jstring arg0);
		java::util::jar::Manifest getManifest();
		JObject getVersion();
		jboolean isMultiRelease();
		JObject stream();
		JObject versionedStream();
	};
} // namespace java::util::jar

