#include "../../../JByteArray.hpp"
#include "../Tag.hpp"
#include "./IsoDep.hpp"

namespace android::nfc::tech
{
	// Fields
	
	// QJniObject forward
	IsoDep::IsoDep(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::tech::IsoDep IsoDep::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.IsoDep",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/IsoDep;",
			arg0.object()
		);
	}
	void IsoDep::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void IsoDep::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	JByteArray IsoDep::getHiLayerResponse() const
	{
		return callObjectMethod(
			"getHiLayerResponse",
			"()[B"
		);
	}
	JByteArray IsoDep::getHistoricalBytes() const
	{
		return callObjectMethod(
			"getHistoricalBytes",
			"()[B"
		);
	}
	jint IsoDep::getMaxTransceiveLength() const
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	android::nfc::Tag IsoDep::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint IsoDep::getTimeout() const
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jboolean IsoDep::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean IsoDep::isExtendedLengthApduSupported() const
	{
		return callMethod<jboolean>(
			"isExtendedLengthApduSupported",
			"()Z"
		);
	}
	void IsoDep::setTimeout(jint arg0) const
	{
		callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	JByteArray IsoDep::transceive(JByteArray arg0) const
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::tech

