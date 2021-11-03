#pragma once

#include "../../JObject.hpp"

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
	class Base64_Encoder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Base64_Encoder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Base64_Encoder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jbyteArray encode(jbyteArray arg0);
		jint encode(jbyteArray arg0, jbyteArray arg1);
		java::nio::ByteBuffer encode(java::nio::ByteBuffer arg0);
		jstring encodeToString(jbyteArray arg0);
		java::util::Base64_Encoder withoutPadding();
		java::io::OutputStream wrap(java::io::OutputStream arg0);
	};
} // namespace java::util

