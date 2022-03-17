#pragma once

#include "../../JByteArray.hpp"
#include "./ParcelFileDescriptor.def.hpp"
#include "./ParcelFileDescriptor_AutoCloseInputStream.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline ParcelFileDescriptor_AutoCloseInputStream::ParcelFileDescriptor_AutoCloseInputStream(android::os::ParcelFileDescriptor arg0)
		: java::io::FileInputStream(
			"android.os.ParcelFileDescriptor$AutoCloseInputStream",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void ParcelFileDescriptor_AutoCloseInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint ParcelFileDescriptor_AutoCloseInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint ParcelFileDescriptor_AutoCloseInputStream::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint ParcelFileDescriptor_AutoCloseInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace android::os

// Base class headers
#include "../../java/io/InputStream.hpp"
#include "../../java/io/FileInputStream.hpp"

