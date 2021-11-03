#include "../../../JString.hpp"
#include "./AsynchronousFileChannel.hpp"
#include "./FileChannel.hpp"
#include "./FileLock.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	FileLock::FileLock(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject FileLock::acquiredBy()
	{
		return callObjectMethod(
			"acquiredBy",
			"()Ljava/nio/channels/Channel;"
		);
	}
	java::nio::channels::FileChannel FileLock::channel()
	{
		return callObjectMethod(
			"channel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	void FileLock::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean FileLock::isShared()
	{
		return callMethod<jboolean>(
			"isShared",
			"()Z"
		);
	}
	jboolean FileLock::isValid()
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	jboolean FileLock::overlaps(jlong arg0, jlong arg1)
	{
		return callMethod<jboolean>(
			"overlaps",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jlong FileLock::position()
	{
		return callMethod<jlong>(
			"position",
			"()J"
		);
	}
	void FileLock::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	jlong FileLock::size()
	{
		return callMethod<jlong>(
			"size",
			"()J"
		);
	}
	JString FileLock::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::channels

