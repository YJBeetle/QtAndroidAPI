#include "../Tag.hpp"
#include "./IsoDep.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// QAndroidJniObject forward
	IsoDep::IsoDep(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::tech::IsoDep IsoDep::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.IsoDep",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/IsoDep;",
			arg0.object()
		);
	}
	void IsoDep::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void IsoDep::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	jbyteArray IsoDep::getHiLayerResponse()
	{
		return callObjectMethod(
			"getHiLayerResponse",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray IsoDep::getHistoricalBytes()
	{
		return callObjectMethod(
			"getHistoricalBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jint IsoDep::getMaxTransceiveLength()
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	android::nfc::Tag IsoDep::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint IsoDep::getTimeout()
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jboolean IsoDep::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean IsoDep::isExtendedLengthApduSupported()
	{
		return callMethod<jboolean>(
			"isExtendedLengthApduSupported",
			"()Z"
		);
	}
	void IsoDep::setTimeout(jint arg0)
	{
		callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	jbyteArray IsoDep::transceive(jbyteArray arg0)
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
} // namespace android::nfc::tech

