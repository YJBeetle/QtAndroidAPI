#include "../Tag.hpp"
#include "./IsoDep.hpp"

namespace android::nfc::tech
{
	// Fields
	
	IsoDep::IsoDep(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject IsoDep::get(android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.IsoDep",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/IsoDep;",
			arg0.__jniObject().object()
		);
	}
	void IsoDep::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void IsoDep::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	jbyteArray IsoDep::getHiLayerResponse()
	{
		return __thiz.callObjectMethod(
			"getHiLayerResponse",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray IsoDep::getHistoricalBytes()
	{
		return __thiz.callObjectMethod(
			"getHistoricalBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jint IsoDep::getMaxTransceiveLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	QAndroidJniObject IsoDep::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint IsoDep::getTimeout()
	{
		return __thiz.callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jboolean IsoDep::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean IsoDep::isExtendedLengthApduSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isExtendedLengthApduSupported",
			"()Z"
		);
	}
	void IsoDep::setTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	jbyteArray IsoDep::transceive(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"transceive",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
} // namespace android::nfc::tech

