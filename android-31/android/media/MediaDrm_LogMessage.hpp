#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::media
{
	class MediaDrm_LogMessage : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDrm_LogMessage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_LogMessage(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString getMessage();
		jint getPriority();
		jlong getTimestampMillis();
		JString toString();
	};
} // namespace android::media

