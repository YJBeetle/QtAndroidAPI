#include "./InspectionCompanion_UninitializedPropertyMapException.hpp"

namespace android::view::inspector
{
	// Fields
	
	InspectionCompanion_UninitializedPropertyMapException::InspectionCompanion_UninitializedPropertyMapException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InspectionCompanion_UninitializedPropertyMapException::InspectionCompanion_UninitializedPropertyMapException()
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.InspectionCompanion$UninitializedPropertyMapException",
			"()V"
		);
	}
	
	// Methods
} // namespace android::view::inspector

