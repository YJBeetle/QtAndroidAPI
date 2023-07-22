#pragma once

#include "./ImsRegistrationImplBase.def.hpp"

namespace android::telephony::ims::stub
{
	// Fields
	inline jint ImsRegistrationImplBase::REGISTRATION_TECH_CROSS_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.ims.stub.ImsRegistrationImplBase",
			"REGISTRATION_TECH_CROSS_SIM"
		);
	}
	inline jint ImsRegistrationImplBase::REGISTRATION_TECH_IWLAN()
	{
		return getStaticField<jint>(
			"android.telephony.ims.stub.ImsRegistrationImplBase",
			"REGISTRATION_TECH_IWLAN"
		);
	}
	inline jint ImsRegistrationImplBase::REGISTRATION_TECH_LTE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.stub.ImsRegistrationImplBase",
			"REGISTRATION_TECH_LTE"
		);
	}
	inline jint ImsRegistrationImplBase::REGISTRATION_TECH_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.stub.ImsRegistrationImplBase",
			"REGISTRATION_TECH_NONE"
		);
	}
	inline jint ImsRegistrationImplBase::REGISTRATION_TECH_NR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.stub.ImsRegistrationImplBase",
			"REGISTRATION_TECH_NR"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony::ims::stub

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::ims::stub;
#endif
