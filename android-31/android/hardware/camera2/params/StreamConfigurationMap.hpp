#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::util
{
	class Range;
}
namespace android::util
{
	class Size;
}
namespace android::view
{
	class Surface;
}

namespace android::hardware::camera2::params
{
	class StreamConfigurationMap : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StreamConfigurationMap(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StreamConfigurationMap(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isOutputSupportedFor(jclass arg0);
		jboolean equals(jobject arg0);
		jarray getHighResolutionOutputSizes(jint arg0);
		jarray getHighSpeedVideoFpsRanges();
		jarray getHighSpeedVideoFpsRangesFor(android::util::Size arg0);
		jarray getHighSpeedVideoSizes();
		jarray getHighSpeedVideoSizesFor(android::util::Range arg0);
		jintArray getInputFormats();
		jarray getInputSizes(jint arg0);
		jintArray getOutputFormats();
		jlong getOutputMinFrameDuration(jint arg0, android::util::Size arg1);
		jlong getOutputMinFrameDuration(jclass arg0, android::util::Size arg1);
		jarray getOutputSizes(jint arg0);
		jarray getOutputSizes(jclass arg0);
		jlong getOutputStallDuration(jint arg0, android::util::Size arg1);
		jlong getOutputStallDuration(jclass arg0, android::util::Size arg1);
		jintArray getValidOutputFormatsForInput(jint arg0);
		jint hashCode();
		jboolean isOutputSupportedFor(android::view::Surface arg0);
		jboolean isOutputSupportedFor(jint arg0);
		jstring toString();
	};
} // namespace android::hardware::camera2::params

