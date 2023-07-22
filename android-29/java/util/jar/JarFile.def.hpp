#pragma once

#include "../zip/ZipFile.def.hpp"

class JByteArray;
namespace java::io
{
	class File;
}
namespace java::io
{
	class InputStream;
}
class JObject;
class JString;
namespace java::lang::ref
{
	class SoftReference;
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
		static JString MANIFEST_NAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JarFile(const char *className, const char *sig, Ts...agv) : java::util::zip::ZipFile(className, sig, std::forward<Ts>(agv)...) {}
		JarFile(QAndroidJniObject obj) : java::util::zip::ZipFile(obj) {}
		
		// Constructors
		JarFile(java::io::File arg0);
		JarFile(JString arg0);
		JarFile(java::io::File arg0, jboolean arg1);
		JarFile(JString arg0, jboolean arg1);
		JarFile(java::io::File arg0, jboolean arg1, jint arg2);
		JarFile(java::io::File arg0, jboolean arg1, jint arg2, JObject arg3);
		
		// Methods
		static JObject baseVersion();
		static JObject runtimeVersion();
		JObject entries() const;
		java::util::zip::ZipEntry getEntry(JString arg0) const;
		java::io::InputStream getInputStream(java::util::zip::ZipEntry arg0) const;
		java::util::jar::JarEntry getJarEntry(JString arg0) const;
		java::util::jar::Manifest getManifest() const;
		JObject getVersion() const;
		jboolean isMultiRelease() const;
		JObject stream() const;
		JObject versionedStream() const;
	};
} // namespace java::util::jar

