#include "../../../JString.hpp"
#include "./AsynchronousFileChannel.hpp"
#include "./FileChannel.hpp"
#include "./FileLock.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	FileLock::FileLock(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject FileLock::acquiredBy() const
	{
		return callObjectMethod(
			"acquiredBy",
			"()Ljava/nio/channels/Channel;"
		);
	}
	java::nio::channels::FileChannel FileLock::channel() const
	{
		return callObjectMethod(
			"channel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	void FileLock::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean FileLock::isShared() const
	{
		return callMethod<jboolean>(
			"isShared",
			"()Z"
		);
	}
	jboolean FileLock::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	jboolean FileLock::overlaps(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"overlaps",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jlong FileLock::position() const
	{
		return callMethod<jlong>(
			"position",
			"()J"
		);
	}
	void FileLock::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	jlong FileLock::size() const
	{
		return callMethod<jlong>(
			"size",
			"()J"
		);
	}
	JString FileLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::channels

