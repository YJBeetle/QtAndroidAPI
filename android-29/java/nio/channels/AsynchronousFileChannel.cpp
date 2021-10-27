#include "../ByteBuffer.hpp"
#include "./FileLock.hpp"
#include "./AsynchronousFileChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	AsynchronousFileChannel::AsynchronousFileChannel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AsynchronousFileChannel::open(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousFileChannel",
			"open",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/nio/channels/AsynchronousFileChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AsynchronousFileChannel::open(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousFileChannel",
			"open",
			"(Ljava/nio/file/Path;Ljava/util/Set;Ljava/util/concurrent/ExecutorService;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/AsynchronousFileChannel;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void AsynchronousFileChannel::force(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"force",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject AsynchronousFileChannel::lock()
	{
		return __thiz.callObjectMethod(
			"lock",
			"()Ljava/util/concurrent/Future;"
		);
	}
	QAndroidJniObject AsynchronousFileChannel::lock(jlong arg0, jlong arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"lock",
			"(JJZ)Ljava/util/concurrent/Future;",
			arg0,
			arg1,
			arg2
		);
	}
	void AsynchronousFileChannel::lock(jobject arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"lock",
			"(Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AsynchronousFileChannel::lock(jlong arg0, jlong arg1, jboolean arg2, jobject arg3, __JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"lock",
			"(JJZLjava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousFileChannel::read(java::nio::ByteBuffer arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"read",
			"(Ljava/nio/ByteBuffer;J)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AsynchronousFileChannel::read(java::nio::ByteBuffer arg0, jlong arg1, jobject arg2, __JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"read",
			"(Ljava/nio/ByteBuffer;JLjava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	jlong AsynchronousFileChannel::size()
	{
		return __thiz.callMethod<jlong>(
			"size",
			"()J"
		);
	}
	QAndroidJniObject AsynchronousFileChannel::truncate(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"truncate",
			"(J)Ljava/nio/channels/AsynchronousFileChannel;",
			arg0
		);
	}
	QAndroidJniObject AsynchronousFileChannel::tryLock()
	{
		return __thiz.callObjectMethod(
			"tryLock",
			"()Ljava/nio/channels/FileLock;"
		);
	}
	QAndroidJniObject AsynchronousFileChannel::tryLock(jlong arg0, jlong arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"tryLock",
			"(JJZ)Ljava/nio/channels/FileLock;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject AsynchronousFileChannel::write(java::nio::ByteBuffer arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"write",
			"(Ljava/nio/ByteBuffer;J)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AsynchronousFileChannel::write(java::nio::ByteBuffer arg0, jlong arg1, jobject arg2, __JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/nio/ByteBuffer;JLjava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
} // namespace java::nio::channels

