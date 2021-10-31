#include "./PropertyReader_PropertyTypeMismatchException.hpp"

namespace android::view::inspector
{
	// Fields
	
	// QAndroidJniObject forward
	PropertyReader_PropertyTypeMismatchException::PropertyReader_PropertyTypeMismatchException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	PropertyReader_PropertyTypeMismatchException::PropertyReader_PropertyTypeMismatchException(jint arg0, jstring arg1, jstring arg2)
		: java::lang::RuntimeException(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	PropertyReader_PropertyTypeMismatchException::PropertyReader_PropertyTypeMismatchException(jint arg0, jstring arg1, jstring arg2, jstring arg3)
		: java::lang::RuntimeException(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::view::inspector

