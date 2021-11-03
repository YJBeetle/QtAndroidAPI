#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JObject;

namespace android::util
{
	class EventLog_Event : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EventLog_Event(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventLog_Event(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getData() const;
		jint getProcessId() const;
		jint getTag() const;
		jint getThreadId() const;
		jlong getTimeNanos() const;
		jint hashCode() const;
	};
} // namespace android::util

