#include "./PropertyMapper_PropertyConflictException.hpp"

namespace android::view::inspector
{
	// Fields
	
	// QJniObject forward
	PropertyMapper_PropertyConflictException::PropertyMapper_PropertyConflictException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	PropertyMapper_PropertyConflictException::PropertyMapper_PropertyConflictException(jstring arg0, jstring arg1, jstring arg2)
		: java::lang::RuntimeException(
			"android.view.inspector.PropertyMapper$PropertyConflictException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::view::inspector

