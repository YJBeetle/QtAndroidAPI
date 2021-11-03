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
	void Channel::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JByteArray Channel::getSelectResponse() const
	{
		return callObjectMethod(
			"getSelectResponse",
			"()[B"
		);
	}
	android::se::omapi::Session Channel::getSession() const
	{
		return callObjectMethod(
			"getSession",
			"()Landroid/se/omapi/Session;"
		);
	}
	jboolean Channel::isBasicChannel() const
	{
		return callMethod<jboolean>(
			"isBasicChannel",
			"()Z"
		);
	}
	jboolean Channel::isOpen() const
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	jboolean Channel::selectNext() const
	{
		return callMethod<jboolean>(
			"selectNext",
			"()Z"
		);
	}
	JByteArray Channel::transmit(JByteArray arg0) const
	{
		return callObjectMethod(
			"transmit",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::se::omapi

