#include "../../../JByteArray.hpp"
#include "../Tag.hpp"
#include "./NfcF.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// QAndroidJniObject forward
	NfcF::NfcF(QAndroidJniObject obj) : JObject(obj) {}
	
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
	JByteArray NfcF::getManufacturer()
	{
		return callObjectMethod(
			"getManufacturer",
			"()[B"
		);
	}
	jint NfcF::getMaxTransceiveLength()
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	JByteArray NfcF::getSystemCode()
	{
		return callObjectMethod(
			"getSystemCode",
			"()[B"
		);
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
	JByteArray NfcF::transceive(JByteArray arg0)
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::tech

