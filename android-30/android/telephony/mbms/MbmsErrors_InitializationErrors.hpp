#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::mbms
{
	class MbmsErrors_InitializationErrors : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_APP_PERMISSIONS_NOT_GRANTED();
		static jint ERROR_DUPLICATE_INITIALIZE();
		static jint ERROR_UNABLE_TO_INITIALIZE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MbmsErrors_InitializationErrors(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MbmsErrors_InitializationErrors(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony::mbms

