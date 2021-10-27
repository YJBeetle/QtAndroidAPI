#include "../Tag.hpp"
#include "./NfcV.hpp"

namespace android::nfc::tech
{
	// Fields
	
	NfcV::NfcV(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject NfcV::get(android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.NfcV",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcV;",
			arg0.__jniObject().object()
		);
	}
	void NfcV::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcV::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	jbyte NfcV::getDsfId()
	{
		return __thiz.callMethod<jbyte>(
			"getDsfId",
			"()B"
		);
	}
	jint NfcV::getMaxTransceiveLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jbyte NfcV::getResponseFlags()
	{
		return __thiz.callMethod<jbyte>(
			"getResponseFlags",
			"()B"
		);
	}
	QAndroidJniObject NfcV::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jboolean NfcV::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jbyteArray NfcV::transceive(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"transceive",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
} // namespace android::nfc::tech

