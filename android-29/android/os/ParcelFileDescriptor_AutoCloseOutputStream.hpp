#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../../java/io/FileOutputStream.hpp"

namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}

namespace __jni_impl::android::os
{
	class ParcelFileDescriptor_AutoCloseOutputStream : public __jni_impl::java::io::FileOutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::os::ParcelFileDescriptor arg0);
		
		// Methods
		void close();
	};
} // namespace __jni_impl::android::os

#include "./ParcelFileDescriptor.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void ParcelFileDescriptor_AutoCloseOutputStream::__constructor(__jni_impl::android::os::ParcelFileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.ParcelFileDescriptor$AutoCloseOutputStream",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ParcelFileDescriptor_AutoCloseOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class ParcelFileDescriptor_AutoCloseOutputStream : public __jni_impl::android::os::ParcelFileDescriptor_AutoCloseOutputStream
	{
	public:
		ParcelFileDescriptor_AutoCloseOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		ParcelFileDescriptor_AutoCloseOutputStream(__jni_impl::android::os::ParcelFileDescriptor arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

