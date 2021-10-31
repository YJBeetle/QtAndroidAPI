#include "../Tag.hpp"
#include "./MifareClassic.hpp"

namespace android::nfc::tech
{
	// Fields
	jint MifareClassic::BLOCK_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"BLOCK_SIZE"
		);
	}
	jbyteArray MifareClassic::KEY_DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.tech.MifareClassic",
			"KEY_DEFAULT",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray MifareClassic::KEY_MIFARE_APPLICATION_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.tech.MifareClassic",
			"KEY_MIFARE_APPLICATION_DIRECTORY",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray MifareClassic::KEY_NFC_FORUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.tech.MifareClassic",
			"KEY_NFC_FORUM",
			"[B"
		).object<jbyteArray>();
	}
	jint MifareClassic::SIZE_1K()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_1K"
		);
	}
	jint MifareClassic::SIZE_2K()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_2K"
		);
	}
	jint MifareClassic::SIZE_4K()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_4K"
		);
	}
	jint MifareClassic::SIZE_MINI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_MINI"
		);
	}
	jint MifareClassic::TYPE_CLASSIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_CLASSIC"
		);
	}
	jint MifareClassic::TYPE_PLUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_PLUS"
		);
	}
	jint MifareClassic::TYPE_PRO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_PRO"
		);
	}
	jint MifareClassic::TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	MifareClassic::MifareClassic(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject MifareClassic::get(android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.MifareClassic",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/MifareClassic;",
			arg0.object()
		);
	}
	jboolean MifareClassic::authenticateSectorWithKeyA(jint arg0, jbyteArray arg1)
	{
		return callMethod<jboolean>(
			"authenticateSectorWithKeyA",
			"(I[B)Z",
			arg0,
			arg1
		);
	}
	jboolean MifareClassic::authenticateSectorWithKeyB(jint arg0, jbyteArray arg1)
	{
		return callMethod<jboolean>(
			"authenticateSectorWithKeyB",
			"(I[B)Z",
			arg0,
			arg1
		);
	}
	jint MifareClassic::blockToSector(jint arg0)
	{
		return callMethod<jint>(
			"blockToSector",
			"(I)I",
			arg0
		);
	}
	void MifareClassic::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void MifareClassic::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	void MifareClassic::decrement(jint arg0, jint arg1)
	{
		callMethod<void>(
			"decrement",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint MifareClassic::getBlockCount()
	{
		return callMethod<jint>(
			"getBlockCount",
			"()I"
		);
	}
	jint MifareClassic::getBlockCountInSector(jint arg0)
	{
		return callMethod<jint>(
			"getBlockCountInSector",
			"(I)I",
			arg0
		);
	}
	jint MifareClassic::getMaxTransceiveLength()
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jint MifareClassic::getSectorCount()
	{
		return callMethod<jint>(
			"getSectorCount",
			"()I"
		);
	}
	jint MifareClassic::getSize()
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
	QAndroidJniObject MifareClassic::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint MifareClassic::getTimeout()
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jint MifareClassic::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	void MifareClassic::increment(jint arg0, jint arg1)
	{
		callMethod<void>(
			"increment",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean MifareClassic::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jbyteArray MifareClassic::readBlock(jint arg0)
	{
		return callObjectMethod(
			"readBlock",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	void MifareClassic::restore(jint arg0)
	{
		callMethod<void>(
			"restore",
			"(I)V",
			arg0
		);
	}
	jint MifareClassic::sectorToBlock(jint arg0)
	{
		return callMethod<jint>(
			"sectorToBlock",
			"(I)I",
			arg0
		);
	}
	void MifareClassic::setTimeout(jint arg0)
	{
		callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	jbyteArray MifareClassic::transceive(jbyteArray arg0)
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	void MifareClassic::transfer(jint arg0)
	{
		callMethod<void>(
			"transfer",
			"(I)V",
			arg0
		);
	}
	void MifareClassic::writeBlock(jint arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"writeBlock",
			"(I[B)V",
			arg0,
			arg1
		);
	}
} // namespace android::nfc::tech

