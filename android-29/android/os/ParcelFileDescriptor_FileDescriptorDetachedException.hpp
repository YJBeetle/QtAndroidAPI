#pragma once

#ifndef ANDROID_OS_PARCELFILEDESCRIPTOR_FILEDESCRIPTORDETACHEDEXCEPTION
#define ANDROID_OS_PARCELFILEDESCRIPTOR_FILEDESCRIPTORDETACHEDEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"


namespace __jni_impl::android::os
{
	class ParcelFileDescriptor_FileDescriptorDetachedException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void ParcelFileDescriptor_FileDescriptorDetachedException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.ParcelFileDescriptor$FileDescriptorDetachedException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::os

namespace android::os
{
	class ParcelFileDescriptor_FileDescriptorDetachedException : public __jni_impl::android::os::ParcelFileDescriptor_FileDescriptorDetachedException
	{
	public:
		ParcelFileDescriptor_FileDescriptorDetachedException(QAndroidJniObject obj) { __thiz = obj; }
		ParcelFileDescriptor_FileDescriptorDetachedException()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_PARCELFILEDESCRIPTOR_FILEDESCRIPTORDETACHEDEXCEPTION

