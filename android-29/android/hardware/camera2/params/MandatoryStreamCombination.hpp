#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::hardware::camera2::params
{
	class MandatoryStreamCombination : public __JniBaseClass
	{
	public:
		// Fields
		
		MandatoryStreamCombination(QAndroidJniObject obj);
		// Constructors
		MandatoryStreamCombination() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getDescription();
		QAndroidJniObject getStreamsInformation();
		jint hashCode();
		jboolean isReprocessable();
	};
} // namespace android::hardware::camera2::params

