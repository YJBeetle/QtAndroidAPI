#include "../NdefMessage.hpp"
#include "../Tag.hpp"
#include "./NdefFormatable.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// Constructors
	
	// Methods
	android::nfc::tech::NdefFormatable NdefFormatable::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.NdefFormatable",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NdefFormatable;",
			arg0.object()
		);
	}
	void NdefFormatable::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void NdefFormatable::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	void NdefFormatable::format(android::nfc::NdefMessage arg0) const
	{
		callMethod<void>(
			"format",
			"(Landroid/nfc/NdefMessage;)V",
			arg0.object()
		);
	}
	void NdefFormatable::formatReadOnly(android::nfc::NdefMessage arg0) const
	{
		callMethod<void>(
			"formatReadOnly",
			"(Landroid/nfc/NdefMessage;)V",
			arg0.object()
		);
	}
	android::nfc::Tag NdefFormatable::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jboolean NdefFormatable::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
} // namespace android::nfc::tech

