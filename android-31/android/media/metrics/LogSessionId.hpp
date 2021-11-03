#pragma once

#include "../../../JObject.hpp"


namespace android::media::metrics
{
	class LogSessionId : public JObject
	{
	public:
		// Fields
		static android::media::metrics::LogSessionId LOG_SESSION_ID_NONE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LogSessionId(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LogSessionId(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getStringId();
		jint hashCode();
		jstring toString();
	};
} // namespace android::media::metrics

