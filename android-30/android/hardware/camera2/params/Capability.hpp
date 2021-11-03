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

namespace android::hardware::camera2::params
{
	class Capability : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Capability(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Capability(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		android::util::Size getMaxStreamingSize();
		jint getMode();
		android::util::Range getZoomRatioRange();
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

