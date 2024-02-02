#pragma once

#include "../../../JObject.hpp"

namespace android::util
{
	class Range;
}
namespace android::util
{
	class Size;
}
class JClass;

namespace android::hardware::camera2
{
	class CameraExtensionCharacteristics : public JObject
	{
	public:
		// Fields
		static jint EXTENSION_AUTOMATIC();
		static jint EXTENSION_BEAUTY();
		static jint EXTENSION_BOKEH();
		static jint EXTENSION_FACE_RETOUCH();
		static jint EXTENSION_HDR();
		static jint EXTENSION_NIGHT();
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraExtensionCharacteristics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraExtensionCharacteristics(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getAvailableCaptureRequestKeys(jint arg0) const;
		JObject getAvailableCaptureResultKeys(jint arg0) const;
		android::util::Range getEstimatedCaptureLatencyRangeMillis(jint arg0, android::util::Size arg1, jint arg2) const;
		JObject getExtensionSupportedSizes(jint arg0, jint arg1) const;
		JObject getExtensionSupportedSizes(jint arg0, JClass arg1) const;
		JObject getPostviewSupportedSizes(jint arg0, android::util::Size arg1, jint arg2) const;
		JObject getSupportedExtensions() const;
		jboolean isCaptureProcessProgressAvailable(jint arg0) const;
		jboolean isPostviewAvailable(jint arg0) const;
	};
} // namespace android::hardware::camera2

