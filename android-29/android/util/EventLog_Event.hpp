#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class EventLog_Event : public __JniBaseClass
	{
	public:
		// Fields
		
		EventLog_Event(QAndroidJniObject obj);
		// Constructors
		EventLog_Event() = default;
		
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

