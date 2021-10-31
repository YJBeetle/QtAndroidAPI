#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class TelephonyScanManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TelephonyScanManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyScanManager(QAndroidJniObject obj);
		
		// Constructors
		TelephonyScanManager();
		
		// Methods
	};
} // namespace android::telephony

