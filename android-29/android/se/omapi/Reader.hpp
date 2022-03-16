#pragma once

#include "./SEService.def.hpp"
#include "./Session.def.hpp"
#include "../../../JString.hpp"
#include "./Reader.def.hpp"

namespace android::se::omapi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void Reader::closeSessions() const
	{
		callMethod<void>(
			"closeSessions",
			"()V"
		);
	}
	inline JString Reader::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline android::se::omapi::SEService Reader::getSEService() const
	{
		return callObjectMethod(
			"getSEService",
			"()Landroid/se/omapi/SEService;"
		);
	}
	inline jboolean Reader::isSecureElementPresent() const
	{
		return callMethod<jboolean>(
			"isSecureElementPresent",
			"()Z"
		);
	}
	inline android::se::omapi::Session Reader::openSession() const
	{
		return callObjectMethod(
			"openSession",
			"()Landroid/se/omapi/Session;"
		);
	}
} // namespace android::se::omapi

// Base class headers

