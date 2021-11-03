#include "../../../JByteArray.hpp"
#include "../Tag.hpp"
#include "./NfcA.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// QJniObject forward
	NfcA::NfcA(QJniObject obj) : JObject(obj) {}
	
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
	void NfcA::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcA::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	JByteArray NfcA::getAtqa() const
	{
		return callObjectMethod(
			"getAtqa",
			"()[B"
		);
	}
	jint NfcA::getMaxTransceiveLength() const
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jshort NfcA::getSak() const
	{
		return callMethod<jshort>(
			"getSak",
			"()S"
		);
	}
	android::nfc::Tag NfcA::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint NfcA::getTimeout() const
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jboolean NfcA::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void NfcA::setTimeout(jint arg0) const
	{
		callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	JByteArray NfcA::transceive(JByteArray arg0) const
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::tech

