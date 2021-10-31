#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::hardware::camera2::params
{
	class MandatoryStreamCombination_MandatoryStreamInformation : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MandatoryStreamCombination_MandatoryStreamInformation(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MandatoryStreamCombination_MandatoryStreamInformation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getAvailableSizes();
		jint getFormat();
		jint hashCode();
		jboolean isInput();
	};
} // namespace android::hardware::camera2::params

