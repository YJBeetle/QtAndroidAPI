#include "../../../JByteArray.hpp"
#include "../Tag.hpp"
#include "./MifareClassic.hpp"

namespace android::nfc::tech
{
	// Fields
	jint MifareClassic::BLOCK_SIZE()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"BLOCK_SIZE"
		);
	}
	JByteArray MifareClassic::KEY_DEFAULT()
	{
		return getStaticObjectField(
			"android.nfc.tech.MifareClassic",
			"KEY_DEFAULT",
			"[B"
		);
	}
	JByteArray MifareClassic::KEY_MIFARE_APPLICATION_DIRECTORY()
	{
		return getStaticObjectField(
			"android.nfc.tech.MifareClassic",
			"KEY_MIFARE_APPLICATION_DIRECTORY",
			"[B"
		);
	}
	JByteArray MifareClassic::KEY_NFC_FORUM()
	{
		return getStaticObjectField(
			"android.nfc.tech.MifareClassic",
			"KEY_NFC_FORUM",
			"[B"
		);
	}
	jint MifareClassic::SIZE_1K()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_1K"
		);
	}
	jint MifareClassic::SIZE_2K()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_2K"
		);
	}
	jint MifareClassic::SIZE_4K()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_4K"
		);
	}
	jint MifareClassic::SIZE_MINI()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_MINI"
		);
	}
	jint MifareClassic::TYPE_CLASSIC()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_CLASSIC"
		);
	}
	jint MifareClassic::TYPE_PLUS()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_PLUS"
		);
	}
	jint MifareClassic::TYPE_PRO()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_PRO"
		);
	}
	jint MifareClassic::TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_UNKNOWN"
		);
	}
	
	// QJniObject forward
	MifareClassic::MifareClassic(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::tech::MifareClassic MifareClassic::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.MifareClassic",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/MifareClassic;",
			arg0.object()
		);
	}
	jboolean MifareClassic::authenticateSectorWithKeyA(jint arg0, JByteArray arg1) const
	{
		return callMethod<jboolean>(
			"authenticateSectorWithKeyA",
			"(I[B)Z",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	jboolean MifareClassic::authenticateSectorWithKeyB(jint arg0, JByteArray arg1) const
	{
		return callMethod<jboolean>(
			"authenticateSectorWithKeyB",
			"(I[B)Z",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	jint MifareClassic::blockToSector(jint arg0) const
	{
		return callMethod<jint>(
			"blockToSector",
			"(I)I",
			arg0
		);
	}
	void MifareClassic::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void MifareClassic::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	void MifareClassic::decrement(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"decrement",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint MifareClassic::getBlockCount() const
	{
		return callMethod<jint>(
			"getBlockCount",
			"()I"
		);
	}
	jint MifareClassic::getBlockCountInSector(jint arg0) const
	{
		return callMethod<jint>(
			"getBlockCountInSector",
			"(I)I",
			arg0
		);
	}
	jint MifareClassic::getMaxTransceiveLength() const
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jint MifareClassic::getSectorCount() const
	{
		return callMethod<jint>(
			"getSectorCount",
			"()I"
		);
	}
	jint MifareClassic::getSize() const
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
	android::nfc::Tag MifareClassic::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint MifareClassic::getTimeout() const
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jint MifareClassic::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	void MifareClassic::increment(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"increment",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean MifareClassic::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	JByteArray MifareClassic::readBlock(jint arg0) const
	{
		return callObjectMethod(
			"readBlock",
			"(I)[B",
			arg0
		);
	}
	void MifareClassic::restore(jint arg0) const
	{
		callMethod<void>(
			"restore",
			"(I)V",
			arg0
		);
	}
	jint MifareClassic::sectorToBlock(jint arg0) const
	{
		return callMethod<jint>(
			"sectorToBlock",
			"(I)I",
			arg0
		);
	}
	void MifareClassic::setTimeout(jint arg0) const
	{
		callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	JByteArray MifareClassic::transceive(JByteArray arg0) const
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	void MifareClassic::transfer(jint arg0) const
	{
		callMethod<void>(
			"transfer",
			"(I)V",
			arg0
		);
	}
	void MifareClassic::writeBlock(jint arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"writeBlock",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
} // namespace android::nfc::tech

