#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../io/InputStream.hpp"
#include "../../io/FilterInputStream.hpp"
#include "./InflaterInputStream.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::nio::charset
{
	class Charset;
}
namespace java::util::zip
{
	class CRC32;
}
namespace java::util::zip
{
	class ZipEntry;
}

namespace java::util::zip
{
	class ZipInputStream : public java::util::zip::InflaterInputStream
	{
	public:
		// Fields
		
		ZipInputStream(QAndroidJniObject obj);
		// Constructors
		ZipInputStream(java::io::InputStream arg0);
		ZipInputStream(java::io::InputStream arg0, java::nio::charset::Charset arg1);
		ZipInputStream() = default;
		
		// Methods
		jint available();
		void close();
		void closeEntry();
		QAndroidJniObject getNextEntry();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jlong skip(jlong arg0);
	};
} // namespace java::util::zip

