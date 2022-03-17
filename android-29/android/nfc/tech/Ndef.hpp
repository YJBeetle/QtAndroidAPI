#pragma once

#include "../NdefMessage.def.hpp"
#include "../Tag.def.hpp"
#include "../../../JString.hpp"
#include "./Ndef.def.hpp"

namespace android::nfc::tech
{
	// Fields
	inline JString Ndef::MIFARE_CLASSIC()
	{
		return getStaticObjectField(
			"android.nfc.tech.Ndef",
			"MIFARE_CLASSIC",
			"Ljava/lang/String;"
		);
	}
	inline JString Ndef::NFC_FORUM_TYPE_1()
	{
		return getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_1",
			"Ljava/lang/String;"
		);
	}
	inline JString Ndef::NFC_FORUM_TYPE_2()
	{
		return getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_2",
			"Ljava/lang/String;"
		);
	}
	inline JString Ndef::NFC_FORUM_TYPE_3()
	{
		return getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_3",
			"Ljava/lang/String;"
		);
	}
	inline JString Ndef::NFC_FORUM_TYPE_4()
	{
		return getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_4",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::nfc::tech::Ndef Ndef::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.Ndef",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/Ndef;",
			arg0.object()
		);
	}
	inline jboolean Ndef::canMakeReadOnly() const
	{
		return callMethod<jboolean>(
			"canMakeReadOnly",
			"()Z"
		);
	}
	inline void Ndef::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void Ndef::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	inline android::nfc::NdefMessage Ndef::getCachedNdefMessage() const
	{
		return callObjectMethod(
			"getCachedNdefMessage",
			"()Landroid/nfc/NdefMessage;"
		);
	}
	inline jint Ndef::getMaxSize() const
	{
		return callMethod<jint>(
			"getMaxSize",
			"()I"
		);
	}
	inline android::nfc::NdefMessage Ndef::getNdefMessage() const
	{
		return callObjectMethod(
			"getNdefMessage",
			"()Landroid/nfc/NdefMessage;"
		);
	}
	inline android::nfc::Tag Ndef::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	inline JString Ndef::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean Ndef::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline jboolean Ndef::isWritable() const
	{
		return callMethod<jboolean>(
			"isWritable",
			"()Z"
		);
	}
	inline jboolean Ndef::makeReadOnly() const
	{
		return callMethod<jboolean>(
			"makeReadOnly",
			"()Z"
		);
	}
	inline void Ndef::writeNdefMessage(android::nfc::NdefMessage arg0) const
	{
		callMethod<void>(
			"writeNdefMessage",
			"(Landroid/nfc/NdefMessage;)V",
			arg0.object()
		);
	}
} // namespace android::nfc::tech

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::nfc::tech;
#endif
