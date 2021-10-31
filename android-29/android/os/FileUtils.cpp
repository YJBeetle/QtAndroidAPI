#include "./CancellationSignal.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./FileUtils.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	FileUtils::FileUtils(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void FileUtils::closeQuietly(java::io::FileDescriptor arg0)
	{
		callStaticMethod<void>(
			"android.os.FileUtils",
			"closeQuietly",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void FileUtils::closeQuietly(__JniBaseClass arg0)
	{
		callStaticMethod<void>(
			"android.os.FileUtils",
			"closeQuietly",
			"(Ljava/lang/AutoCloseable;)V",
			arg0.object()
		);
	}
	jlong FileUtils::copy(java::io::FileDescriptor arg0, java::io::FileDescriptor arg1)
	{
		return callStaticMethod<jlong>(
			"android.os.FileUtils",
			"copy",
			"(Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;)J",
			arg0.object(),
			arg1.object()
		);
	}
	jlong FileUtils::copy(java::io::InputStream arg0, java::io::OutputStream arg1)
	{
		return callStaticMethod<jlong>(
			"android.os.FileUtils",
			"copy",
			"(Ljava/io/InputStream;Ljava/io/OutputStream;)J",
			arg0.object(),
			arg1.object()
		);
	}
	jlong FileUtils::copy(java::io::FileDescriptor arg0, java::io::FileDescriptor arg1, android::os::CancellationSignal arg2, __JniBaseClass arg3, __JniBaseClass arg4)
	{
		return callStaticMethod<jlong>(
			"android.os.FileUtils",
			"copy",
			"(Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Landroid/os/FileUtils$ProgressListener;)J",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	jlong FileUtils::copy(java::io::InputStream arg0, java::io::OutputStream arg1, android::os::CancellationSignal arg2, __JniBaseClass arg3, __JniBaseClass arg4)
	{
		return callStaticMethod<jlong>(
			"android.os.FileUtils",
			"copy",
			"(Ljava/io/InputStream;Ljava/io/OutputStream;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Landroid/os/FileUtils$ProgressListener;)J",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
} // namespace android::os

