#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::hardware::camera2::params
{
	class InputConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InputConfiguration(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InputConfiguration(QJniObject obj);
		
		// Constructors
		InputConfiguration(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getFormat();
		jint getHeight();
		jint getWidth();
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

