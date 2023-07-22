#pragma once

#include "../../../../JObject.hpp"

namespace android::telephony::ims::stub
{
	class ImsRegistrationImplBase : public JObject
	{
	public:
		// Fields
		static jint REGISTRATION_TECH_CROSS_SIM();
		static jint REGISTRATION_TECH_IWLAN();
		static jint REGISTRATION_TECH_LTE();
		static jint REGISTRATION_TECH_NONE();
		static jint REGISTRATION_TECH_NR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImsRegistrationImplBase(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImsRegistrationImplBase(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony::ims::stub

