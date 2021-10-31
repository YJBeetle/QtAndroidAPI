#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::hardware::camera2::params
{
	class OisSample : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OisSample(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		OisSample(QAndroidJniObject obj);
		
		// Constructors
		OisSample(jlong arg0, jfloat arg1, jfloat arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jlong getTimestamp();
		jfloat getXshift();
		jfloat getYshift();
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

