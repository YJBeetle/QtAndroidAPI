#pragma once

#include "../../../JByteArray.hpp"
#include "../Tag.def.hpp"
#include "./NfcF.def.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::nfc::tech::NfcF NfcF::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.NfcF",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcF;",
			arg0.object()
		);
	}
	inline void NfcF::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void NfcF::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	inline JByteArray NfcF::getManufacturer() const
	{
		return callObjectMethod(
			"getManufacturer",
			"()[B"
		);
	}
	inline jint NfcF::getMaxTransceiveLength() const
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	inline JByteArray NfcF::getSystemCode() const
	{
		return callObjectMethod(
			"getSystemCode",
			"()[B"
		);
	}
	inline android::nfc::Tag NfcF::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	inline jint NfcF::getTimeout() const
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	inline jboolean NfcF::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline void NfcF::setTimeout(jint arg0) const
	{
		callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	inline JByteArray NfcF::transceive(JByteArray arg0) const
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::tech

// Base class headers

