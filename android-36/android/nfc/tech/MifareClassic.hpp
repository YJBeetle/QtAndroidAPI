#pragma once

#include "../../../JByteArray.hpp"
#include "../Tag.def.hpp"
#include "./MifareClassic.def.hpp"

namespace android::nfc::tech
{
	// Fields
	inline jint MifareClassic::BLOCK_SIZE()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"BLOCK_SIZE"
		);
	}
	inline JByteArray MifareClassic::KEY_DEFAULT()
	{
		return getStaticObjectField(
			"android.nfc.tech.MifareClassic",
			"KEY_DEFAULT",
			"[B"
		);
	}
	inline JByteArray MifareClassic::KEY_MIFARE_APPLICATION_DIRECTORY()
	{
		return getStaticObjectField(
			"android.nfc.tech.MifareClassic",
			"KEY_MIFARE_APPLICATION_DIRECTORY",
			"[B"
		);
	}
	inline JByteArray MifareClassic::KEY_NFC_FORUM()
	{
		return getStaticObjectField(
			"android.nfc.tech.MifareClassic",
			"KEY_NFC_FORUM",
			"[B"
		);
	}
	inline jint MifareClassic::SIZE_1K()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_1K"
		);
	}
	inline jint MifareClassic::SIZE_2K()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_2K"
		);
	}
	inline jint MifareClassic::SIZE_4K()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_4K"
		);
	}
	inline jint MifareClassic::SIZE_MINI()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_MINI"
		);
	}
	inline jint MifareClassic::TYPE_CLASSIC()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_CLASSIC"
		);
	}
	inline jint MifareClassic::TYPE_PLUS()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_PLUS"
		);
	}
	inline jint MifareClassic::TYPE_PRO()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_PRO"
		);
	}
	inline jint MifareClassic::TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::nfc::tech::MifareClassic MifareClassic::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.MifareClassic",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/MifareClassic;",
			arg0.object()
		);
	}
	inline jboolean MifareClassic::authenticateSectorWithKeyA(jint arg0, JByteArray arg1) const
	{
		return callMethod<jboolean>(
			"authenticateSectorWithKeyA",
			"(I[B)Z",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	inline jboolean MifareClassic::authenticateSectorWithKeyB(jint arg0, JByteArray arg1) const
	{
		return callMethod<jboolean>(
			"authenticateSectorWithKeyB",
			"(I[B)Z",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	inline jint MifareClassic::blockToSector(jint arg0) const
	{
		return callMethod<jint>(
			"blockToSector",
			"(I)I",
			arg0
		);
	}
	inline void MifareClassic::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void MifareClassic::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	inline void MifareClassic::decrement(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"decrement",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline jint MifareClassic::getBlockCount() const
	{
		return callMethod<jint>(
			"getBlockCount",
			"()I"
		);
	}
	inline jint MifareClassic::getBlockCountInSector(jint arg0) const
	{
		return callMethod<jint>(
			"getBlockCountInSector",
			"(I)I",
			arg0
		);
	}
	inline jint MifareClassic::getMaxTransceiveLength() const
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	inline jint MifareClassic::getSectorCount() const
	{
		return callMethod<jint>(
			"getSectorCount",
			"()I"
		);
	}
	inline jint MifareClassic::getSize() const
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
	inline android::nfc::Tag MifareClassic::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	inline jint MifareClassic::getTimeout() const
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	inline jint MifareClassic::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline void MifareClassic::increment(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"increment",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline jboolean MifareClassic::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline JByteArray MifareClassic::readBlock(jint arg0) const
	{
		return callObjectMethod(
			"readBlock",
			"(I)[B",
			arg0
		);
	}
	inline void MifareClassic::restore(jint arg0) const
	{
		callMethod<void>(
			"restore",
			"(I)V",
			arg0
		);
	}
	inline jint MifareClassic::sectorToBlock(jint arg0) const
	{
		return callMethod<jint>(
			"sectorToBlock",
			"(I)I",
			arg0
		);
	}
	inline void MifareClassic::setTimeout(jint arg0) const
	{
		callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	inline JByteArray MifareClassic::transceive(JByteArray arg0) const
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	inline void MifareClassic::transfer(jint arg0) const
	{
		callMethod<void>(
			"transfer",
			"(I)V",
			arg0
		);
	}
	inline void MifareClassic::writeBlock(jint arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"writeBlock",
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
