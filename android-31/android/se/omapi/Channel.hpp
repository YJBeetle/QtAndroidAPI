#pragma once

#include "../../../JByteArray.hpp"
#include "./Session.def.hpp"
#include "./Channel.def.hpp"

namespace android::se::omapi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void Channel::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JByteArray Channel::getSelectResponse() const
	{
		return callObjectMethod(
			"getSelectResponse",
			"()[B"
		);
	}
	inline android::se::omapi::Session Channel::getSession() const
	{
		return callObjectMethod(
			"getSession",
			"()Landroid/se/omapi/Session;"
		);
	}
	inline jboolean Channel::isBasicChannel() const
	{
		return callMethod<jboolean>(
			"isBasicChannel",
			"()Z"
		);
	}
	inline jboolean Channel::isOpen() const
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	inline jboolean Channel::selectNext() const
	{
		return callMethod<jboolean>(
			"selectNext",
			"()Z"
		);
	}
	inline JByteArray Channel::transmit(JByteArray arg0) const
	{
		return callObjectMethod(
			"transmit",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::se::omapi

// Base class headers

