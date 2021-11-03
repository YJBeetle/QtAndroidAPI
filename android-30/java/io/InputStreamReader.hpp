#pragma once

#include "./Reader.hpp"

class JCharArray;
namespace java::io
{
	class InputStream;
}
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit InputStreamReader(const char *className, const char *sig, Ts...agv) : java::io::Reader(className, sig, std::forward<Ts>(agv)...) {}
		InputStreamReader(QJniObject obj);
		
		// Constructors
		InputStreamReader(java::io::InputStream arg0);
		InputStreamReader(java::io::InputStream arg0, JString arg1);
		InputStreamReader(java::io::InputStream arg0, java::nio::charset::Charset arg1);
		InputStreamReader(java::io::InputStream arg0, java::nio::charset::CharsetDecoder arg1);
		
		// Methods
		void close();
		JString getEncoding();
		jint read();
		jint read(JCharArray arg0, jint arg1, jint arg2);
		jboolean ready();
	};
} // namespace java::io

