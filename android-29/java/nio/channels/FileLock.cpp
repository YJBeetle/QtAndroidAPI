#include "./AsynchronousFileChannel.hpp"
#include "./FileChannel.hpp"
#include "./FileLock.hpp"

namespace java::nio::channels
{
	// Fields
	
	FileLock::FileLock(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject FileLock::acquiredBy()
	{
		return __thiz.callObjectMethod(
			"acquiredBy",
			"()Ljava/nio/channels/Channel;"
		);
	}
	QAndroidJniObject FileLock::channel()
	{
		return __thiz.callObjectMethod(
			"channel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	void FileLock::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean FileLock::isShared()
	{
		return __thiz.callMethod<jboolean>(
			"isShared",
			"()Z"
		);
	}
	jboolean FileLock::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	jboolean FileLock::overlaps(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"overlaps",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jlong FileLock::position()
	{
		return __thiz.callMethod<jlong>(
			"position",
			"()J"
		);
	}
	void FileLock::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	jlong FileLock::size()
	{
		return __thiz.callMethod<jlong>(
			"size",
			"()J"
		);
	}
	jstring FileLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::channels

