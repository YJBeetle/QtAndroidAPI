#pragma once

#include "./InflaterInputStream.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}
namespace java::util::zip
{
	class CRC32;
}

namespace java::util::zip
{
	class GZIPInputStream : public java::util::zip::InflaterInputStream
	{
	public:
		// Fields
		static jint GZIP_MAGIC();
		
		// QJniObject forward
		template<typename ...Ts> explicit GZIPInputStream(const char *className, const char *sig, Ts...agv) : java::util::zip::InflaterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		GZIPInputStream(QJniObject obj);
		
		// Constructors
		GZIPInputStream(java::io::InputStream arg0);
		GZIPInputStream(java::io::InputStream arg0, jint arg1);
		
		// Methods
		void close() const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::util::zip

