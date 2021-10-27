#include "../NdefMessage.hpp"
#include "../Tag.hpp"
#include "./NdefFormatable.hpp"

namespace android::nfc::tech
{
	// Fields
	
	NdefFormatable::NdefFormatable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject NdefFormatable::get(android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.NdefFormatable",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NdefFormatable;",
			arg0.__jniObject().object()
		);
	}
	void NdefFormatable::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void NdefFormatable::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	void NdefFormatable::format(android::nfc::NdefMessage arg0)
	{
		__thiz.callMethod<void>(
			"format",
			"(Landroid/nfc/NdefMessage;)V",
			arg0.__jniObject().object()
		);
	}
	void NdefFormatable::formatReadOnly(android::nfc::NdefMessage arg0)
	{
		__thiz.callMethod<void>(
			"formatReadOnly",
			"(Landroid/nfc/NdefMessage;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NdefFormatable::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jboolean NdefFormatable::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
} // namespace android::nfc::tech

