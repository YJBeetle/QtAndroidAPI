#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
namespace java::io
{
	class Reader;
}
namespace java::io
{
	class Writer;
}
class JString;
namespace java::nio
{
	class ByteBuffer;
}
namespace java::nio::charset
{
	class Charset;
}
namespace java::nio::charset
{
	class CharsetDecoder;
}
namespace java::nio::charset
{
	class CharsetEncoder;
}

namespace java::nio::channels
{
	class Channels : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Channels(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Channels(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject newChannel(java::io::InputStream arg0);
		static JObject newChannel(java::io::OutputStream arg0);
		static java::io::InputStream newInputStream(JObject arg0);
		static java::io::OutputStream newOutputStream(JObject arg0);
		static java::io::Reader newReader(JObject arg0, JString arg1);
		static java::io::Reader newReader(JObject arg0, java::nio::charset::Charset arg1);
		static java::io::Reader newReader(JObject arg0, java::nio::charset::CharsetDecoder arg1, jint arg2);
		static java::io::Writer newWriter(JObject arg0, JString arg1);
		static java::io::Writer newWriter(JObject arg0, java::nio::charset::Charset arg1);
		static java::io::Writer newWriter(JObject arg0, java::nio::charset::CharsetEncoder arg1, jint arg2);
	};
} // namespace java::nio::channels

