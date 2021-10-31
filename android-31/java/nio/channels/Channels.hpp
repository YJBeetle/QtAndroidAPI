#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class Channels : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Channels(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Channels(QJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass newChannel(java::io::InputStream arg0);
		static __JniBaseClass newChannel(java::io::OutputStream arg0);
		static java::io::InputStream newInputStream(__JniBaseClass arg0);
		static java::io::OutputStream newOutputStream(__JniBaseClass arg0);
		static java::io::Reader newReader(__JniBaseClass arg0, jstring arg1);
		static java::io::Reader newReader(__JniBaseClass arg0, java::nio::charset::Charset arg1);
		static java::io::Reader newReader(__JniBaseClass arg0, java::nio::charset::CharsetDecoder arg1, jint arg2);
		static java::io::Writer newWriter(__JniBaseClass arg0, jstring arg1);
		static java::io::Writer newWriter(__JniBaseClass arg0, java::nio::charset::Charset arg1);
		static java::io::Writer newWriter(__JniBaseClass arg0, java::nio::charset::CharsetEncoder arg1, jint arg2);
	};
} // namespace java::nio::channels

