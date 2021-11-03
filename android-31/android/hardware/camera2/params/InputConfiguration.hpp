#pragma once

#include "../../../../JObject.hpp"


namespace android::hardware::camera2::params
{
	class InputConfiguration : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InputConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputConfiguration(QJniObject obj);
		
		// Constructors
		InputConfiguration(JObject arg0, jint arg1);
		InputConfiguration(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getFormat();
		jint getHeight();
		jint getWidth();
		jint hashCode();
		jboolean isMultiResolution();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

