#include "../../util/Range.hpp"
#include "../../util/Size.hpp"
#include "./CameraExtensionCharacteristics.hpp"

namespace android::hardware::camera2
{
	// Fields
	jint CameraExtensionCharacteristics::EXTENSION_AUTOMATIC()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraExtensionCharacteristics",
			"EXTENSION_AUTOMATIC"
		);
	}
	jint CameraExtensionCharacteristics::EXTENSION_BEAUTY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraExtensionCharacteristics",
			"EXTENSION_BEAUTY"
		);
	}
	jint CameraExtensionCharacteristics::EXTENSION_BOKEH()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraExtensionCharacteristics",
			"EXTENSION_BOKEH"
		);
	}
	jint CameraExtensionCharacteristics::EXTENSION_HDR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraExtensionCharacteristics",
			"EXTENSION_HDR"
		);
	}
	jint CameraExtensionCharacteristics::EXTENSION_NIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraExtensionCharacteristics",
			"EXTENSION_NIGHT"
		);
	}
	
	// QJniObject forward
	CameraExtensionCharacteristics::CameraExtensionCharacteristics(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::util::Range CameraExtensionCharacteristics::getEstimatedCaptureLatencyRangeMillis(jint arg0, android::util::Size arg1, jint arg2)
	{
		return callObjectMethod(
			"getEstimatedCaptureLatencyRangeMillis",
			"(ILandroid/util/Size;I)Landroid/util/Range;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	JObject CameraExtensionCharacteristics::getExtensionSupportedSizes(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getExtensionSupportedSizes",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	JObject CameraExtensionCharacteristics::getExtensionSupportedSizes(jint arg0, jclass arg1)
	{
		return callObjectMethod(
			"getExtensionSupportedSizes",
			"(ILjava/lang/Class;)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	JObject CameraExtensionCharacteristics::getSupportedExtensions()
	{
		return callObjectMethod(
			"getSupportedExtensions",
			"()Ljava/util/List;"
		);
	}
} // namespace android::hardware::camera2

