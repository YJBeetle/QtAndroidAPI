#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./ReplacementTransformationMethod.hpp"


namespace android::text::method
{
	class HideReturnsTransformationMethod : public android::text::method::ReplacementTransformationMethod
	{
	public:
		// Fields
		
		HideReturnsTransformationMethod(QAndroidJniObject obj);
		// Constructors
		HideReturnsTransformationMethod();
		
		// Methods
		static QAndroidJniObject getInstance();
	};
} // namespace android::text::method

