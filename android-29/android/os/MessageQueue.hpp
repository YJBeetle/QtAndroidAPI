#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}

namespace __jni_impl::android::os
{
	class MessageQueue : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void addIdleHandler(__jni_impl::__JniBaseClass arg0);
		void addOnFileDescriptorEventListener(__jni_impl::java::io::FileDescriptor arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		jboolean isIdle();
		void removeIdleHandler(__jni_impl::__JniBaseClass arg0);
		void removeOnFileDescriptorEventListener(__jni_impl::java::io::FileDescriptor arg0);
	};
} // namespace __jni_impl::android::os

#include "../../java/io/FileDescriptor.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void MessageQueue::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.MessageQueue",
			"(V)V");
	}
	
	// Methods
	void MessageQueue::addIdleHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addIdleHandler",
			"(Landroid/os/MessageQueue$IdleHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void MessageQueue::addOnFileDescriptorEventListener(__jni_impl::java::io::FileDescriptor arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
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
	void MessageQueue::removeIdleHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeIdleHandler",
			"(Landroid/os/MessageQueue$IdleHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void MessageQueue::removeOnFileDescriptorEventListener(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"removeOnFileDescriptorEventListener",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class MessageQueue : public __jni_impl::android::os::MessageQueue
	{
	public:
		MessageQueue(QAndroidJniObject obj) { __thiz = obj; }
		MessageQueue()
		{
			__constructor();
		}
	};
} // namespace android::os

