#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::util
{
	class EventLogTags_Description;
}
namespace java::io
{
	class BufferedReader;
}

namespace android::util
{
	class EventLogTags : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EventLogTags(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EventLogTags(QAndroidJniObject obj);
		
		// Constructors
		EventLogTags();
		EventLogTags(java::io::BufferedReader arg0);
		
		// Methods
		QAndroidJniObject get(jint arg0);
		QAndroidJniObject get(jstring arg0);
	};
} // namespace android::util

