#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class EventLogTags_Description : public JObject
	{
	public:
		// Fields
		jstring mName();
		jint mTag();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EventLogTags_Description(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventLogTags_Description(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::util

