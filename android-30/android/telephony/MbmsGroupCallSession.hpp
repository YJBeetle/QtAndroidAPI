#pragma once

#include "../../__JniBaseClass.hpp"

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
	class MbmsGroupCallSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MbmsGroupCallSession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MbmsGroupCallSession(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telephony::MbmsGroupCallSession create(android::content::Context arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static android::telephony::MbmsGroupCallSession create(android::content::Context arg0, jint arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		void close();
		android::telephony::mbms::GroupCall startGroupCall(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2, __JniBaseClass arg3, __JniBaseClass arg4);
	};
} // namespace android::telephony

