#include "./Channel.hpp"
#include "./Reader.hpp"
#include "./Session.hpp"

namespace android::se::omapi
{
	// Fields
	
	Session::Session(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void Session::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void Session::closeChannels()
	{
		__thiz.callMethod<void>(
			"closeChannels",
			"()V"
		);
	}
	jbyteArray Session::getATR()
	{
		return __thiz.callObjectMethod(
			"getATR",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject Session::getReader()
	{
		return __thiz.callObjectMethod(
			"getReader",
			"()Landroid/se/omapi/Reader;"
		);
	}
	jboolean Session::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	QAndroidJniObject Session::openBasicChannel(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"openBasicChannel",
			"([B)Landroid/se/omapi/Channel;",
			arg0
		);
	}
	QAndroidJniObject Session::openBasicChannel(jbyteArray arg0, jbyte arg1)
	{
		return __thiz.callObjectMethod(
			"openBasicChannel",
			"([BB)Landroid/se/omapi/Channel;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Session::openLogicalChannel(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"openLogicalChannel",
			"([B)Landroid/se/omapi/Channel;",
			arg0
		);
	}
	QAndroidJniObject Session::openLogicalChannel(jbyteArray arg0, jbyte arg1)
	{
		return __thiz.callObjectMethod(
			"openLogicalChannel",
			"([BB)Landroid/se/omapi/Channel;",
			arg0,
			arg1
		);
	}
} // namespace android::se::omapi

