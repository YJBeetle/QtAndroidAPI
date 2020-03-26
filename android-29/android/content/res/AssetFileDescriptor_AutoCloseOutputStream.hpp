#pragma once

#ifndef ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR_AUTOCLOSEOUTPUTSTREAM
#define ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR_AUTOCLOSEOUTPUTSTREAM

#include "../../../__JniBaseClass.hpp"
#include "../../../java/io/OutputStream.hpp"
#include "../../../java/io/FileOutputStream.hpp"
#include "../../os/ParcelFileDescriptor_AutoCloseOutputStream.hpp"

namespace __jni_impl::android::content::res
{
	class AssetFileDescriptor;
}

namespace __jni_impl::android::content::res
{
	class AssetFileDescriptor_AutoCloseOutputStream : public __jni_impl::android::os::ParcelFileDescriptor_AutoCloseOutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::res::AssetFileDescriptor arg0);
		
		// Methods
		void write(jint arg0);
		void write(jbyteArray arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::android::content::res

#include "AssetFileDescriptor.hpp"

namespace __jni_impl::android::content::res
{
	// Fields
	
	// Constructors
	void AssetFileDescriptor_AutoCloseOutputStream::__constructor(__jni_impl::android::content::res::AssetFileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.AssetFileDescriptor$AutoCloseOutputStream",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void AssetFileDescriptor_AutoCloseOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void AssetFileDescriptor_AutoCloseOutputStream::write(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"([B)V",
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
} // namespace __jni_impl::android::content::res

namespace android::content::res
{
	class AssetFileDescriptor_AutoCloseOutputStream : public __jni_impl::android::content::res::AssetFileDescriptor_AutoCloseOutputStream
	{
	public:
		AssetFileDescriptor_AutoCloseOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		AssetFileDescriptor_AutoCloseOutputStream(__jni_impl::android::content::res::AssetFileDescriptor arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::res

#endif // ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR_AUTOCLOSEOUTPUTSTREAM

