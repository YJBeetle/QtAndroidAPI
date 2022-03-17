#pragma once

#include "../../../JString.hpp"
#include "./AsynchronousFileChannel.def.hpp"
#include "./FileChannel.def.hpp"
#include "./FileLock.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject FileLock::acquiredBy() const
	{
		return callObjectMethod(
			"acquiredBy",
			"()Ljava/nio/channels/Channel;"
		);
	}
	inline java::nio::channels::FileChannel FileLock::channel() const
	{
		return callObjectMethod(
			"channel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	inline void FileLock::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean FileLock::isShared() const
	{
		return callMethod<jboolean>(
			"isShared",
			"()Z"
		);
	}
	inline jboolean FileLock::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	inline jboolean FileLock::overlaps(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"overlaps",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	inline jlong FileLock::position() const
	{
		return callMethod<jlong>(
			"position",
			"()J"
		);
	}
	inline void FileLock::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline jlong FileLock::size() const
	{
		return callMethod<jlong>(
			"size",
			"()J"
		);
	}
	inline JString FileLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::channels

// Base class headers

