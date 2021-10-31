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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Base64_Decoder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Base64_Decoder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jbyteArray decode(jbyteArray arg0);
		jbyteArray decode(jstring arg0);
		jint decode(jbyteArray arg0, jbyteArray arg1);
		java::nio::ByteBuffer decode(java::nio::ByteBuffer arg0);
		java::io::InputStream wrap(java::io::InputStream arg0);
	};
} // namespace java::util

