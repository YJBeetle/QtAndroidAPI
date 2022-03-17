#pragma once

#include "../../../JByteArray.hpp"
#include "../Tag.def.hpp"
#include "./IsoDep.def.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::nfc::tech::IsoDep IsoDep::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.IsoDep",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/IsoDep;",
			arg0.object()
		);
	}
	inline void IsoDep::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void IsoDep::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	inline JByteArray IsoDep::getHiLayerResponse() const
	{
		return callObjectMethod(
			"getHiLayerResponse",
			"()[B"
		);
	}
	inline JByteArray IsoDep::getHistoricalBytes() const
	{
		return callObjectMethod(
			"getHistoricalBytes",
			"()[B"
		);
	}
	inline jint IsoDep::getMaxTransceiveLength() const
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	inline android::nfc::Tag IsoDep::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	inline jint IsoDep::getTimeout() const
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	inline jboolean IsoDep::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline jboolean IsoDep::isExtendedLengthApduSupported() const
	{
		return callMethod<jboolean>(
			"isExtendedLengthApduSupported",
			"()Z"
		);
	}
	inline void IsoDep::setTimeout(jint arg0) const
	{
		callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	inline JByteArray IsoDep::transceive(JByteArray arg0) const
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::tech

// Base class headers

