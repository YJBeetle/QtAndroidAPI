#pragma once

#include "../../../JObject.hpp"

namespace android::media::metrics
{
	class LogSessionId;
}
class JObject;

namespace android::media::metrics
{
	class RecordingSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RecordingSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RecordingSession(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jboolean equals(JObject arg0);
		android::media::metrics::LogSessionId getSessionId();
		jint hashCode();
	};
} // namespace android::media::metrics

