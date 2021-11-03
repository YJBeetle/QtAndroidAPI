#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::util
{
	class EventLogTags_Description : public JObject
	{
	public:
		// Fields
		JString mName();
		jint mTag();
		
		// QJniObject forward
		template<typename ...Ts> explicit EventLogTags_Description(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventLogTags_Description(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::util

