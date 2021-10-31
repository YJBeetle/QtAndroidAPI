#include "./ParcelFileDescriptor.hpp"
#include "./ParcelFileDescriptor_AutoCloseOutputStream.hpp"

namespace android::os
{
	// Fields
	
	ParcelFileDescriptor_AutoCloseOutputStream::ParcelFileDescriptor_AutoCloseOutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ParcelFileDescriptor_AutoCloseOutputStream::ParcelFileDescriptor_AutoCloseOutputStream(android::os::ParcelFileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.ParcelFileDescriptor$AutoCloseOutputStream",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ParcelFileDescriptor_AutoCloseOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::os

