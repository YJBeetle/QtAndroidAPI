#include "../../JByteArray.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./Base64OutputStream.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	Base64OutputStream::Base64OutputStream(QAndroidJniObject obj) : java::io::FilterOutputStream(obj) {}
	
	// Constructors
	Base64OutputStream::Base64OutputStream(java::io::OutputStream arg0, jint arg1)
		: java::io::FilterOutputStream(
			"android.util.Base64OutputStream",
			"(Ljava/io/OutputStream;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void Base64OutputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Base64OutputStream::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void Base64OutputStream::write(JByteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace android::util

