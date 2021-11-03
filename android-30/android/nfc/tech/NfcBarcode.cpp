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
	
	// QAndroidJniObject forward
	NfcBarcode::NfcBarcode(QAndroidJniObject obj) : JObject(obj) {}
	
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
	void NfcBarcode::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcBarcode::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	JByteArray NfcBarcode::getBarcode() const
	{
		return callObjectMethod(
			"getBarcode",
			"()[B"
		);
	}
	android::nfc::Tag NfcBarcode::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint NfcBarcode::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jboolean NfcBarcode::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
} // namespace android::nfc::tech

