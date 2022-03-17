#pragma once

#include "../../../JByteArray.hpp"
#include "../Tag.def.hpp"
#include "./NfcB.def.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::nfc::tech::NfcB NfcB::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.NfcB",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcB;",
			arg0.object()
		);
	}
	inline void NfcB::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void NfcB::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	inline JByteArray NfcB::getApplicationData() const
	{
		return callObjectMethod(
			"getApplicationData",
			"()[B"
		);
	}
	inline jint NfcB::getMaxTransceiveLength() const
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	inline JByteArray NfcB::getProtocolInfo() const
	{
		return callObjectMethod(
			"getProtocolInfo",
			"()[B"
		);
	}
	inline android::nfc::Tag NfcB::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	inline jboolean NfcB::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline JByteArray NfcB::transceive(JByteArray arg0) const
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::tech

// Base class headers

