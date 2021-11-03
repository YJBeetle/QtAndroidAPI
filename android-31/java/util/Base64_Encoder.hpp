#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JCharArray;
namespace java::io
{
	class OutputStream;
}
class JString;
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
		JByteArray encode(JByteArray arg0) const;
		jint encode(JByteArray arg0, JByteArray arg1) const;
		java::nio::ByteBuffer encode(java::nio::ByteBuffer arg0) const;
		JString encodeToString(JByteArray arg0) const;
		java::util::Base64_Encoder withoutPadding() const;
		java::io::OutputStream wrap(java::io::OutputStream arg0) const;
	};
} // namespace java::util

