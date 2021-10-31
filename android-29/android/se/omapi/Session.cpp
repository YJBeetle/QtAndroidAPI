#include "./Channel.hpp"
#include "./Reader.hpp"
#include "./Session.hpp"

namespace android::se::omapi
{
	// Fields
	
	// QAndroidJniObject forward
	Session::Session(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	QAndroidJniObject Session::getReader()
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
	QAndroidJniObject Session::openBasicChannel(jbyteArray arg0)
	{
		return callObjectMethod(
			"openBasicChannel",
			"([B)Landroid/se/omapi/Channel;",
			arg0
		);
	}
	QAndroidJniObject Session::openBasicChannel(jbyteArray arg0, jbyte arg1)
	{
		return callObjectMethod(
			"openBasicChannel",
			"([BB)Landroid/se/omapi/Channel;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Session::openLogicalChannel(jbyteArray arg0)
	{
		return callObjectMethod(
			"openLogicalChannel",
			"([B)Landroid/se/omapi/Channel;",
			arg0
		);
	}
	QAndroidJniObject Session::openLogicalChannel(jbyteArray arg0, jbyte arg1)
	{
		return callObjectMethod(
			"openLogicalChannel",
			"([BB)Landroid/se/omapi/Channel;",
			arg0,
			arg1
		);
	}
} // namespace android::se::omapi

