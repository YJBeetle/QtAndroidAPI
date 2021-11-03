#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::mbms
{
	class MbmsErrors_InitializationErrors : public JObject
	{
	public:
		// Fields
		static jint ERROR_APP_PERMISSIONS_NOT_GRANTED();
		static jint ERROR_DUPLICATE_INITIALIZE();
		static jint ERROR_UNABLE_TO_INITIALIZE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MbmsErrors_InitializationErrors(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MbmsErrors_InitializationErrors(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony::mbms

