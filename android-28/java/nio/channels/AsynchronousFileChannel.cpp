#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../ByteBuffer.hpp"
#include "./FileLock.hpp"
#include "./AsynchronousFileChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	AsynchronousFileChannel::AsynchronousFileChannel(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::channels::AsynchronousFileChannel AsynchronousFileChannel::open(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousFileChannel",
			"open",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/nio/channels/AsynchronousFileChannel;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	java::nio::channels::AsynchronousFileChannel AsynchronousFileChannel::open(JObject arg0, JObject arg1, JObject arg2, JArray arg3)
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousFileChannel",
			"open",
			"(Ljava/nio/file/Path;Ljava/util/Set;Ljava/util/concurrent/ExecutorService;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/AsynchronousFileChannel;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	void AsynchronousFileChannel::force(jboolean arg0)
	{
		callMethod<void>(
			"force",
			"(Z)V",
			arg0
		);
	}
	JObject AsynchronousFileChannel::lock()
	{
		return callObjectMethod(
			"lock",
			"()Ljava/util/concurrent/Future;"
		);
	}
	JObject AsynchronousFileChannel::lock(jlong arg0, jlong arg1, jboolean arg2)
	{
		return callObjectMethod(
			"lock",
			"(JJZ)Ljava/util/concurrent/Future;",
			arg0,
			arg1,
			arg2
		);
	}
	void AsynchronousFileChannel::lock(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"lock",
			"(Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	void AsynchronousFileChannel::lock(jlong arg0, jlong arg1, jboolean arg2, JObject arg3, JObject arg4)
	{
		callMethod<void>(
			"lock",
			"(JJZLjava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jobject>(),
			arg4.object()
		);
	}
	JObject AsynchronousFileChannel::read(java::nio::ByteBuffer arg0, jlong arg1)
	{
		return callObjectMethod(
			"read",
			"(Ljava/nio/ByteBuffer;J)Ljava/util/concurrent/Future;",
			arg0.object(),
			arg1
		);
	}
	void AsynchronousFileChannel::read(java::nio::ByteBuffer arg0, jlong arg1, JObject arg2, JObject arg3)
	{
		callMethod<void>(
			"read",
			"(Ljava/nio/ByteBuffer;JLjava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object(),
			arg1,
			arg2.object<jobject>(),
			arg3.object()
		);
	}
	jlong AsynchronousFileChannel::size()
	{
		return callMethod<jlong>(
			"size",
			"()J"
		);
	}
	java::nio::channels::AsynchronousFileChannel AsynchronousFileChannel::truncate(jlong arg0)
	{
		return callObjectMethod(
			"truncate",
			"(J)Ljava/nio/channels/AsynchronousFileChannel;",
			arg0
		);
	}
	java::nio::channels::FileLock AsynchronousFileChannel::tryLock()
	{
		return callObjectMethod(
			"tryLock",
			"()Ljava/nio/channels/FileLock;"
		);
	}
	java::nio::channels::FileLock AsynchronousFileChannel::tryLock(jlong arg0, jlong arg1, jboolean arg2)
	{
		return callObjectMethod(
			"tryLock",
			"(JJZ)Ljava/nio/channels/FileLock;",
			arg0,
			arg1,
			arg2
		);
	}
	JObject AsynchronousFileChannel::write(java::nio::ByteBuffer arg0, jlong arg1)
	{
		return callObjectMethod(
			"write",
			"(Ljava/nio/ByteBuffer;J)Ljava/util/concurrent/Future;",
			arg0.object(),
			arg1
		);
	}
	void AsynchronousFileChannel::write(java::nio::ByteBuffer arg0, jlong arg1, JObject arg2, JObject arg3)
	{
		callMethod<void>(
			"write",
			"(Ljava/nio/ByteBuffer;JLjava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object(),
			arg1,
			arg2.object<jobject>(),
			arg3.object()
		);
	}
} // namespace java::nio::channels

