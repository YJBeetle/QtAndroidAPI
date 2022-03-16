#pragma once

#include "../../JObject.hpp"

namespace android::util
{
	class EventLogTags_Description;
}
namespace java::io
{
	class BufferedReader;
}
class JString;

namespace android::util
{
	class EventLogTags : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EventLogTags(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventLogTags(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		EventLogTags();
		EventLogTags(java::io::BufferedReader arg0);
		
		// Methods
		android::util::EventLogTags_Description get(jint arg0) const;
		android::util::EventLogTags_Description get(JString arg0) const;
	};
} // namespace android::util

