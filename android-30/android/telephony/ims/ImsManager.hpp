#pragma once

#include "./ImsMmTelManager.def.hpp"
#include "./ImsRcsManager.def.hpp"
#include "../../../JString.hpp"
#include "./ImsManager.def.hpp"

namespace android::telephony::ims
{
	// Fields
	inline JString ImsManager::ACTION_WFC_IMS_REGISTRATION_ERROR()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsManager",
			"ACTION_WFC_IMS_REGISTRATION_ERROR",
			"Ljava/lang/String;"
		);
	}
	inline JString ImsManager::EXTRA_WFC_REGISTRATION_FAILURE_MESSAGE()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsManager",
			"EXTRA_WFC_REGISTRATION_FAILURE_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString ImsManager::EXTRA_WFC_REGISTRATION_FAILURE_TITLE()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsManager",
			"EXTRA_WFC_REGISTRATION_FAILURE_TITLE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::telephony::ims::ImsMmTelManager ImsManager::getImsMmTelManager(jint arg0) const
	{
		return callObjectMethod(
			"getImsMmTelManager",
			"(I)Landroid/telephony/ims/ImsMmTelManager;",
			arg0
		);
	}
	inline android::telephony::ims::ImsRcsManager ImsManager::getImsRcsManager(jint arg0) const
	{
		return callObjectMethod(
			"getImsRcsManager",
			"(I)Landroid/telephony/ims/ImsRcsManager;",
			arg0
		);
	}
} // namespace android::telephony::ims

// Base class headers

