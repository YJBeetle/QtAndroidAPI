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
		MessageQueue(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void addIdleHandler(JObject arg0) const;
		void addOnFileDescriptorEventListener(java::io::FileDescriptor arg0, jint arg1, JObject arg2) const;
		jboolean isIdle() const;
		void removeIdleHandler(JObject arg0) const;
		void removeOnFileDescriptorEventListener(java::io::FileDescriptor arg0) const;
	};
} // namespace android::os

