#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::nio::channels
{
	class FileLock;
}

namespace __jni_impl::java::nio::channels
{
	class AsynchronousFileChannel : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject open(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject open(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, jarray arg3);
		void force(jboolean arg0);
		QAndroidJniObject lock();
		QAndroidJniObject lock(jlong arg0, jlong arg1, jboolean arg2);
		void lock(jobject arg0, __jni_impl::__JniBaseClass arg1);
		void lock(jlong arg0, jlong arg1, jboolean arg2, jobject arg3, __jni_impl::__JniBaseClass arg4);
		QAndroidJniObject read(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1);
		void read(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1, jobject arg2, __jni_impl::__JniBaseClass arg3);
		jlong size();
		QAndroidJniObject truncate(jlong arg0);
		QAndroidJniObject tryLock();
		QAndroidJniObject tryLock(jlong arg0, jlong arg1, jboolean arg2);
		QAndroidJniObject write(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1);
		void write(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1, jobject arg2, __jni_impl::__JniBaseClass arg3);
	};
} // namespace __jni_impl::java::nio::channels

#include "../ByteBuffer.hpp"
#include "./FileLock.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void AsynchronousFileChannel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.AsynchronousFileChannel",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AsynchronousFileChannel::open(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousFileChannel",
			"open",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/nio/channels/AsynchronousFileChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AsynchronousFileChannel::open(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, jarray arg3)
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
	void AsynchronousFileChannel::lock(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"lock",
			"(Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AsynchronousFileChannel::lock(jlong arg0, jlong arg1, jboolean arg2, jobject arg3, __jni_impl::__JniBaseClass arg4)
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
	QAndroidJniObject AsynchronousFileChannel::read(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"read",
			"(Ljava/nio/ByteBuffer;J)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AsynchronousFileChannel::read(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1, jobject arg2, __jni_impl::__JniBaseClass arg3)
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
	QAndroidJniObject AsynchronousFileChannel::write(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"write",
			"(Ljava/nio/ByteBuffer;J)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AsynchronousFileChannel::write(__jni_impl::java::nio::ByteBuffer arg0, jlong arg1, jobject arg2, __jni_impl::__JniBaseClass arg3)
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
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class AsynchronousFileChannel : public __jni_impl::java::nio::channels::AsynchronousFileChannel
	{
	public:
		AsynchronousFileChannel(QAndroidJniObject obj) { __thiz = obj; }
		AsynchronousFileChannel()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

