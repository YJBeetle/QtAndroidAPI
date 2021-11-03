#include "../../../JByteArray.hpp"
#include "./AssetFileDescriptor.hpp"
#include "./AssetFileDescriptor_AutoCloseOutputStream.hpp"

namespace android::content::res
{
	// Fields
	
	// QAndroidJniObject forward
	AssetFileDescriptor_AutoCloseOutputStream::AssetFileDescriptor_AutoCloseOutputStream(QAndroidJniObject obj) : android::os::ParcelFileDescriptor_AutoCloseOutputStream(obj) {}
	
	// Constructors
	AssetFileDescriptor_AutoCloseOutputStream::AssetFileDescriptor_AutoCloseOutputStream(android::content::res::AssetFileDescriptor arg0)
		: android::os::ParcelFileDescriptor_AutoCloseOutputStream(
			"android.content.res.AssetFileDescriptor$AutoCloseOutputStream",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	void AssetFileDescriptor_AutoCloseOutputStream::write(JByteArray arg0) const
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void AssetFileDescriptor_AutoCloseOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void AssetFileDescriptor_AutoCloseOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
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

