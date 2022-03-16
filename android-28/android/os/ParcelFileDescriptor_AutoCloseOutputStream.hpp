#pragma once

#include "./ParcelFileDescriptor.def.hpp"
#include "./ParcelFileDescriptor_AutoCloseOutputStream.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline ParcelFileDescriptor_AutoCloseOutputStream::ParcelFileDescriptor_AutoCloseOutputStream(android::os::ParcelFileDescriptor arg0)
		: java::io::FileOutputStream(
			"android.os.ParcelFileDescriptor$AutoCloseOutputStream",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void ParcelFileDescriptor_AutoCloseOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::os

// Base class headers
#include "../../java/io/OutputStream.hpp"
#include "../../java/io/FileOutputStream.hpp"

