#include "./ParcelFileDescriptor.hpp"
#include "./ParcelFileDescriptor_AutoCloseInputStream.hpp"

namespace android::os
{
	// Fields
	
	ParcelFileDescriptor_AutoCloseInputStream::ParcelFileDescriptor_AutoCloseInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ParcelFileDescriptor_AutoCloseInputStream::ParcelFileDescriptor_AutoCloseInputStream(android::os::ParcelFileDescriptor &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.ParcelFileDescriptor$AutoCloseInputStream",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ParcelFileDescriptor_AutoCloseInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint ParcelFileDescriptor_AutoCloseInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint ParcelFileDescriptor_AutoCloseInputStream::read(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint ParcelFileDescriptor_AutoCloseInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::os

