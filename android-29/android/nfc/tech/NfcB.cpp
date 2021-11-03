#include "../../../JByteArray.hpp"
#include "../Tag.hpp"
#include "./NfcB.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// QJniObject forward
	NfcB::NfcB(QJniObject obj) : JObject(obj) {}
	
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
	void NfcB::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcB::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	JByteArray NfcB::getApplicationData() const
	{
		return callObjectMethod(
			"getApplicationData",
			"()[B"
		);
	}
	jint NfcB::getMaxTransceiveLength() const
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	JByteArray NfcB::getProtocolInfo() const
	{
		return callObjectMethod(
			"getProtocolInfo",
			"()[B"
		);
	}
	android::nfc::Tag NfcB::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jboolean NfcB::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	JByteArray NfcB::transceive(JByteArray arg0) const
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::tech

