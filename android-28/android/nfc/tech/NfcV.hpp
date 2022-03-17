#pragma once

#include "../../../JByteArray.hpp"
#include "../Tag.def.hpp"
#include "./NfcV.def.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::nfc::tech::NfcV NfcV::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.NfcV",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcV;",
			arg0.object()
		);
	}
	inline void NfcV::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void NfcV::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	inline jbyte NfcV::getDsfId() const
	{
		return callMethod<jbyte>(
			"getDsfId",
			"()B"
		);
	}
	inline jint NfcV::getMaxTransceiveLength() const
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	inline jbyte NfcV::getResponseFlags() const
	{
		return callMethod<jbyte>(
			"getResponseFlags",
			"()B"
		);
	}
	inline android::nfc::Tag NfcV::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	inline jboolean NfcV::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline JByteArray NfcV::transceive(JByteArray arg0) const
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::tech

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::nfc::tech;
#endif
