#include "./AsynchronousFileChannel.hpp"
#include "./FileChannel.hpp"
#include "./FileLock.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	FileLock::FileLock(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject FileLock::acquiredBy()
	{
		return callObjectMethod(
			"acquiredBy",
			"()Ljava/nio/channels/Channel;"
		);
	}
	QAndroidJniObject FileLock::channel()
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
	jstring FileLock::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::channels

