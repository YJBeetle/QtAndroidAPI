#pragma once

#include "../../../JObject.hpp"

namespace android::media::metrics
{
	class LogSessionId;
}
class JObject;

namespace android::media::metrics
{
	class EditingSession : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EditingSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EditingSession(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		jboolean equals(JObject arg0) const;
		android::media::metrics::LogSessionId getSessionId() const;
		jint hashCode() const;
	};
} // namespace android::media::metrics

