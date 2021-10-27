#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"


namespace android::view::inspector
{
	class InspectionCompanion_UninitializedPropertyMapException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		InspectionCompanion_UninitializedPropertyMapException(QAndroidJniObject obj);
		// Constructors
		InspectionCompanion_UninitializedPropertyMapException();
		
		// Methods
	};
} // namespace android::view::inspector

