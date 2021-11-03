#include "./Channel.hpp"
#include "./Reader.hpp"
#include "./Session.hpp"

namespace android::se::omapi
{
	// Fields
	
	// QJniObject forward
	Session::Session(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Session::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Session::closeChannels()
	{
		callMethod<void>(
			"closeChannels",
			"()V"
		);
	}
	jbyteArray Session::getATR()
	{
		return callObjectMethod(
			"getATR",
			"()[B"
		).object<jbyteArray>();
	}
	android::se::omapi::Reader Session::getReader()
	{
		return callObjectMethod(
			"getReader",
			"()Landroid/se/omapi/Reader;"
		);
	}
	jboolean Session::isClosed()
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	android::se::omapi::Channel Session::openBasicChannel(jbyteArray arg0)
	{
		return callObjectMethod(
			"openBasicChannel",
			"([B)Landroid/se/omapi/Channel;",
			arg0
		);
	}
	android::se::omapi::Channel Session::openBasicChannel(jbyteArray arg0, jbyte arg1)
	{
		return callObjectMethod(
			"openBasicChannel",
			"([BB)Landroid/se/omapi/Channel;",
			arg0,
			arg1
		);
	}
	android::se::omapi::Channel Session::openLogicalChannel(jbyteArray arg0)
	{
		return callObjectMethod(
			"openLogicalChannel",
			"([B)Landroid/se/omapi/Channel;",
			arg0
		);
	}
	android::se::omapi::Channel Session::openLogicalChannel(jbyteArray arg0, jbyte arg1)
	{
		return callObjectMethod(
			"openLogicalChannel",
			"([BB)Landroid/se/omapi/Channel;",
			arg0,
			arg1
		);
	}
} // namespace android::se::omapi

