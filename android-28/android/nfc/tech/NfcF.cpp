#include "../../../JByteArray.hpp"
#include "../Tag.hpp"
#include "./NfcF.hpp"

namespace android::nfc::tech
{
	// Fields
	
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
	void NfcF::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcF::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	JByteArray NfcF::getManufacturer() const
	{
		return callObjectMethod(
			"getManufacturer",
			"()[B"
		);
	}
	jint NfcF::getMaxTransceiveLength() const
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	JByteArray NfcF::getSystemCode() const
	{
		return callObjectMethod(
			"getSystemCode",
			"()[B"
		);
	}
	android::nfc::Tag NfcF::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint NfcF::getTimeout() const
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jboolean NfcF::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void NfcF::setTimeout(jint arg0) const
	{
		callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	JByteArray NfcF::transceive(JByteArray arg0) const
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::tech

