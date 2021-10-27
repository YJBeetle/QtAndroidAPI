#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/FileInputStream.hpp"

namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}

namespace __jni_impl::android::os
{
	class ParcelFileDescriptor_AutoCloseInputStream : public __jni_impl::java::io::FileInputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::os::ParcelFileDescriptor arg0);
		
		// Methods
		void close();
		jint read();
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::android::os

#include "./ParcelFileDescriptor.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void ParcelFileDescriptor_AutoCloseInputStream::__constructor(__jni_impl::android::os::ParcelFileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.ParcelFileDescriptor$AutoCloseInputStream",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ParcelFileDescriptor_AutoCloseInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint ParcelFileDescriptor_AutoCloseInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint ParcelFileDescriptor_AutoCloseInputStream::read(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint ParcelFileDescriptor_AutoCloseInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class ParcelFileDescriptor_AutoCloseInputStream : public __jni_impl::android::os::ParcelFileDescriptor_AutoCloseInputStream
	{
	public:
		ParcelFileDescriptor_AutoCloseInputStream(QAndroidJniObject obj) { __thiz = obj; }
		ParcelFileDescriptor_AutoCloseInputStream(__jni_impl::android::os::ParcelFileDescriptor arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

