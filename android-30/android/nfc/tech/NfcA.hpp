#pragma once

#include "../../../JByteArray.hpp"
#include "../Tag.def.hpp"
#include "./NfcA.def.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::nfc::tech::NfcA NfcA::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.NfcA",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcA;",
			arg0.object()
		);
	}
	inline void NfcA::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void NfcA::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	inline JByteArray NfcA::getAtqa() const
	{
		return callObjectMethod(
			"getAtqa",
			"()[B"
		);
	}
	inline jint NfcA::getMaxTransceiveLength() const
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	inline jshort NfcA::getSak() const
	{
		return callMethod<jshort>(
			"getSak",
			"()S"
		);
	}
	inline android::nfc::Tag NfcA::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	inline jint NfcA::getTimeout() const
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	inline jboolean NfcA::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline void NfcA::setTimeout(jint arg0) const
	{
		callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	inline JByteArray NfcA::transceive(JByteArray arg0) const
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
