#include "./CancellationSignal.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./FileUtils.hpp"

namespace android::os
{
	// Fields
	
	FileUtils::FileUtils(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void FileUtils::closeQuietly(java::io::FileDescriptor arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.FileUtils",
			"closeQuietly",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void FileUtils::closeQuietly(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.FileUtils",
			"closeQuietly",
			"(Ljava/lang/AutoCloseable;)V",
			arg0.__jniObject().object()
		);
	}
	jlong FileUtils::copy(java::io::FileDescriptor arg0, java::io::FileDescriptor arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.FileUtils",
			"copy",
			"(Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jlong FileUtils::copy(java::io::InputStream arg0, java::io::OutputStream arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.FileUtils",
			"copy",
			"(Ljava/io/InputStream;Ljava/io/OutputStream;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jlong FileUtils::copy(java::io::FileDescriptor arg0, java::io::FileDescriptor arg1, android::os::CancellationSignal arg2, __JniBaseClass arg3, __JniBaseClass arg4)
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
	jlong FileUtils::copy(java::io::InputStream arg0, java::io::OutputStream arg1, android::os::CancellationSignal arg2, __JniBaseClass arg3, __JniBaseClass arg4)
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
} // namespace android::os

