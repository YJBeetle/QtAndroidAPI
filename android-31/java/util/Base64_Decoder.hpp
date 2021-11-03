#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JIntArray;
namespace java::io
{
	class InputStream;
}
class JString;
namespace java::nio
{
	class ByteBuffer;
}

namespace java::util
{
	class Base64_Decoder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Base64_Decoder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Base64_Decoder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JByteArray decode(JByteArray arg0);
		JByteArray decode(JString arg0);
		jint decode(JByteArray arg0, JByteArray arg1);
		java::nio::ByteBuffer decode(java::nio::ByteBuffer arg0);
		java::io::InputStream wrap(java::io::InputStream arg0);
	};
} // namespace java::util

