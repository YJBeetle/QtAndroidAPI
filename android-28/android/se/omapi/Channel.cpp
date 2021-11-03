#include "../../../JByteArray.hpp"
#include "./Session.hpp"
#include "./Channel.hpp"

namespace android::se::omapi
{
	// Fields
	
	// QJniObject forward
	Channel::Channel(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Channel::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JByteArray Channel::getSelectResponse()
	{
		return callObjectMethod(
			"getSelectResponse",
			"()[B"
		);
	}
	android::se::omapi::Session Channel::getSession()
	{
		return callObjectMethod(
			"getSession",
			"()Landroid/se/omapi/Session;"
		);
	}
	jboolean Channel::isBasicChannel()
	{
		return callMethod<jboolean>(
			"isBasicChannel",
			"()Z"
		);
	}
	jboolean Channel::isOpen()
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	jboolean Channel::selectNext()
	{
		return callMethod<jboolean>(
			"selectNext",
			"()Z"
		);
	}
	JByteArray Channel::transmit(JByteArray arg0)
	{
		return callObjectMethod(
			"transmit",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::se::omapi

