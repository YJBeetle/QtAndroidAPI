#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::util
{
	class EventLog_Event : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EventLog_Event(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventLog_Event(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JObject getData();
		jint getProcessId();
		jint getTag();
		jint getThreadId();
		jlong getTimeNanos();
		jint hashCode();
	};
} // namespace android::util

