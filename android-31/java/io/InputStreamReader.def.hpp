#pragma once

#include "./Reader.def.hpp"

class JCharArray;
namespace java::io
{
	class InputStream;
}
class JObject;
class JString;
namespace java::nio
{
	class CharBuffer;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit InputStreamReader(const char *className, const char *sig, Ts...agv) : java::io::Reader(className, sig, std::forward<Ts>(agv)...) {}
		InputStreamReader(QJniObject obj) : java::io::Reader(obj) {}
		
		// Constructors
		InputStreamReader(java::io::InputStream arg0);
		InputStreamReader(java::io::InputStream arg0, JString arg1);
		InputStreamReader(java::io::InputStream arg0, java::nio::charset::Charset arg1);
		InputStreamReader(java::io::InputStream arg0, java::nio::charset::CharsetDecoder arg1);
		
		// Methods
		void close() const;
		JString getEncoding() const;
		jint read() const;
		jint read(java::nio::CharBuffer arg0) const;
		jint read(JCharArray arg0, jint arg1, jint arg2) const;
		jboolean ready() const;
	};
} // namespace java::io

