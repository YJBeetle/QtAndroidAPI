#include "./AssetFileDescriptor.hpp"
#include "./AssetFileDescriptor_AutoCloseInputStream.hpp"

namespace android::content::res
{
	// Fields
	
	AssetFileDescriptor_AutoCloseInputStream::AssetFileDescriptor_AutoCloseInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AssetFileDescriptor_AutoCloseInputStream::AssetFileDescriptor_AutoCloseInputStream(android::content::res::AssetFileDescriptor &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.AssetFileDescriptor$AutoCloseInputStream",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint AssetFileDescriptor_AutoCloseInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void AssetFileDescriptor_AutoCloseInputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean AssetFileDescriptor_AutoCloseInputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint AssetFileDescriptor_AutoCloseInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint AssetFileDescriptor_AutoCloseInputStream::read(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint AssetFileDescriptor_AutoCloseInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void AssetFileDescriptor_AutoCloseInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong AssetFileDescriptor_AutoCloseInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace android::content::res

