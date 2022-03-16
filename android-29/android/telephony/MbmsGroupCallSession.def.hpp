#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::telephony::mbms
{
	class GroupCall;
}

namespace android::telephony
{
	class MbmsGroupCallSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MbmsGroupCallSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MbmsGroupCallSession(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::telephony::MbmsGroupCallSession create(android::content::Context arg0, JObject arg1, JObject arg2);
		static android::telephony::MbmsGroupCallSession create(android::content::Context arg0, jint arg1, JObject arg2, JObject arg3);
		void close() const;
		android::telephony::mbms::GroupCall startGroupCall(jlong arg0, JObject arg1, JObject arg2, JObject arg3, JObject arg4) const;
	};
} // namespace android::telephony

