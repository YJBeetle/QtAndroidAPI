#include "../../../JByteArray.hpp"
#include "../Tag.hpp"
#include "./MifareUltralight.hpp"

namespace android::nfc::tech
{
	// Fields
	jint MifareUltralight::PAGE_SIZE_()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"PAGE_SIZE"
		);
	}
	jint MifareUltralight::TYPE_ULTRALIGHT()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"TYPE_ULTRALIGHT"
		);
	}
	jint MifareUltralight::TYPE_ULTRALIGHT_C()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"TYPE_ULTRALIGHT_C"
		);
	}
	jint MifareUltralight::TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"TYPE_UNKNOWN"
		);
	}
	
	// QJniObject forward
	MifareUltralight::MifareUltralight(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::tech::MifareUltralight MifareUltralight::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.MifareUltralight",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/MifareUltralight;",
			arg0.object()
		);
	}
	void MifareUltralight::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void MifareUltralight::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	jint MifareUltralight::getMaxTransceiveLength() const
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	android::nfc::Tag MifareUltralight::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint MifareUltralight::getTimeout() const
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jint MifareUltralight::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jboolean MifareUltralight::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	JByteArray MifareUltralight::readPages(jint arg0) const
	{
		return callObjectMethod(
			"readPages",
			"(I)[B",
			arg0
		);
	}
	void MifareUltralight::setTimeout(jint arg0) const
	{
		callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	JByteArray MifareUltralight::transceive(JByteArray arg0) const
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	void MifareUltralight::writePage(jint arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"writePage",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
} // namespace android::nfc::tech

