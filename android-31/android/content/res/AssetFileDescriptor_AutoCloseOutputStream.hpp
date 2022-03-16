#pragma once

#include "../../../JByteArray.hpp"
#include "./AssetFileDescriptor.def.hpp"
#include "./AssetFileDescriptor_AutoCloseOutputStream.def.hpp"

namespace android::content::res
{
	// Fields
	
	// Constructors
	inline AssetFileDescriptor_AutoCloseOutputStream::AssetFileDescriptor_AutoCloseOutputStream(android::content::res::AssetFileDescriptor arg0)
		: android::os::ParcelFileDescriptor_AutoCloseOutputStream(
			"android.content.res.AssetFileDescriptor$AutoCloseOutputStream",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void AssetFileDescriptor_AutoCloseOutputStream::write(JByteArray arg0) const
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void AssetFileDescriptor_AutoCloseOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void AssetFileDescriptor_AutoCloseOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace android::content::res

// Base class headers
#include "../../../java/io/OutputStream.hpp"
#include "../../../java/io/FileOutputStream.hpp"
#include "../../os/ParcelFileDescriptor_AutoCloseOutputStream.hpp"

