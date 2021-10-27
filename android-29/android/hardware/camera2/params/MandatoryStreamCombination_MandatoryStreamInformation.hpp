#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::hardware::camera2::params
{
	class MandatoryStreamCombination_MandatoryStreamInformation : public __JniBaseClass
	{
	public:
		// Fields
		
		MandatoryStreamCombination_MandatoryStreamInformation(QAndroidJniObject obj);
		// Constructors
		MandatoryStreamCombination_MandatoryStreamInformation() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getAvailableSizes();
		jint getFormat();
		jint hashCode();
		jboolean isInput();
	};
} // namespace android::hardware::camera2::params

