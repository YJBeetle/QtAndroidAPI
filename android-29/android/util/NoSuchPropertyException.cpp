#include "./NoSuchPropertyException.hpp"

namespace android::util
{
	// Fields
	
	NoSuchPropertyException::NoSuchPropertyException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoSuchPropertyException::NoSuchPropertyException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.NoSuchPropertyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NoSuchPropertyException::NoSuchPropertyException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.NoSuchPropertyException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::util

