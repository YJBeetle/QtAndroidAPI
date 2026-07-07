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
		
		// QJniObject forward
		template<typename ...Ts> explicit StreamConfigurationMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StreamConfigurationMap(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jboolean isOutputSupportedFor(JClass arg0);
		jboolean equals(JObject arg0) const;
		JArray getHighResolutionOutputSizes(jint arg0) const;
		JArray getHighSpeedVideoFpsRanges() const;
		JArray getHighSpeedVideoFpsRangesFor(android::util::Size arg0) const;
		JArray getHighSpeedVideoSizes() const;
		JArray getHighSpeedVideoSizesFor(android::util::Range arg0) const;
		JIntArray getInputFormats() const;
		JArray getInputSizes(jint arg0) const;
		JIntArray getOutputFormats() const;
		jlong getOutputMinFrameDuration(jint arg0, android::util::Size arg1) const;
		jlong getOutputMinFrameDuration(JClass arg0, android::util::Size arg1) const;
		JArray getOutputSizes(jint arg0) const;
		JArray getOutputSizes(JClass arg0) const;
		jlong getOutputStallDuration(jint arg0, android::util::Size arg1) const;
		jlong getOutputStallDuration(JClass arg0, android::util::Size arg1) const;
		JIntArray getValidOutputFormatsForInput(jint arg0) const;
		jint hashCode() const;
		jboolean isOutputSupportedFor(android::view::Surface arg0) const;
		jboolean isOutputSupportedFor(jint arg0) const;
		JString toString() const;
	};
} // namespace android::hardware::camera2::params

