#include "../Tag.hpp"
#include "./NfcBarcode.hpp"

namespace android::nfc::tech
{
	// Fields
	jint NfcBarcode::TYPE_KOVIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.NfcBarcode",
			"TYPE_KOVIO"
		);
	}
	jint NfcBarcode::TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.NfcBarcode",
			"TYPE_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	NfcBarcode::NfcBarcode(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject NfcBarcode::get(android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	jbyteArray NfcBarcode::getBarcode()
	{
		return callObjectMethod(
			"getBarcode",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject NfcBarcode::getTag()
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

