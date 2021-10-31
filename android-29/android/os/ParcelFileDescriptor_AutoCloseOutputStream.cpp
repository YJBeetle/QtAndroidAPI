#include "./ParcelFileDescriptor.hpp"
#include "./ParcelFileDescriptor_AutoCloseOutputStream.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	ParcelFileDescriptor_AutoCloseOutputStream::ParcelFileDescriptor_AutoCloseOutputStream(QAndroidJniObject obj) : java::io::FileOutputStream(obj) {}
	
	// Constructors
	ParcelFileDescriptor_AutoCloseOutputStream::ParcelFileDescriptor_AutoCloseOutputStream(android::os::ParcelFileDescriptor arg0)
		: java::io::FileOutputStream(
			"android.os.ParcelFileDescriptor$AutoCloseOutputStream",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	void ParcelFileDescriptor_AutoCloseOutputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::os

