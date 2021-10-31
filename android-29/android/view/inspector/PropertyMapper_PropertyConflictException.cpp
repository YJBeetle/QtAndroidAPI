#include "./PropertyMapper_PropertyConflictException.hpp"

namespace android::view::inspector
{
	// Fields
	
	PropertyMapper_PropertyConflictException::PropertyMapper_PropertyConflictException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PropertyMapper_PropertyConflictException::PropertyMapper_PropertyConflictException(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.PropertyMapper$PropertyConflictException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace android::view::inspector

