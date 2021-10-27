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
		
		MbmsGroupCallSession(QAndroidJniObject obj);
		// Constructors
		MbmsGroupCallSession() = default;
		
		// Methods
		static QAndroidJniObject create(android::content::Context arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static QAndroidJniObject create(android::content::Context arg0, jint arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		void close();
		QAndroidJniObject startGroupCall(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2, __JniBaseClass arg3, __JniBaseClass arg4);
	};
} // namespace android::telephony

