#include "../Tag.hpp"
#include "./NfcB.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// QJniObject forward
	NfcB::NfcB(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::tech::NfcB NfcB::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.NfcB",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcB;",
			arg0.object()
		);
	}
	void NfcB::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcB::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	jbyteArray NfcB::getApplicationData()
	{
		return callObjectMethod(
			"getApplicationData",
			"()[B"
		).object<jbyteArray>();
	}
	jint NfcB::getMaxTransceiveLength()
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jbyteArray NfcB::getProtocolInfo()
	{
		return callObjectMethod(
			"getProtocolInfo",
			"()[B"
		).object<jbyteArray>();
	}
	android::nfc::Tag NfcB::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jboolean NfcB::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jbyteArray NfcB::transceive(jbyteArray arg0)
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
} // namespace android::nfc::tech

