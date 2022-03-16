#pragma once

#include "../../../../JObject.hpp"

class JObject;
class JString;

namespace android::hardware::camera2::params
{
	class MultiResolutionStreamInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MultiResolutionStreamInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MultiResolutionStreamInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MultiResolutionStreamInfo(jint arg0, jint arg1, JString arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getHeight() const;
		JString getPhysicalCameraId() const;
		jint getWidth() const;
		jint hashCode() const;
	};
} // namespace android::hardware::camera2::params

