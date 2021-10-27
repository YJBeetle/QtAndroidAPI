#include "../Tag.hpp"
#include "./NfcF.hpp"

namespace android::nfc::tech
{
	// Fields
	
	NfcF::NfcF(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject NfcF::get(android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.NfcF",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcF;",
			arg0.__jniObject().object()
		);
	}
	void NfcF::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcF::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	jbyteArray NfcF::getManufacturer()
	{
		return __thiz.callObjectMethod(
			"getManufacturer",
			"()[B"
		).object<jbyteArray>();
	}
	jint NfcF::getMaxTransceiveLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jbyteArray NfcF::getSystemCode()
	{
		return __thiz.callObjectMethod(
			"getSystemCode",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject NfcF::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint NfcF::getTimeout()
	{
		return __thiz.callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jboolean NfcF::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void NfcF::setTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	jbyteArray NfcF::transceive(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"transceive",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
} // namespace android::nfc::tech

