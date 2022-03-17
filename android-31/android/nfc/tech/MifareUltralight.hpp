#pragma once

#include "../../../JByteArray.hpp"
#include "../Tag.def.hpp"
#include "./MifareUltralight.def.hpp"

namespace android::nfc::tech
{
	// Fields
	inline jint MifareUltralight::PAGE_SIZE_()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"PAGE_SIZE"
		);
	}
	inline jint MifareUltralight::TYPE_ULTRALIGHT()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"TYPE_ULTRALIGHT"
		);
	}
	inline jint MifareUltralight::TYPE_ULTRALIGHT_C()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"TYPE_ULTRALIGHT_C"
		);
	}
	inline jint MifareUltralight::TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::nfc::tech::MifareUltralight MifareUltralight::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.MifareUltralight",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/MifareUltralight;",
			arg0.object()
		);
	}
	inline void MifareUltralight::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void MifareUltralight::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	inline jint MifareUltralight::getMaxTransceiveLength() const
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	inline android::nfc::Tag MifareUltralight::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	inline jint MifareUltralight::getTimeout() const
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	inline jint MifareUltralight::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jboolean MifareUltralight::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline JByteArray MifareUltralight::readPages(jint arg0) const
	{
		return callObjectMethod(
			"readPages",
			"(I)[B",
			arg0
		);
	}
	inline void MifareUltralight::setTimeout(jint arg0) const
	{
		callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	inline JByteArray MifareUltralight::transceive(JByteArray arg0) const
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	inline void MifareUltralight::writePage(jint arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"writePage",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
} // namespace android::nfc::tech

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::nfc::tech;
#endif
