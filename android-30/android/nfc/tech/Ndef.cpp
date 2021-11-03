#include "../NdefMessage.hpp"
#include "../Tag.hpp"
#include "./Ndef.hpp"

namespace android::nfc::tech
{
	// Fields
	jstring Ndef::MIFARE_CLASSIC()
	{
		return getStaticObjectField(
			"android.nfc.tech.Ndef",
			"MIFARE_CLASSIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Ndef::NFC_FORUM_TYPE_1()
	{
		return getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Ndef::NFC_FORUM_TYPE_2()
	{
		return getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Ndef::NFC_FORUM_TYPE_3()
	{
		return getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_3",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Ndef::NFC_FORUM_TYPE_4()
	{
		return getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_4",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Ndef::Ndef(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::tech::Ndef Ndef::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.Ndef",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/Ndef;",
			arg0.object()
		);
	}
	jboolean Ndef::canMakeReadOnly()
	{
		return callMethod<jboolean>(
			"canMakeReadOnly",
			"()Z"
		);
	}
	void Ndef::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Ndef::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	android::nfc::NdefMessage Ndef::getCachedNdefMessage()
	{
		return callObjectMethod(
			"getCachedNdefMessage",
			"()Landroid/nfc/NdefMessage;"
		);
	}
	jint Ndef::getMaxSize()
	{
		return callMethod<jint>(
			"getMaxSize",
			"()I"
		);
	}
	android::nfc::NdefMessage Ndef::getNdefMessage()
	{
		return callObjectMethod(
			"getNdefMessage",
			"()Landroid/nfc/NdefMessage;"
		);
	}
	android::nfc::Tag Ndef::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jstring Ndef::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Ndef::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean Ndef::isWritable()
	{
		return callMethod<jboolean>(
			"isWritable",
			"()Z"
		);
	}
	jboolean Ndef::makeReadOnly()
	{
		return callMethod<jboolean>(
			"makeReadOnly",
			"()Z"
		);
	}
	void Ndef::writeNdefMessage(android::nfc::NdefMessage arg0)
	{
		callMethod<void>(
			"writeNdefMessage",
			"(Landroid/nfc/NdefMessage;)V",
			arg0.object()
		);
	}
} // namespace android::nfc::tech

