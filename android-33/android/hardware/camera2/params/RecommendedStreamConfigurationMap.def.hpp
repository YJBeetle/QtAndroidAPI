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
class JClass;

namespace android::hardware::camera2::params
{
	class RecommendedStreamConfigurationMap : public JObject
	{
	public:
		// Fields
		static jint USECASE_10BIT_OUTPUT();
		static jint USECASE_LOW_LATENCY_SNAPSHOT();
		static jint USECASE_PREVIEW();
		static jint USECASE_RAW();
		static jint USECASE_RECORD();
		static jint USECASE_SNAPSHOT();
		static jint USECASE_VIDEO_SNAPSHOT();
		static jint USECASE_ZSL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RecommendedStreamConfigurationMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RecommendedStreamConfigurationMap(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getHighResolutionOutputSizes(jint arg0) const;
		JObject getHighSpeedVideoFpsRanges() const;
		JObject getHighSpeedVideoFpsRangesFor(android::util::Size arg0) const;
		JObject getHighSpeedVideoSizes() const;
		JObject getHighSpeedVideoSizesFor(android::util::Range arg0) const;
		JObject getInputFormats() const;
		JObject getInputSizes(jint arg0) const;
		JObject getOutputFormats() const;
		jlong getOutputMinFrameDuration(jint arg0, android::util::Size arg1) const;
		jlong getOutputMinFrameDuration(JClass arg0, android::util::Size arg1) const;
		JObject getOutputSizes(jint arg0) const;
		JObject getOutputSizes(JClass arg0) const;
		jlong getOutputStallDuration(jint arg0, android::util::Size arg1) const;
		jlong getOutputStallDuration(JClass arg0, android::util::Size arg1) const;
		jint getRecommendedUseCase() const;
		JObject getValidOutputFormatsForInput(jint arg0) const;
		jboolean isOutputSupportedFor(android::view::Surface arg0) const;
		jboolean isOutputSupportedFor(jint arg0) const;
	};
} // namespace android::hardware::camera2::params

