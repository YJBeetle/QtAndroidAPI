#include "../Tag.hpp"
#include "./NfcB.hpp"

namespace android::nfc::tech
{
	// Fields
	
	NfcB::NfcB(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject NfcB::get(android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.NfcB",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcB;",
			arg0.__jniObject().object()
		);
	}
	void NfcB::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcB::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	jbyteArray NfcB::getApplicationData()
	{
		return __thiz.callObjectMethod(
			"getApplicationData",
			"()[B"
		).object<jbyteArray>();
	}
	jint NfcB::getMaxTransceiveLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jbyteArray NfcB::getProtocolInfo()
	{
		return __thiz.callObjectMethod(
			"getProtocolInfo",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject NfcB::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jboolean NfcB::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jbyteArray NfcB::transceive(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"transceive",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
} // namespace android::nfc::tech

