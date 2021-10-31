#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::hardware::camera2::params
{
	class StreamConfigurationMap;
}
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
	class RecommendedStreamConfigurationMap : public __JniBaseClass
	{
	public:
		// Fields
		static jint USECASE_LOW_LATENCY_SNAPSHOT();
		static jint USECASE_PREVIEW();
		static jint USECASE_RAW();
		static jint USECASE_RECORD();
		static jint USECASE_SNAPSHOT();
		static jint USECASE_VIDEO_SNAPSHOT();
		static jint USECASE_ZSL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RecommendedStreamConfigurationMap(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RecommendedStreamConfigurationMap(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getHighResolutionOutputSizes(jint arg0);
		QAndroidJniObject getHighSpeedVideoFpsRanges();
		QAndroidJniObject getHighSpeedVideoFpsRangesFor(android::util::Size arg0);
		QAndroidJniObject getHighSpeedVideoSizes();
		QAndroidJniObject getHighSpeedVideoSizesFor(android::util::Range arg0);
		QAndroidJniObject getInputFormats();
		QAndroidJniObject getInputSizes(jint arg0);
		QAndroidJniObject getOutputFormats();
		jlong getOutputMinFrameDuration(jint arg0, android::util::Size arg1);
		jlong getOutputMinFrameDuration(jclass arg0, android::util::Size arg1);
		QAndroidJniObject getOutputSizes(jint arg0);
		QAndroidJniObject getOutputSizes(jclass arg0);
		jlong getOutputStallDuration(jint arg0, android::util::Size arg1);
		jlong getOutputStallDuration(jclass arg0, android::util::Size arg1);
		jint getRecommendedUseCase();
		QAndroidJniObject getValidOutputFormatsForInput(jint arg0);
		jboolean isOutputSupportedFor(android::view::Surface arg0);
		jboolean isOutputSupportedFor(jint arg0);
	};
} // namespace android::hardware::camera2::params

