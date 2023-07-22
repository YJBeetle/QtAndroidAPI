#pragma once

#include "../../util/Range.def.hpp"
#include "../../util/Size.def.hpp"
#include "../../../JClass.hpp"
#include "./CameraExtensionCharacteristics.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	inline jint CameraExtensionCharacteristics::EXTENSION_AUTOMATIC()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraExtensionCharacteristics",
			"EXTENSION_AUTOMATIC"
		);
	}
	inline jint CameraExtensionCharacteristics::EXTENSION_BEAUTY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraExtensionCharacteristics",
			"EXTENSION_BEAUTY"
		);
	}
	inline jint CameraExtensionCharacteristics::EXTENSION_BOKEH()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraExtensionCharacteristics",
			"EXTENSION_BOKEH"
		);
	}
	inline jint CameraExtensionCharacteristics::EXTENSION_FACE_RETOUCH()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraExtensionCharacteristics",
			"EXTENSION_FACE_RETOUCH"
		);
	}
	inline jint CameraExtensionCharacteristics::EXTENSION_HDR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraExtensionCharacteristics",
			"EXTENSION_HDR"
		);
	}
	inline jint CameraExtensionCharacteristics::EXTENSION_NIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraExtensionCharacteristics",
			"EXTENSION_NIGHT"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject CameraExtensionCharacteristics::getAvailableCaptureRequestKeys(jint arg0) const
	{
		return callObjectMethod(
			"getAvailableCaptureRequestKeys",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
	inline JObject CameraExtensionCharacteristics::getAvailableCaptureResultKeys(jint arg0) const
	{
		return callObjectMethod(
			"getAvailableCaptureResultKeys",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
	inline android::util::Range CameraExtensionCharacteristics::getEstimatedCaptureLatencyRangeMillis(jint arg0, android::util::Size arg1, jint arg2) const
	{
		return callObjectMethod(
			"getEstimatedCaptureLatencyRangeMillis",
			"(ILandroid/util/Size;I)Landroid/util/Range;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	inline JObject CameraExtensionCharacteristics::getExtensionSupportedSizes(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getExtensionSupportedSizes",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	inline JObject CameraExtensionCharacteristics::getExtensionSupportedSizes(jint arg0, JClass arg1) const
	{
		return callObjectMethod(
			"getExtensionSupportedSizes",
			"(ILjava/lang/Class;)Ljava/util/List;",
			arg0,
			arg1.object<jclass>()
		);
	}
	inline JObject CameraExtensionCharacteristics::getSupportedExtensions() const
	{
		return callObjectMethod(
			"getSupportedExtensions",
			"()Ljava/util/List;"
		);
	}
} // namespace android::hardware::camera2

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
