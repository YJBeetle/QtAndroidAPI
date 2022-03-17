#pragma once

#include "./CancellationSignal.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../java/io/OutputStream.def.hpp"
#include "./FileUtils.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void FileUtils::closeQuietly(java::io::FileDescriptor arg0)
	{
		callStaticMethod<void>(
			"android.os.FileUtils",
			"closeQuietly",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	inline void FileUtils::closeQuietly(JObject arg0)
	{
		callStaticMethod<void>(
			"android.os.FileUtils",
			"closeQuietly",
			"(Ljava/lang/AutoCloseable;)V",
			arg0.object()
		);
	}
	inline jlong FileUtils::copy(java::io::FileDescriptor arg0, java::io::FileDescriptor arg1)
	{
		return callStaticMethod<jlong>(
			"android.os.FileUtils",
			"copy",
			"(Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;)J",
			arg0.object(),
			arg1.object()
		);
	}
	inline jlong FileUtils::copy(java::io::InputStream arg0, java::io::OutputStream arg1)
	{
		return callStaticMethod<jlong>(
			"android.os.FileUtils",
			"copy",
			"(Ljava/io/InputStream;Ljava/io/OutputStream;)J",
			arg0.object(),
			arg1.object()
		);
	}
	inline jlong FileUtils::copy(java::io::FileDescriptor arg0, java::io::FileDescriptor arg1, android::os::CancellationSignal arg2, JObject arg3, JObject arg4)
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
	inline jlong FileUtils::copy(java::io::InputStream arg0, java::io::OutputStream arg1, android::os::CancellationSignal arg2, JObject arg3, JObject arg4)
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

// Base class headers

