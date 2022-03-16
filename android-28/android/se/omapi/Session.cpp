#include "../../../JByteArray.hpp"
#include "./Channel.hpp"
#include "./Reader.hpp"
#include "./Session.hpp"

namespace android::se::omapi
{
	// Fields
	
	// Constructors
	
	// Methods
	void Session::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Session::closeChannels() const
	{
		callMethod<void>(
			"closeChannels",
			"()V"
		);
	}
	JByteArray Session::getATR() const
	{
		return callObjectMethod(
			"getATR",
			"()[B"
		);
	}
	android::se::omapi::Reader Session::getReader() const
	{
		return callObjectMethod(
			"getReader",
			"()Landroid/se/omapi/Reader;"
		);
	}
	jboolean Session::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	android::se::omapi::Channel Session::openBasicChannel(JByteArray arg0) const
	{
		return callObjectMethod(
			"openBasicChannel",
			"([B)Landroid/se/omapi/Channel;",
			arg0.object<jbyteArray>()
		);
	}
	android::se::omapi::Channel Session::openBasicChannel(JByteArray arg0, jbyte arg1) const
	{
		return callObjectMethod(
			"openBasicChannel",
			"([BB)Landroid/se/omapi/Channel;",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	android::se::omapi::Channel Session::openLogicalChannel(JByteArray arg0) const
	{
		return callObjectMethod(
			"openLogicalChannel",
			"([B)Landroid/se/omapi/Channel;",
			arg0.object<jbyteArray>()
		);
	}
	android::se::omapi::Channel Session::openLogicalChannel(JByteArray arg0, jbyte arg1) const
	{
		return callObjectMethod(
			"openLogicalChannel",
			"([BB)Landroid/se/omapi/Channel;",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
} // namespace android::se::omapi

