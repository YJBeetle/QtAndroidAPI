#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::metrics
{
	class LogSessionId;
}

namespace android::media::metrics
{
	class RecordingSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RecordingSession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RecordingSession(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jboolean equals(jobject arg0);
		android::media::metrics::LogSessionId getSessionId();
		jint hashCode();
	};
} // namespace android::media::metrics

