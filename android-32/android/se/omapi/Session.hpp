#pragma once

#include "../../../JByteArray.hpp"
#include "./Channel.def.hpp"
#include "./Reader.def.hpp"
#include "./Session.def.hpp"

namespace android::se::omapi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void Session::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void Session::closeChannels() const
	{
		callMethod<void>(
			"closeChannels",
			"()V"
		);
	}
	inline JByteArray Session::getATR() const
	{
		return callObjectMethod(
			"getATR",
			"()[B"
		);
	}
	inline android::se::omapi::Reader Session::getReader() const
	{
		return callObjectMethod(
			"getReader",
			"()Landroid/se/omapi/Reader;"
		);
	}
	inline jboolean Session::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	inline android::se::omapi::Channel Session::openBasicChannel(JByteArray arg0) const
	{
		return callObjectMethod(
			"openBasicChannel",
			"([B)Landroid/se/omapi/Channel;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::se::omapi::Channel Session::openBasicChannel(JByteArray arg0, jbyte arg1) const
	{
		return callObjectMethod(
			"openBasicChannel",
			"([BB)Landroid/se/omapi/Channel;",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	inline android::se::omapi::Channel Session::openLogicalChannel(JByteArray arg0) const
	{
		return callObjectMethod(
			"openLogicalChannel",
			"([B)Landroid/se/omapi/Channel;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::se::omapi::Channel Session::openLogicalChannel(JByteArray arg0, jbyte arg1) const
	{
		return callObjectMethod(
			"openLogicalChannel",
			"([BB)Landroid/se/omapi/Channel;",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
} // namespace android::se::omapi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::se::omapi;
#endif
