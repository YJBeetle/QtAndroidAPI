#pragma once

#ifndef JAVA_NIO_CHANNELS_FILECHANNEL
#define JAVA_NIO_CHANNELS_FILECHANNEL

#include "../../../__JniBaseClass.hpp"
#include "spi/AbstractInterruptibleChannel.hpp"

namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::nio
{
	class MappedByteBuffer;
}
namespace __jni_impl::java::nio::channels
{
	class FileChannel_MapMode;
}
namespace __jni_impl::java::nio::channels
{
	class FileLock;
}

namespace __jni_impl::java::nio::channels
{
	class FileChannel : public __jni_impl::java::nio::channels::spi::AbstractInterruptibleChannel
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject open(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject open(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2);
		void force(jboolean arg0);
		QAndroidJniObject lock();
		QAndroidJniObject lock(jlong arg0, jlong arg1, jboolean arg2);
		QAndroidJniObject map(__jni_impl::java::nio::channels::FileChannel_MapMode arg0, jlong arg1, jlong arg2);
		QAndroidJniObject position(jlong arg0);
		jlong position();
		jint read(__jni_impl::java::nio::ByteBuffer arg0);
		jint read(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1);
		jlong read(jarray arg0);
		jlong read(jarray arg0, jint arg1, jint arg2);
		jlong size();
		jlong transferFrom(__jni_impl::__JniBaseClass arg0, jlong arg1, jlong arg2);
		jlong transferTo(jlong arg0, jlong arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject truncate(jlong arg0);
		QAndroidJniObject tryLock();
		QAndroidJniObject tryLock(jlong arg0, jlong arg1, jboolean arg2);
		jint write(__jni_impl::java::nio::ByteBuffer arg0);
		jint write(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1);
		jlong write(jarray arg0);
		jlong write(jarray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::java::nio::channels

#include "../ByteBuffer.hpp"
#include "../MappedByteBuffer.hpp"
#include "FileChannel_MapMode.hpp"
#include "FileLock.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void FileChannel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.FileChannel",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FileChannel::open(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.FileChannel",
			"open",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/nio/channels/FileChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject FileChannel::open(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.FileChannel",
			"open",
			"(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void FileChannel::force(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"force",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject FileChannel::lock()
	{
		return __thiz.callObjectMethod(
			"lock",
			"()Ljava/nio/channels/FileLock;"
		);
	}
	QAndroidJniObject FileChannel::lock(jlong arg0, jlong arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"lock",
			"(JJZ)Ljava/nio/channels/FileLock;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject FileChannel::map(__jni_impl::java::nio::channels::FileChannel_MapMode arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"map",
			"(Ljava/nio/channels/FileChannel$MapMode;JJ)Ljava/nio/MappedByteBuffer;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject FileChannel::position(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(J)Ljava/nio/channels/FileChannel;",
			arg0
		);
	}
	jlong FileChannel::position()
	{
		return __thiz.callMethod<jlong>(
			"position",
			"()J"
		);
	}
	jint FileChannel::read(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jint FileChannel::read(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1)
	{
		return __thiz.callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;J)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong FileChannel::read(jarray arg0)
	{
		return __thiz.callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;)J",
			arg0
		);
	}
	jlong FileChannel::read(jarray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0,
			arg1,
			arg2
		);
	}
	jlong FileChannel::size()
	{
		return __thiz.callMethod<jlong>(
			"size",
			"()J"
		);
	}
	jlong FileChannel::transferFrom(__jni_impl::__JniBaseClass arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callMethod<jlong>(
			"transferFrom",
			"(Ljava/nio/channels/ReadableByteChannel;JJ)J",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jlong FileChannel::transferTo(jlong arg0, jlong arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jlong>(
			"transferTo",
			"(JJLjava/nio/channels/WritableByteChannel;)J",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject FileChannel::truncate(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"truncate",
			"(J)Ljava/nio/channels/FileChannel;",
			arg0
		);
	}
	QAndroidJniObject FileChannel::tryLock()
	{
		return __thiz.callObjectMethod(
			"tryLock",
			"()Ljava/nio/channels/FileLock;"
		);
	}
	QAndroidJniObject FileChannel::tryLock(jlong arg0, jlong arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"tryLock",
			"(JJZ)Ljava/nio/channels/FileLock;",
			arg0,
			arg1,
			arg2
		);
	}
	jint FileChannel::write(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jint FileChannel::write(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1)
	{
		return __thiz.callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;J)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong FileChannel::write(jarray arg0)
	{
		return __thiz.callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;)J",
			arg0
		);
	}
	jlong FileChannel::write(jarray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class FileChannel : public __jni_impl::java::nio::channels::FileChannel
	{
	public:
		FileChannel(QAndroidJniObject obj) { __thiz = obj; }
		FileChannel()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_FILECHANNEL

