#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class FileDescriptor;
}

namespace android::os
{
	class MessageQueue : public __JniBaseClass
	{
	public:
		// Fields
		
		MessageQueue(QAndroidJniObject obj);
		// Constructors
		MessageQueue() = default;
		
		// Methods
		void addIdleHandler(__JniBaseClass arg0);
		void addOnFileDescriptorEventListener(java::io::FileDescriptor arg0, jint arg1, __JniBaseClass arg2);
		jboolean isIdle();
		void removeIdleHandler(__JniBaseClass arg0);
		void removeOnFileDescriptorEventListener(java::io::FileDescriptor arg0);
	};
} // namespace android::os

