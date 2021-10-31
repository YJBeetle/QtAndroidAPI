#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace java::util
{
	class Base64_Decoder : public __JniBaseClass
	{
	public:
		// Fields
		
		Base64_Decoder(QAndroidJniObject obj);
		// Constructors
		Base64_Decoder() = default;
		
		// Methods
		jbyteArray decode(jbyteArray arg0);
		jbyteArray decode(jstring arg0);
		jint decode(jbyteArray arg0, jbyteArray arg1);
		QAndroidJniObject decode(java::nio::ByteBuffer arg0);
		QAndroidJniObject wrap(java::io::InputStream arg0);
	};
} // namespace java::util

