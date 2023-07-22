#pragma once

#include "./InflaterInputStream.def.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ZipInputStream(const char *className, const char *sig, Ts...agv) : java::util::zip::InflaterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		ZipInputStream(QJniObject obj) : java::util::zip::InflaterInputStream(obj) {}
		
		// Constructors
		ZipInputStream(java::io::InputStream arg0);
		ZipInputStream(java::io::InputStream arg0, java::nio::charset::Charset arg1);
		
		// Methods
		jint available() const;
		void close() const;
		void closeEntry() const;
		java::util::zip::ZipEntry getNextEntry() const;
		jint read() const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		JByteArray readAllBytes() const;
		JByteArray readNBytes(jint arg0) const;
		jint readNBytes(JByteArray arg0, jint arg1, jint arg2) const;
		jlong skip(jlong arg0) const;
		void skipNBytes(jlong arg0) const;
		jlong transferTo(java::io::OutputStream arg0) const;
	};
} // namespace java::util::zip

