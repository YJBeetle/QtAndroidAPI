#pragma once

#include "./ParcelFileDescriptor_FileDescriptorDetachedException.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline ParcelFileDescriptor_FileDescriptorDetachedException::ParcelFileDescriptor_FileDescriptorDetachedException()
		: java::io::IOException(
			"android.os.ParcelFileDescriptor$FileDescriptorDetachedException",
			"()V"
		) {}
	
	// Methods
} // namespace android::os

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"

