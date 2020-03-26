#pragma once

#ifndef JAVA_NIO_CHANNELS_FILELOCK
#define JAVA_NIO_CHANNELS_FILELOCK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::channels
{
	class FileChannel;
}
namespace __jni_impl::java::nio::channels
{
	class AsynchronousFileChannel;
}

namespace __jni_impl::java::nio::channels
{
	class FileLock : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jlong size();
		jlong position();
		void close();
		void release();
		QAndroidJniObject channel();
		jboolean isShared();
		jboolean isValid();
		QAndroidJniObject acquiredBy();
		jboolean overlaps(jlong arg0, jlong arg1);
	};
} // namespace __jni_impl::java::nio::channels

#include "FileChannel.hpp"
#include "AsynchronousFileChannel.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void FileLock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.FileLock",
			"(V)V");
	}
	
	// Methods
	jstring FileLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong FileLock::size()
	{
		return __thiz.callMethod<jlong>(
			"size",
			"()J"
		);
	}
	jlong FileLock::position()
	{
		return __thiz.callMethod<jlong>(
			"position",
			"()J"
		);
	}
	void FileLock::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void FileLock::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	QAndroidJniObject FileLock::channel()
	{
		return __thiz.callObjectMethod(
			"channel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	jboolean FileLock::isShared()
	{
		return __thiz.callMethod<jboolean>(
			"isShared",
			"()Z"
		);
	}
	jboolean FileLock::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	QAndroidJniObject FileLock::acquiredBy()
	{
		return __thiz.callObjectMethod(
			"acquiredBy",
			"()Ljava/nio/channels/Channel;"
		);
	}
	jboolean FileLock::overlaps(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"overlaps",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class FileLock : public __jni_impl::java::nio::channels::FileLock
	{
	public:
		FileLock(QAndroidJniObject obj) { __thiz = obj; }
		FileLock()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_FILELOCK

