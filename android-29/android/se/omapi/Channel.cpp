#include "./Session.hpp"
#include "./Channel.hpp"

namespace android::se::omapi
{
	// Fields
	
	Channel::Channel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void Channel::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jbyteArray Channel::getSelectResponse()
	{
		return __thiz.callObjectMethod(
			"getSelectResponse",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject Channel::getSession()
	{
		return __thiz.callObjectMethod(
			"getSession",
			"()Landroid/se/omapi/Session;"
		);
	}
	jboolean Channel::isBasicChannel()
	{
		return __thiz.callMethod<jboolean>(
			"isBasicChannel",
			"()Z"
		);
	}
	jboolean Channel::isOpen()
	{
		return __thiz.callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	jboolean Channel::selectNext()
	{
		return __thiz.callMethod<jboolean>(
			"selectNext",
			"()Z"
		);
	}
	jbyteArray Channel::transmit(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"transmit",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
} // namespace android::se::omapi

