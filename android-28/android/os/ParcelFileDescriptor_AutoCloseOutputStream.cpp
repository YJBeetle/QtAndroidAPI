#include "./ParcelFileDescriptor.hpp"
#include "./ParcelFileDescriptor_AutoCloseOutputStream.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	ParcelFileDescriptor_AutoCloseOutputStream::ParcelFileDescriptor_AutoCloseOutputStream(android::os::ParcelFileDescriptor arg0)
		: java::io::FileOutputStream(
			"android.os.ParcelFileDescriptor$AutoCloseOutputStream",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	void ParcelFileDescriptor_AutoCloseOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::os

