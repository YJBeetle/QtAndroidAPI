#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../ByteBuffer.def.hpp"
#include "./FileLock.def.hpp"
#include "./AsynchronousFileChannel.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::channels::AsynchronousFileChannel AsynchronousFileChannel::open(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousFileChannel",
			"open",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/nio/channels/AsynchronousFileChannel;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline java::nio::channels::AsynchronousFileChannel AsynchronousFileChannel::open(JObject arg0, JObject arg1, JObject arg2, JArray arg3)
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
	inline void AsynchronousFileChannel::force(jboolean arg0) const
	{
		callMethod<void>(
			"force",
			"(Z)V",
			arg0
		);
	}
	inline JObject AsynchronousFileChannel::lock() const
	{
		return callObjectMethod(
			"lock",
			"()Ljava/util/concurrent/Future;"
		);
	}
	inline JObject AsynchronousFileChannel::lock(jlong arg0, jlong arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"lock",
			"(JJZ)Ljava/util/concurrent/Future;",
			arg0,
			arg1,
			arg2
		);
	}
	inline void AsynchronousFileChannel::lock(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"lock",
			"(Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline void AsynchronousFileChannel::lock(jlong arg0, jlong arg1, jboolean arg2, JObject arg3, JObject arg4) const
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
	inline JObject AsynchronousFileChannel::read(java::nio::ByteBuffer arg0, jlong arg1) const
	{
		return callObjectMethod(
			"read",
			"(Ljava/nio/ByteBuffer;J)Ljava/util/concurrent/Future;",
			arg0.object(),
			arg1
		);
	}
	inline void AsynchronousFileChannel::read(java::nio::ByteBuffer arg0, jlong arg1, JObject arg2, JObject arg3) const
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
	inline jlong AsynchronousFileChannel::size() const
	{
		return callMethod<jlong>(
			"size",
			"()J"
		);
	}
	inline java::nio::channels::AsynchronousFileChannel AsynchronousFileChannel::truncate(jlong arg0) const
	{
		return callObjectMethod(
			"truncate",
			"(J)Ljava/nio/channels/AsynchronousFileChannel;",
			arg0
		);
	}
	inline java::nio::channels::FileLock AsynchronousFileChannel::tryLock() const
	{
		return callObjectMethod(
			"tryLock",
			"()Ljava/nio/channels/FileLock;"
		);
	}
	inline java::nio::channels::FileLock AsynchronousFileChannel::tryLock(jlong arg0, jlong arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"tryLock",
			"(JJZ)Ljava/nio/channels/FileLock;",
			arg0,
			arg1,
			arg2
		);
	}
	inline JObject AsynchronousFileChannel::write(java::nio::ByteBuffer arg0, jlong arg1) const
	{
		return callObjectMethod(
			"write",
			"(Ljava/nio/ByteBuffer;J)Ljava/util/concurrent/Future;",
			arg0.object(),
			arg1
		);
	}
	inline void AsynchronousFileChannel::write(java::nio::ByteBuffer arg0, jlong arg1, JObject arg2, JObject arg3) const
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

// Base class headers

