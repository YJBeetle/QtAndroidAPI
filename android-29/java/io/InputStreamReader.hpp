#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Reader.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::nio::charset
{
	class Charset;
}
namespace java::nio::charset
{
	class CharsetDecoder;
}

namespace java::io
{
	class InputStreamReader : public java::io::Reader
	{
	public:
		// Fields
		
		InputStreamReader(QAndroidJniObject obj);
		// Constructors
		InputStreamReader(java::io::InputStream arg0);
		InputStreamReader(java::io::InputStream arg0, jstring arg1);
		InputStreamReader(java::io::InputStream arg0, java::nio::charset::Charset arg1);
		InputStreamReader(java::io::InputStream arg0, java::nio::charset::CharsetDecoder arg1);
		InputStreamReader() = default;
		
		// Methods
		void close();
		jstring getEncoding();
		jint read();
		jint read(jcharArray arg0, jint arg1, jint arg2);
		jboolean ready();
	};
} // namespace java::io

