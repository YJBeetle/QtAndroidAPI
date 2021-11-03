#include "../../../JByteArray.hpp"
#include "../Tag.hpp"
#include "./NfcBarcode.hpp"

namespace android::nfc::tech
{
	// Fields
	jint NfcBarcode::TYPE_KOVIO()
	{
		return getStaticField<jint>(
			"android.nfc.tech.NfcBarcode",
			"TYPE_KOVIO"
		);
	}
	jint NfcBarcode::TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.nfc.tech.NfcBarcode",
			"TYPE_UNKNOWN"
		);
	}
	
	// QJniObject forward
	NfcBarcode::NfcBarcode(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::tech::NfcBarcode NfcBarcode::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.NfcBarcode",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcBarcode;",
			arg0.object()
		);
	}
	void NfcBarcode::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcBarcode::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	JByteArray NfcBarcode::getBarcode()
	{
		return callObjectMethod(
			"getBarcode",
			"()[B"
		);
	}
	android::nfc::Tag NfcBarcode::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint NfcBarcode::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jboolean NfcBarcode::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
} // namespace android::nfc::tech

