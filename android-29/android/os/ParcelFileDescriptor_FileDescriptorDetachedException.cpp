#include "./ParcelFileDescriptor_FileDescriptorDetachedException.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	ParcelFileDescriptor_FileDescriptorDetachedException::ParcelFileDescriptor_FileDescriptorDetachedException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	ParcelFileDescriptor_FileDescriptorDetachedException::ParcelFileDescriptor_FileDescriptorDetachedException()
		: java::io::IOException(
			"android.os.ParcelFileDescriptor$FileDescriptorDetachedException",
			"()V"
		) {}
	
	// Methods
} // namespace android::os

