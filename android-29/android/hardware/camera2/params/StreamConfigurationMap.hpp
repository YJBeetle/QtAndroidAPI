#pragma once

#include "../../../../JObject.hpp"

class JIntArray;
class JArray;
class JArray;
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
class JObject;
class JString;

namespace android::hardware::camera2::params
{
	class StreamConfigurationMap : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StreamConfigurationMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StreamConfigurationMap(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isOutputSupportedFor(JClass arg0);
		jboolean equals(JObject arg0);
		JArray getHighResolutionOutputSizes(jint arg0);
		JArray getHighSpeedVideoFpsRanges();
		JArray getHighSpeedVideoFpsRangesFor(android::util::Size arg0);
		JArray getHighSpeedVideoSizes();
		JArray getHighSpeedVideoSizesFor(android::util::Range arg0);
		JIntArray getInputFormats();
		JArray getInputSizes(jint arg0);
		JIntArray getOutputFormats();
		jlong getOutputMinFrameDuration(jint arg0, android::util::Size arg1);
		jlong getOutputMinFrameDuration(JClass arg0, android::util::Size arg1);
		JArray getOutputSizes(jint arg0);
		JArray getOutputSizes(JClass arg0);
		jlong getOutputStallDuration(jint arg0, android::util::Size arg1);
		jlong getOutputStallDuration(JClass arg0, android::util::Size arg1);
		JIntArray getValidOutputFormatsForInput(jint arg0);
		jint hashCode();
		jboolean isOutputSupportedFor(android::view::Surface arg0);
		jboolean isOutputSupportedFor(jint arg0);
		JString toString();
	};
} // namespace android::hardware::camera2::params

