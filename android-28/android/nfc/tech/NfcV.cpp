#include "../../../JByteArray.hpp"
#include "../Tag.hpp"
#include "./NfcV.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// QJniObject forward
	NfcV::NfcV(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::tech::NfcV NfcV::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.NfcV",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcV;",
			arg0.object()
		);
	}
	void NfcV::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcV::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	jbyte NfcV::getDsfId() const
	{
		return callMethod<jbyte>(
			"getDsfId",
			"()B"
		);
	}
	jint NfcV::getMaxTransceiveLength() const
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jbyte NfcV::getResponseFlags() const
	{
		return callMethod<jbyte>(
			"getResponseFlags",
			"()B"
		);
	}
	android::nfc::Tag NfcV::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jboolean NfcV::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	JByteArray NfcV::transceive(JByteArray arg0) const
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::tech

