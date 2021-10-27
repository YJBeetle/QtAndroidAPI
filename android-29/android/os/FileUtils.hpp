#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class CancellationSignal;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::android::os
{
	class FileUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static void closeQuietly(__jni_impl::java::io::FileDescriptor arg0);
		static void closeQuietly(__jni_impl::__JniBaseClass arg0);
		static jlong copy(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::io::FileDescriptor arg1);
		static jlong copy(__jni_impl::java::io::InputStream arg0, __jni_impl::java::io::OutputStream arg1);
		static jlong copy(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4);
		static jlong copy(__jni_impl::java::io::InputStream arg0, __jni_impl::java::io::OutputStream arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4);
	};
} // namespace __jni_impl::android::os

#include "./CancellationSignal.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void FileUtils::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.FileUtils",
			"(V)V");
	}
	
	// Methods
	void FileUtils::closeQuietly(__jni_impl::java::io::FileDescriptor arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.FileUtils",
			"closeQuietly",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void FileUtils::closeQuietly(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.FileUtils",
			"closeQuietly",
			"(Ljava/lang/AutoCloseable;)V",
			arg0.__jniObject().object()
		);
	}
	jlong FileUtils::copy(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::io::FileDescriptor arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.FileUtils",
			"copy",
			"(Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jlong FileUtils::copy(__jni_impl::java::io::InputStream arg0, __jni_impl::java::io::OutputStream arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.FileUtils",
			"copy",
			"(Ljava/io/InputStream;Ljava/io/OutputStream;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jlong FileUtils::copy(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.FileUtils",
			"copy",
			"(Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Landroid/os/FileUtils$ProgressListener;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	jlong FileUtils::copy(__jni_impl::java::io::InputStream arg0, __jni_impl::java::io::OutputStream arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.FileUtils",
			"copy",
			"(Ljava/io/InputStream;Ljava/io/OutputStream;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Landroid/os/FileUtils$ProgressListener;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class FileUtils : public __jni_impl::android::os::FileUtils
	{
	public:
		FileUtils(QAndroidJniObject obj) { __thiz = obj; }
		FileUtils()
		{
			__constructor();
		}
	};
} // namespace android::os

