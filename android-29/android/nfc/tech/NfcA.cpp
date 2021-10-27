#include "../Tag.hpp"
#include "./NfcA.hpp"

namespace android::nfc::tech
{
	// Fields
	
	NfcA::NfcA(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject NfcA::get(android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.NfcA",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcA;",
			arg0.__jniObject().object()
		);
	}
	void NfcA::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcA::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	jbyteArray NfcA::getAtqa()
	{
		return __thiz.callObjectMethod(
			"getAtqa",
			"()[B"
		).object<jbyteArray>();
	}
	jint NfcA::getMaxTransceiveLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jshort NfcA::getSak()
	{
		return __thiz.callMethod<jshort>(
			"getSak",
			"()S"
		);
	}
	QAndroidJniObject NfcA::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint NfcA::getTimeout()
	{
		return __thiz.callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jboolean NfcA::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void NfcA::setTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	jbyteArray NfcA::transceive(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"transceive",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
} // namespace android::nfc::tech

