#include "../NdefMessage.hpp"
#include "../Tag.hpp"
#include "./NdefFormatable.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// QAndroidJniObject forward
	NdefFormatable::NdefFormatable(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::tech::NdefFormatable NdefFormatable::get(android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.NdefFormatable",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NdefFormatable;",
			arg0.object()
		);
	}
	void NdefFormatable::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void NdefFormatable::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	void NdefFormatable::format(android::nfc::NdefMessage arg0)
	{
		callMethod<void>(
			"format",
			"(Landroid/nfc/NdefMessage;)V",
			arg0.object()
		);
	}
	void NdefFormatable::formatReadOnly(android::nfc::NdefMessage arg0)
	{
		callMethod<void>(
			"formatReadOnly",
			"(Landroid/nfc/NdefMessage;)V",
			arg0.object()
		);
	}
	android::nfc::Tag NdefFormatable::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jboolean NdefFormatable::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
} // namespace android::nfc::tech

