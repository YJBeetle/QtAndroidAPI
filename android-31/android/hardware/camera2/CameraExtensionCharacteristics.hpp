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

namespace android::hardware::camera2
{
	class CameraExtensionCharacteristics : public JObject
	{
	public:
		// Fields
		static jint EXTENSION_AUTOMATIC();
		static jint EXTENSION_BEAUTY();
		static jint EXTENSION_BOKEH();
		static jint EXTENSION_HDR();
		static jint EXTENSION_NIGHT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraExtensionCharacteristics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraExtensionCharacteristics(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::util::Range getEstimatedCaptureLatencyRangeMillis(jint arg0, android::util::Size arg1, jint arg2);
		JObject getExtensionSupportedSizes(jint arg0, jint arg1);
		JObject getExtensionSupportedSizes(jint arg0, jclass arg1);
		JObject getSupportedExtensions();
	};
} // namespace android::hardware::camera2

