#pragma once

#include "../../../../JObject.hpp"

class JObject;
class JString;

namespace android::hardware::camera2::params
{
	class InputConfiguration : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InputConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputConfiguration(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		InputConfiguration(JObject arg0, jint arg1);
		InputConfiguration(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getFormat() const;
		jint getHeight() const;
		jint getWidth() const;
		jint hashCode() const;
		jboolean isMultiResolution() const;
		JString toString() const;
	};
} // namespace android::hardware::camera2::params

