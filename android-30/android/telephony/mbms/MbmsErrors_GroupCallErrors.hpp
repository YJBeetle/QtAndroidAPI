#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::mbms
{
	class MbmsErrors_GroupCallErrors : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_DUPLICATE_START_GROUP_CALL();
		static jint ERROR_UNABLE_TO_START_SERVICE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MbmsErrors_GroupCallErrors(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MbmsErrors_GroupCallErrors(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony::mbms

