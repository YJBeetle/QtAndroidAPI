#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class Build_Partition : public __JniBaseClass
	{
	public:
		// Fields
		static jstring PARTITION_NAME_SYSTEM();
		
		Build_Partition(QAndroidJniObject obj);
		// Constructors
		Build_Partition() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jlong getBuildTimeMillis();
		jstring getFingerprint();
		jstring getName();
		jint hashCode();
	};
} // namespace android::os

