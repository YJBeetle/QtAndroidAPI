#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class OutputStream;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace java::util
{
	class Base64_Encoder : public __JniBaseClass
	{
	public:
		// Fields
		
		Base64_Encoder(QAndroidJniObject obj);
		// Constructors
		Base64_Encoder() = default;
		
		// Methods
		jbyteArray encode(jbyteArray arg0);
		jint encode(jbyteArray arg0, jbyteArray arg1);
		QAndroidJniObject encode(java::nio::ByteBuffer arg0);
		jstring encodeToString(jbyteArray arg0);
		QAndroidJniObject withoutPadding();
		QAndroidJniObject wrap(java::io::OutputStream arg0);
	};
} // namespace java::util

