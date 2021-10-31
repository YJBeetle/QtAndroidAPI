#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::metrics
{
	class LogSessionId : public __JniBaseClass
	{
	public:
		// Fields
		static android::media::metrics::LogSessionId LOG_SESSION_ID_NONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit LogSessionId(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LogSessionId(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getStringId();
		jint hashCode();
		jstring toString();
	};
} // namespace android::media::metrics

