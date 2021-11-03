#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::media::metrics
{
	class LogSessionId : public JObject
	{
	public:
		// Fields
		static android::media::metrics::LogSessionId LOG_SESSION_ID_NONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit LogSessionId(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LogSessionId(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JString getStringId();
		jint hashCode();
		JString toString();
	};
} // namespace android::media::metrics

