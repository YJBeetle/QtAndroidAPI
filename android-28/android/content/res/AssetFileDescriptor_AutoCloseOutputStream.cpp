#include "./AssetFileDescriptor.hpp"
#include "./AssetFileDescriptor_AutoCloseOutputStream.hpp"

namespace android::content::res
{
	// Fields
	
	// QJniObject forward
	AssetFileDescriptor_AutoCloseOutputStream::AssetFileDescriptor_AutoCloseOutputStream(QJniObject obj) : android::os::ParcelFileDescriptor_AutoCloseOutputStream(obj) {}
	
	// Constructors
	AssetFileDescriptor_AutoCloseOutputStream::AssetFileDescriptor_AutoCloseOutputStream(android::content::res::AssetFileDescriptor arg0)
		: android::os::ParcelFileDescriptor_AutoCloseOutputStream(
			"android.content.res.AssetFileDescriptor$AutoCloseOutputStream",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	void AssetFileDescriptor_AutoCloseOutputStream::write(jbyteArray arg0)
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0
		);
	}
	void AssetFileDescriptor_AutoCloseOutputStream::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void AssetFileDescriptor_AutoCloseOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::content::res

