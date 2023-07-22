#pragma once

#include "../../../JByteArray.hpp"
#include "../Tag.def.hpp"
#include "./NfcBarcode.def.hpp"

namespace android::nfc::tech
{
	// Fields
	inline jint NfcBarcode::TYPE_KOVIO()
	{
		return getStaticField<jint>(
			"android.nfc.tech.NfcBarcode",
			"TYPE_KOVIO"
		);
	}
	inline jint NfcBarcode::TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.nfc.tech.NfcBarcode",
			"TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::nfc::tech::NfcBarcode NfcBarcode::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.NfcBarcode",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcBarcode;",
			arg0.object()
		);
	}
	inline void NfcBarcode::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void NfcBarcode::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	inline JByteArray NfcBarcode::getBarcode() const
	{
		return callObjectMethod(
			"getBarcode",
			"()[B"
		);
	}
	inline android::nfc::Tag NfcBarcode::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	inline jint NfcBarcode::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jboolean NfcBarcode::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
} // namespace android::nfc::tech

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::nfc::tech;
#endif
