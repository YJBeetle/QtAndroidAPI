#pragma once

#include "../zip/ZipInputStream.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}
class JString;
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
	class JarInputStream : public java::util::zip::ZipInputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JarInputStream(const char *className, const char *sig, Ts...agv) : java::util::zip::ZipInputStream(className, sig, std::forward<Ts>(agv)...) {}
		JarInputStream(QAndroidJniObject obj);
		
		// Constructors
		JarInputStream(java::io::InputStream arg0);
		JarInputStream(java::io::InputStream arg0, jboolean arg1);
		
		// Methods
		java::util::jar::Manifest getManifest();
		java::util::zip::ZipEntry getNextEntry();
		java::util::jar::JarEntry getNextJarEntry();
		jint read(JByteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::util::jar

