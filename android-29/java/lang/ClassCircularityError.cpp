#include "./ClassCircularityError.hpp"

namespace java::lang
{
	// Fields
	
	ClassCircularityError::ClassCircularityError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClassCircularityError::ClassCircularityError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassCircularityError",
			"()V"
		);
	}
	ClassCircularityError::ClassCircularityError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassCircularityError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ClassCircularityError::ClassCircularityError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassCircularityError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

