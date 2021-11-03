#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::telephony
{
	class TelephonyManager_NetworkSlicingException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TelephonyManager_NetworkSlicingException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyManager_NetworkSlicingException(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
	};
} // namespace android::telephony

