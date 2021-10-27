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
		
		Channels(QAndroidJniObject obj);
		// Constructors
		Channels() = default;
		
		// Methods
		static QAndroidJniObject newChannel(java::io::InputStream arg0);
		static QAndroidJniObject newChannel(java::io::OutputStream arg0);
		static QAndroidJniObject newInputStream(__JniBaseClass arg0);
		static QAndroidJniObject newOutputStream(__JniBaseClass arg0);
		static QAndroidJniObject newReader(__JniBaseClass arg0, jstring arg1);
		static QAndroidJniObject newReader(__JniBaseClass arg0, const QString &arg1);
		static QAndroidJniObject newReader(__JniBaseClass arg0, java::nio::charset::Charset arg1);
		static QAndroidJniObject newReader(__JniBaseClass arg0, java::nio::charset::CharsetDecoder arg1, jint arg2);
		static QAndroidJniObject newWriter(__JniBaseClass arg0, jstring arg1);
		static QAndroidJniObject newWriter(__JniBaseClass arg0, const QString &arg1);
		static QAndroidJniObject newWriter(__JniBaseClass arg0, java::nio::charset::Charset arg1);
		static QAndroidJniObject newWriter(__JniBaseClass arg0, java::nio::charset::CharsetEncoder arg1, jint arg2);
	};
} // namespace java::nio::channels

