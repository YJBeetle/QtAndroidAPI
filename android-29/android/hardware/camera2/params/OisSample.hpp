#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::hardware::camera2::params
{
	class OisSample : public __JniBaseClass
	{
	public:
		// Fields
		
		OisSample(QAndroidJniObject obj);
		// Constructors
		OisSample(jlong arg0, jfloat arg1, jfloat arg2);
		OisSample() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jlong getTimestamp();
		jfloat getXshift();
		jfloat getYshift();
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

