#include "./StaleDataException.hpp"

namespace android::database
{
	// Fields
	
	StaleDataException::StaleDataException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StaleDataException::StaleDataException()
	{
		__thiz = QAndroidJniObject(
			"android.database.StaleDataException",
			"()V"
		);
	}
	StaleDataException::StaleDataException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.StaleDataException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	StaleDataException::StaleDataException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.StaleDataException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::database

