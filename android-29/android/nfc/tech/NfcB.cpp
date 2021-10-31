#include "../Tag.hpp"
#include "./NfcB.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// QAndroidJniObject forward
	NfcB::NfcB(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject NfcB::get(android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.NfcB",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcB;",
			arg0.object()
		);
	}
	void NfcB::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcB::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	jbyteArray NfcB::getApplicationData()
	{
		return callObjectMethod(
			"getApplicationData",
			"()[B"
		).object<jbyteArray>();
	}
	jint NfcB::getMaxTransceiveLength()
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jbyteArray NfcB::getProtocolInfo()
	{
		return callObjectMethod(
			"getProtocolInfo",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject NfcB::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jboolean NfcB::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jbyteArray NfcB::transceive(jbyteArray arg0)
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
} // namespace android::nfc::tech

