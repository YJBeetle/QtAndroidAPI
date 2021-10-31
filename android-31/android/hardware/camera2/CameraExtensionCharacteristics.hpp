#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class CameraExtensionCharacteristics : public __JniBaseClass
	{
	public:
		// Fields
		static jint EXTENSION_AUTOMATIC();
		static jint EXTENSION_BEAUTY();
		static jint EXTENSION_BOKEH();
		static jint EXTENSION_HDR();
		static jint EXTENSION_NIGHT();
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraExtensionCharacteristics(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CameraExtensionCharacteristics(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::util::Range getEstimatedCaptureLatencyRangeMillis(jint arg0, android::util::Size arg1, jint arg2);
		__JniBaseClass getExtensionSupportedSizes(jint arg0, jint arg1);
		__JniBaseClass getExtensionSupportedSizes(jint arg0, jclass arg1);
		__JniBaseClass getSupportedExtensions();
	};
} // namespace android::hardware::camera2

