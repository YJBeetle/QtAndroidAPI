#pragma once

#include "../../../java/lang/RuntimeException.hpp"

namespace android::view::inspector
{
	class InspectionCompanion_UninitializedPropertyMapException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InspectionCompanion_UninitializedPropertyMapException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		InspectionCompanion_UninitializedPropertyMapException(QAndroidJniObject obj);
		
		// Constructors
		InspectionCompanion_UninitializedPropertyMapException();
		
		// Methods
	};
} // namespace android::view::inspector

