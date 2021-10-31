#include "../../java/io/OutputStream.hpp"
#include "./Base64OutputStream.hpp"

namespace android::util
{
	// Fields
	
	Base64OutputStream::Base64OutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Base64OutputStream::Base64OutputStream(java::io::OutputStream arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.Base64OutputStream",
			"(Ljava/io/OutputStream;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void Base64OutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void Base64OutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void Base64OutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::util

