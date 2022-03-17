#pragma once

#include "../../../JByteArray.hpp"
#include "./AssetFileDescriptor.def.hpp"
#include "./AssetFileDescriptor_AutoCloseInputStream.def.hpp"

namespace android::content::res
{
	// Fields
	
	// Constructors
	inline AssetFileDescriptor_AutoCloseInputStream::AssetFileDescriptor_AutoCloseInputStream(android::content::res::AssetFileDescriptor arg0)
		: android::os::ParcelFileDescriptor_AutoCloseInputStream(
			"android.content.res.AssetFileDescriptor$AutoCloseInputStream",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint AssetFileDescriptor_AutoCloseInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void AssetFileDescriptor_AutoCloseInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean AssetFileDescriptor_AutoCloseInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint AssetFileDescriptor_AutoCloseInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint AssetFileDescriptor_AutoCloseInputStream::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint AssetFileDescriptor_AutoCloseInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void AssetFileDescriptor_AutoCloseInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong AssetFileDescriptor_AutoCloseInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace android::content::res

// Base class headers
#include "../../../java/io/InputStream.hpp"
#include "../../../java/io/FileInputStream.hpp"
#include "../../os/ParcelFileDescriptor_AutoCloseInputStream.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::res;
#endif
