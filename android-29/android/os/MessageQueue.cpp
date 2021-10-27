#include "../../java/io/FileDescriptor.hpp"
#include "./MessageQueue.hpp"

namespace android::os
{
	// Fields
	
	MessageQueue::MessageQueue(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void MessageQueue::addIdleHandler(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addIdleHandler",
			"(Landroid/os/MessageQueue$IdleHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void MessageQueue::addOnFileDescriptorEventListener(java::io::FileDescriptor arg0, jint arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"addOnFileDescriptorEventListener",
			"(Ljava/io/FileDescriptor;ILandroid/os/MessageQueue$OnFileDescriptorEventListener;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean MessageQueue::isIdle()
	{
		return __thiz.callMethod<jboolean>(
			"isIdle",
			"()Z"
		);
	}
	void MessageQueue::removeIdleHandler(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeIdleHandler",
			"(Landroid/os/MessageQueue$IdleHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void MessageQueue::removeOnFileDescriptorEventListener(java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"removeOnFileDescriptorEventListener",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::os

