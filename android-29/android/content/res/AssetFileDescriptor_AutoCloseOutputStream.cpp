#include "./AssetFileDescriptor.hpp"
#include "./AssetFileDescriptor_AutoCloseOutputStream.hpp"

namespace android::content::res
{
	// Fields
	
	AssetFileDescriptor_AutoCloseOutputStream::AssetFileDescriptor_AutoCloseOutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AssetFileDescriptor_AutoCloseOutputStream::AssetFileDescriptor_AutoCloseOutputStream(android::content::res::AssetFileDescriptor &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.AssetFileDescriptor$AutoCloseOutputStream",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void AssetFileDescriptor_AutoCloseOutputStream::write(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"([B)V",
			arg0
		);
	}
	void AssetFileDescriptor_AutoCloseOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void AssetFileDescriptor_AutoCloseOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::content::res

