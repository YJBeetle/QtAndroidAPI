#include "../ByteBuffer.hpp"
#include "../MappedByteBuffer.hpp"
#include "./FileChannel_MapMode.hpp"
#include "./FileLock.hpp"
#include "./FileChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	FileChannel::FileChannel(QAndroidJniObject obj) : java::nio::channels::spi::AbstractInterruptibleChannel(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::channels::FileChannel FileChannel::open(JObject arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.FileChannel",
			"open",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/nio/channels/FileChannel;",
			arg0.object(),
			arg1
		);
	}
	java::nio::channels::FileChannel FileChannel::open(JObject arg0, JObject arg1, jarray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.channels.FileChannel",
			"open",
			"(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void FileChannel::force(jboolean arg0)
	{
		callMethod<void>(
			"force",
			"(Z)V",
			arg0
		);
	}
	java::nio::channels::FileLock FileChannel::lock()
	{
		return callObjectMethod(
			"lock",
			"()Ljava/nio/channels/FileLock;"
		);
	}
	java::nio::channels::FileLock FileChannel::lock(jlong arg0, jlong arg1, jboolean arg2)
	{
		return callObjectMethod(
			"lock",
			"(JJZ)Ljava/nio/channels/FileLock;",
			arg0,
			arg1,
			arg2
		);
	}
	java::nio::MappedByteBuffer FileChannel::map(java::nio::channels::FileChannel_MapMode arg0, jlong arg1, jlong arg2)
	{
		return callObjectMethod(
			"map",
			"(Ljava/nio/channels/FileChannel$MapMode;JJ)Ljava/nio/MappedByteBuffer;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	java::nio::channels::FileChannel FileChannel::position(jlong arg0)
	{
		return callObjectMethod(
			"position",
			"(J)Ljava/nio/channels/FileChannel;",
			arg0
		);
	}
	jlong FileChannel::position()
	{
		return callMethod<jlong>(
			"position",
			"()J"
		);
	}
	jint FileChannel::read(java::nio::ByteBuffer arg0)
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	jint FileChannel::read(java::nio::ByteBuffer arg0, jlong arg1)
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;J)I",
			arg0.object(),
			arg1
		);
	}
	jlong FileChannel::read(jarray arg0)
	{
		return callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;)J",
			arg0
		);
	}
	jlong FileChannel::read(jarray arg0, jint arg1, jint arg2)
	{
		return callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0,
			arg1,
			arg2
		);
	}
	jlong FileChannel::size()
	{
		return callMethod<jlong>(
			"size",
			"()J"
		);
	}
	jlong FileChannel::transferFrom(JObject arg0, jlong arg1, jlong arg2)
	{
		return callMethod<jlong>(
			"transferFrom",
			"(Ljava/nio/channels/ReadableByteChannel;JJ)J",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jlong FileChannel::transferTo(jlong arg0, jlong arg1, JObject arg2)
	{
		return callMethod<jlong>(
			"transferTo",
			"(JJLjava/nio/channels/WritableByteChannel;)J",
			arg0,
			arg1,
			arg2.object()
		);
	}
	java::nio::channels::FileChannel FileChannel::truncate(jlong arg0)
	{
		return callObjectMethod(
			"truncate",
			"(J)Ljava/nio/channels/FileChannel;",
			arg0
		);
	}
	java::nio::channels::FileLock FileChannel::tryLock()
	{
		return callObjectMethod(
			"tryLock",
			"()Ljava/nio/channels/FileLock;"
		);
	}
	java::nio::channels::FileLock FileChannel::tryLock(jlong arg0, jlong arg1, jboolean arg2)
	{
		return callObjectMethod(
			"tryLock",
			"(JJZ)Ljava/nio/channels/FileLock;",
			arg0,
			arg1,
			arg2
		);
	}
	jint FileChannel::write(java::nio::ByteBuffer arg0)
	{
		return callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	jint FileChannel::write(java::nio::ByteBuffer arg0, jlong arg1)
	{
		return callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;J)I",
			arg0.object(),
			arg1
		);
	}
	jlong FileChannel::write(jarray arg0)
	{
		return callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;)J",
			arg0
		);
	}
	jlong FileChannel::write(jarray arg0, jint arg1, jint arg2)
	{
		return callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::nio::channels

