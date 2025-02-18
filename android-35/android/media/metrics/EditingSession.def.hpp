#pragma once

#include "../../../JObject.hpp"

namespace android::media::metrics
{
	class EditingEndedEvent;
}
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
		
		// QJniObject forward
		template<typename ...Ts> explicit EditingSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EditingSession(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		jboolean equals(JObject arg0) const;
		android::media::metrics::LogSessionId getSessionId() const;
		jint hashCode() const;
		void reportEditingEndedEvent(android::media::metrics::EditingEndedEvent arg0) const;
	};
} // namespace android::media::metrics

