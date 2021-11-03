#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class FileDescriptor;
}

namespace android::os
{
	class MessageQueue : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessageQueue(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MessageQueue(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addIdleHandler(JObject arg0);
		void addOnFileDescriptorEventListener(java::io::FileDescriptor arg0, jint arg1, JObject arg2);
		jboolean isIdle();
		void removeIdleHandler(JObject arg0);
		void removeOnFileDescriptorEventListener(java::io::FileDescriptor arg0);
	};
} // namespace android::os

