#include "../NdefMessage.hpp"
#include "../Tag.hpp"
#include "../../../JString.hpp"
#include "./Ndef.hpp"

namespace android::nfc::tech
{
	// Fields
	JString Ndef::MIFARE_CLASSIC()
	{
		return getStaticObjectField(
			"android.nfc.tech.Ndef",
			"MIFARE_CLASSIC",
			"Ljava/lang/String;"
		);
	}
	JString Ndef::NFC_FORUM_TYPE_1()
	{
		return getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_1",
			"Ljava/lang/String;"
		);
	}
	JString Ndef::NFC_FORUM_TYPE_2()
	{
		return getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_2",
			"Ljava/lang/String;"
		);
	}
	JString Ndef::NFC_FORUM_TYPE_3()
	{
		return getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_3",
			"Ljava/lang/String;"
		);
	}
	JString Ndef::NFC_FORUM_TYPE_4()
	{
		return getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_4",
			"Ljava/lang/String;"
		);
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
	jboolean Ndef::canMakeReadOnly() const
	{
		return callMethod<jboolean>(
			"canMakeReadOnly",
			"()Z"
		);
	}
	void Ndef::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Ndef::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	android::nfc::NdefMessage Ndef::getCachedNdefMessage() const
	{
		return callObjectMethod(
			"getCachedNdefMessage",
			"()Landroid/nfc/NdefMessage;"
		);
	}
	jint Ndef::getMaxSize() const
	{
		return callMethod<jint>(
			"getMaxSize",
			"()I"
		);
	}
	android::nfc::NdefMessage Ndef::getNdefMessage() const
	{
		return callObjectMethod(
			"getNdefMessage",
			"()Landroid/nfc/NdefMessage;"
		);
	}
	android::nfc::Tag Ndef::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	JString Ndef::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	jboolean Ndef::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean Ndef::isWritable() const
	{
		return callMethod<jboolean>(
			"isWritable",
			"()Z"
		);
	}
	jboolean Ndef::makeReadOnly() const
	{
		return callMethod<jboolean>(
			"makeReadOnly",
			"()Z"
		);
	}
	void Ndef::writeNdefMessage(android::nfc::NdefMessage arg0) const
	{
		callMethod<void>(
			"writeNdefMessage",
			"(Landroid/nfc/NdefMessage;)V",
			arg0.object()
		);
	}
} // namespace android::nfc::tech

