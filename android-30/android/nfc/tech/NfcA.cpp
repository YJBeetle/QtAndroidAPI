#include "../../../JByteArray.hpp"
#include "../Tag.hpp"
#include "./NfcA.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// QAndroidJniObject forward
	NfcA::NfcA(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::tech::NfcA NfcA::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.NfcA",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcA;",
			arg0.object()
		);
	}
	void NfcA::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcA::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	JByteArray NfcA::getAtqa()
	{
		return callObjectMethod(
			"getAtqa",
			"()[B"
		);
	}
	jint NfcA::getMaxTransceiveLength()
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jshort NfcA::getSak()
	{
		return callMethod<jshort>(
			"getSak",
			"()S"
		);
	}
	android::nfc::Tag NfcA::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint NfcA::getTimeout()
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jboolean NfcA::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void NfcA::setTimeout(jint arg0)
	{
		callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	JByteArray NfcA::transceive(JByteArray arg0)
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::tech

