#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class EventLog_Event : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EventLog_Event(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EventLog_Event(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jobject getData();
		jint getProcessId();
		jint getTag();
		jint getThreadId();
		jlong getTimeNanos();
		jint hashCode();
	};
} // namespace android::util

