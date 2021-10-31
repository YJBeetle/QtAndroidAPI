#include "../../java/io/FileDescriptor.hpp"
#include "./MessageQueue.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	MessageQueue::MessageQueue(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void MessageQueue::addIdleHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"addIdleHandler",
			"(Landroid/os/MessageQueue$IdleHandler;)V",
			arg0.object()
		);
	}
	void MessageQueue::addOnFileDescriptorEventListener(java::io::FileDescriptor arg0, jint arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"addOnFileDescriptorEventListener",
			"(Ljava/io/FileDescriptor;ILandroid/os/MessageQueue$OnFileDescriptorEventListener;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jboolean MessageQueue::isIdle()
	{
		return callMethod<jboolean>(
			"isIdle",
			"()Z"
		);
	}
	void MessageQueue::removeIdleHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeIdleHandler",
			"(Landroid/os/MessageQueue$IdleHandler;)V",
			arg0.object()
		);
	}
	void MessageQueue::removeOnFileDescriptorEventListener(java::io::FileDescriptor arg0)
	{
		callMethod<void>(
			"removeOnFileDescriptorEventListener",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
} // namespace android::os

