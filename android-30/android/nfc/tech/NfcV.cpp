#include "../Tag.hpp"
#include "./NfcV.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// QJniObject forward
	NfcV::NfcV(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	void NfcV::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcV::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	jbyte NfcV::getDsfId()
	{
		return callMethod<jbyte>(
			"getDsfId",
			"()B"
		);
	}
	jint NfcV::getMaxTransceiveLength()
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jbyte NfcV::getResponseFlags()
	{
		return callMethod<jbyte>(
			"getResponseFlags",
			"()B"
		);
	}
	android::nfc::Tag NfcV::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jboolean NfcV::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jbyteArray NfcV::transceive(jbyteArray arg0)
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
} // namespace android::nfc::tech

