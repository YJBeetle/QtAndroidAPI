#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../ByteBuffer.def.hpp"
#include "../MappedByteBuffer.def.hpp"
#include "./FileChannel_MapMode.def.hpp"
#include "./FileLock.def.hpp"
#include "./FileChannel.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::channels::FileChannel FileChannel::open(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.FileChannel",
			"open",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/nio/channels/FileChannel;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline java::nio::channels::FileChannel FileChannel::open(JObject arg0, JObject arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.channels.FileChannel",
			"open",
			"(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	inline void FileChannel::force(jboolean arg0) const
	{
		callMethod<void>(
			"force",
			"(Z)V",
			arg0
		);
	}
	inline java::nio::channels::FileLock FileChannel::lock() const
	{
		return callObjectMethod(
			"lock",
			"()Ljava/nio/channels/FileLock;"
		);
	}
	inline java::nio::channels::FileLock FileChannel::lock(jlong arg0, jlong arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"lock",
			"(JJZ)Ljava/nio/channels/FileLock;",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::nio::MappedByteBuffer FileChannel::map(java::nio::channels::FileChannel_MapMode arg0, jlong arg1, jlong arg2) const
	{
		return callObjectMethod(
			"map",
			"(Ljava/nio/channels/FileChannel$MapMode;JJ)Ljava/nio/MappedByteBuffer;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline java::nio::channels::FileChannel FileChannel::position(jlong arg0) const
	{
		return callObjectMethod(
			"position",
			"(J)Ljava/nio/channels/FileChannel;",
			arg0
		);
	}
	inline jlong FileChannel::position() const
	{
		return callMethod<jlong>(
			"position",
			"()J"
		);
	}
	inline jint FileChannel::read(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	inline jint FileChannel::read(java::nio::ByteBuffer arg0, jlong arg1) const
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;J)I",
			arg0.object(),
			arg1
		);
	}
	inline jlong FileChannel::read(JArray arg0) const
	{
		return callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;)J",
			arg0.object<jarray>()
		);
	}
	inline jlong FileChannel::read(JArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
	inline jlong FileChannel::size() const
	{
		return callMethod<jlong>(
			"size",
			"()J"
		);
	}
	inline jlong FileChannel::transferFrom(JObject arg0, jlong arg1, jlong arg2) const
	{
		return callMethod<jlong>(
			"transferFrom",
			"(Ljava/nio/channels/ReadableByteChannel;JJ)J",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jlong FileChannel::transferTo(jlong arg0, jlong arg1, JObject arg2) const
	{
		return callMethod<jlong>(
			"transferTo",
			"(JJLjava/nio/channels/WritableByteChannel;)J",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline java::nio::channels::FileChannel FileChannel::truncate(jlong arg0) const
	{
		return callObjectMethod(
			"truncate",
			"(J)Ljava/nio/channels/FileChannel;",
			arg0
		);
	}
	inline java::nio::channels::FileLock FileChannel::tryLock() const
	{
		return callObjectMethod(
			"tryLock",
			"()Ljava/nio/channels/FileLock;"
		);
	}
	inline java::nio::channels::FileLock FileChannel::tryLock(jlong arg0, jlong arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"tryLock",
			"(JJZ)Ljava/nio/channels/FileLock;",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint FileChannel::write(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	inline jint FileChannel::write(java::nio::ByteBuffer arg0, jlong arg1) const
	{
		return callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;J)I",
			arg0.object(),
			arg1
		);
	}
	inline jlong FileChannel::write(JArray arg0) const
	{
		return callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;)J",
			arg0.object<jarray>()
		);
	}
	inline jlong FileChannel::write(JArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
} // namespace java::nio::channels

// Base class headers
#include "./spi/AbstractInterruptibleChannel.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels;
#endif
