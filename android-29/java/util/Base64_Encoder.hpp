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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Base64_Encoder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Base64_Encoder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jbyteArray encode(jbyteArray arg0);
		jint encode(jbyteArray arg0, jbyteArray arg1);
		QAndroidJniObject encode(java::nio::ByteBuffer arg0);
		jstring encodeToString(jbyteArray arg0);
		QAndroidJniObject withoutPadding();
		QAndroidJniObject wrap(java::io::OutputStream arg0);
	};
} // namespace java::util

