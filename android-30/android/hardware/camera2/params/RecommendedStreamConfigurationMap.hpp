#pragma once

#include "../../../../JObject.hpp"

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
	class RecommendedStreamConfigurationMap : public JObject
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
		
		// QJniObject forward
		template<typename ...Ts> explicit RecommendedStreamConfigurationMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RecommendedStreamConfigurationMap(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getHighResolutionOutputSizes(jint arg0);
		JObject getHighSpeedVideoFpsRanges();
		JObject getHighSpeedVideoFpsRangesFor(android::util::Size arg0);
		JObject getHighSpeedVideoSizes();
		JObject getHighSpeedVideoSizesFor(android::util::Range arg0);
		JObject getInputFormats();
		JObject getInputSizes(jint arg0);
		JObject getOutputFormats();
		jlong getOutputMinFrameDuration(jint arg0, android::util::Size arg1);
		jlong getOutputMinFrameDuration(jclass arg0, android::util::Size arg1);
		JObject getOutputSizes(jint arg0);
		JObject getOutputSizes(jclass arg0);
		jlong getOutputStallDuration(jint arg0, android::util::Size arg1);
		jlong getOutputStallDuration(jclass arg0, android::util::Size arg1);
		jint getRecommendedUseCase();
		JObject getValidOutputFormatsForInput(jint arg0);
		jboolean isOutputSupportedFor(android::view::Surface arg0);
		jboolean isOutputSupportedFor(jint arg0);
	};
} // namespace android::hardware::camera2::params

