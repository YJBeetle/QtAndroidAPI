#include "../../java/io/FileDescriptor.hpp"
#include "./MessageQueue.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	MessageQueue::MessageQueue(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void MessageQueue::addIdleHandler(JObject arg0) const
	{
		callMethod<void>(
			"addIdleHandler",
			"(Landroid/os/MessageQueue$IdleHandler;)V",
			arg0.object()
		);
	}
	void MessageQueue::addOnFileDescriptorEventListener(java::io::FileDescriptor arg0, jint arg1, JObject arg2) const
	{
		callMethod<void>(
			"addOnFileDescriptorEventListener",
			"(Ljava/io/FileDescriptor;ILandroid/os/MessageQueue$OnFileDescriptorEventListener;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jboolean MessageQueue::isIdle() const
	{
		return callMethod<jboolean>(
			"isIdle",
			"()Z"
		);
	}
	void MessageQueue::removeIdleHandler(JObject arg0) const
	{
		callMethod<void>(
			"removeIdleHandler",
			"(Landroid/os/MessageQueue$IdleHandler;)V",
			arg0.object()
		);
	}
	void MessageQueue::removeOnFileDescriptorEventListener(java::io::FileDescriptor arg0) const
	{
		callMethod<void>(
			"removeOnFileDescriptorEventListener",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
} // namespace android::os

