#include "../ByteBuffer.hpp"
#include "../MappedByteBuffer.hpp"
#include "./FileChannel_MapMode.hpp"
#include "./FileLock.hpp"
#include "./FileChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	FileChannel::FileChannel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject FileChannel::open(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.FileChannel",
			"open",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/nio/channels/FileChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject FileChannel::open(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
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
	QAndroidJniObject FileChannel::map(java::nio::channels::FileChannel_MapMode arg0, jlong arg1, jlong arg2)
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
	jint FileChannel::read(java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jint FileChannel::read(java::nio::ByteBuffer arg0, jlong arg1)
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
	jlong FileChannel::transferFrom(__JniBaseClass arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callMethod<jlong>(
			"transferFrom",
			"(Ljava/nio/channels/ReadableByteChannel;JJ)J",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jlong FileChannel::transferTo(jlong arg0, jlong arg1, __JniBaseClass arg2)
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
	jint FileChannel::write(java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jint FileChannel::write(java::nio::ByteBuffer arg0, jlong arg1)
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
} // namespace java::nio::channels

