#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../io/InputStream.hpp"
#include "../../io/FilterInputStream.hpp"
#include "../zip/InflaterInputStream.hpp"
#include "../zip/ZipInputStream.hpp"

namespace java::io
{
	class InputStream;
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
	class JarInputStream : public java::util::zip::ZipInputStream
	{
	public:
		// Fields
		
		JarInputStream(QAndroidJniObject obj);
		// Constructors
		JarInputStream(java::io::InputStream arg0);
		JarInputStream(java::io::InputStream arg0, jboolean arg1);
		JarInputStream() = default;
		
		// Methods
		QAndroidJniObject getManifest();
		QAndroidJniObject getNextEntry();
		QAndroidJniObject getNextJarEntry();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::util::jar

