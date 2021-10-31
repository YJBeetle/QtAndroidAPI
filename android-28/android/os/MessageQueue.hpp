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
		
		// QJniObject forward
		template<typename ...Ts> explicit MessageQueue(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MessageQueue(QJniObject obj);
		
		// Constructors
		
		// Methods
		void addIdleHandler(__JniBaseClass arg0);
		void addOnFileDescriptorEventListener(java::io::FileDescriptor arg0, jint arg1, __JniBaseClass arg2);
		jboolean isIdle();
		void removeIdleHandler(__JniBaseClass arg0);
		void removeOnFileDescriptorEventListener(java::io::FileDescriptor arg0);
	};
} // namespace android::os

