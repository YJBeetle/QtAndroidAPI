#include "./ParcelFileDescriptor_FileDescriptorDetachedException.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	ParcelFileDescriptor_FileDescriptorDetachedException::ParcelFileDescriptor_FileDescriptorDetachedException()
		: java::io::IOException(
			"android.os.ParcelFileDescriptor$FileDescriptorDetachedException",
			"()V"
		) {}
	
	// Methods
} // namespace android::os

