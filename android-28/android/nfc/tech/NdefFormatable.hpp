#pragma once

#include "../NdefMessage.def.hpp"
#include "../Tag.def.hpp"
#include "./NdefFormatable.def.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::nfc::tech::NdefFormatable NdefFormatable::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.NdefFormatable",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NdefFormatable;",
			arg0.object()
		);
	}
	inline void NdefFormatable::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void NdefFormatable::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	inline void NdefFormatable::format(android::nfc::NdefMessage arg0) const
	{
		callMethod<void>(
			"format",
			"(Landroid/nfc/NdefMessage;)V",
			arg0.object()
		);
	}
	inline void NdefFormatable::formatReadOnly(android::nfc::NdefMessage arg0) const
	{
		callMethod<void>(
			"formatReadOnly",
			"(Landroid/nfc/NdefMessage;)V",
			arg0.object()
		);
	}
	inline android::nfc::Tag NdefFormatable::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	inline jboolean NdefFormatable::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
} // namespace android::nfc::tech

// Base class headers

