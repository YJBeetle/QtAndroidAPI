#include "../../../JByteArray.hpp"
#include "./AssetFileDescriptor.hpp"
#include "./AssetFileDescriptor_AutoCloseInputStream.hpp"

namespace android::content::res
{
	// Fields
	
	// Constructors
	AssetFileDescriptor_AutoCloseInputStream::AssetFileDescriptor_AutoCloseInputStream(android::content::res::AssetFileDescriptor arg0)
		: android::os::ParcelFileDescriptor_AutoCloseInputStream(
			"android.content.res.AssetFileDescriptor$AutoCloseInputStream",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	jint AssetFileDescriptor_AutoCloseInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void AssetFileDescriptor_AutoCloseInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean AssetFileDescriptor_AutoCloseInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint AssetFileDescriptor_AutoCloseInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint AssetFileDescriptor_AutoCloseInputStream::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint AssetFileDescriptor_AutoCloseInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void AssetFileDescriptor_AutoCloseInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong AssetFileDescriptor_AutoCloseInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace android::content::res

