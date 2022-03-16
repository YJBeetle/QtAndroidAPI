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
class JObject;
class JString;

namespace android::hardware::camera2::params
{
	class Capability : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Capability(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Capability(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::util::Size getMaxStreamingSize() const;
		jint getMode() const;
		android::util::Range getZoomRatioRange() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::hardware::camera2::params

