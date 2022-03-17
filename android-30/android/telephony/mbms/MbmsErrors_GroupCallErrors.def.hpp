#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::mbms
{
	class MbmsErrors_GroupCallErrors : public JObject
	{
	public:
		// Fields
		static jint ERROR_DUPLICATE_START_GROUP_CALL();
		static jint ERROR_UNABLE_TO_START_SERVICE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MbmsErrors_GroupCallErrors(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MbmsErrors_GroupCallErrors(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony::mbms

