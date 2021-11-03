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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputConfiguration(QAndroidJniObject obj);
		
		// Constructors
		InputConfiguration(JObject arg0, jint arg1);
		InputConfiguration(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean equals(JObject arg0);
		jint getFormat();
		jint getHeight();
		jint getWidth();
		jint hashCode();
		jboolean isMultiResolution();
		JString toString();
	};
} // namespace android::hardware::camera2::params

