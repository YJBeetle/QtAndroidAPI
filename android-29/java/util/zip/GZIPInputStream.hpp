#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../io/InputStream.hpp"
#include "../../io/FilterInputStream.hpp"
#include "./InflaterInputStream.hpp"

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
		
		GZIPInputStream(QAndroidJniObject obj);
		// Constructors
		GZIPInputStream(java::io::InputStream &arg0);
		GZIPInputStream(java::io::InputStream &arg0, jint &arg1);
		GZIPInputStream() = default;
		
		// Methods
		void close();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::util::zip

