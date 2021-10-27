#include "./ParcelFileDescriptor_FileDescriptorDetachedException.hpp"

namespace android::os
{
	// Fields
	
	ParcelFileDescriptor_FileDescriptorDetachedException::ParcelFileDescriptor_FileDescriptorDetachedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ParcelFileDescriptor_FileDescriptorDetachedException::ParcelFileDescriptor_FileDescriptorDetachedException()
	{
		__thiz = QAndroidJniObject(
			"android.os.ParcelFileDescriptor$FileDescriptorDetachedException",
			"()V"
		);
	}
	
	// Methods
} // namespace android::os

