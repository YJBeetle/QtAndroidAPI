#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./ReplacementTransformationMethod.hpp"


namespace android::text::method
{
	class SingleLineTransformationMethod : public android::text::method::ReplacementTransformationMethod
	{
	public:
		// Fields
		
		SingleLineTransformationMethod(QAndroidJniObject obj);
		// Constructors
		SingleLineTransformationMethod();
		
		// Methods
		static QAndroidJniObject getInstance();
	};
} // namespace android::text::method

