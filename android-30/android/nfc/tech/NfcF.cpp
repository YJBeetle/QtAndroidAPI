#include "../Tag.hpp"
#include "./NfcF.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// QAndroidJniObject forward
	NfcF::NfcF(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::tech::NfcF NfcF::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.NfcF",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcF;",
			arg0.object()
		);
	}
	void NfcF::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcF::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	jbyteArray NfcF::getManufacturer()
	{
		return callObjectMethod(
			"getManufacturer",
			"()[B"
		).object<jbyteArray>();
	}
	jint NfcF::getMaxTransceiveLength()
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jbyteArray NfcF::getSystemCode()
	{
		return callObjectMethod(
			"getSystemCode",
			"()[B"
		).object<jbyteArray>();
	}
	android::nfc::Tag NfcF::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint NfcF::getTimeout()
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jboolean NfcF::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void NfcF::setTimeout(jint arg0)
	{
		callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	jbyteArray NfcF::transceive(jbyteArray arg0)
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
} // namespace android::nfc::tech

