#include "./SQLException.hpp"

namespace android::database
{
	// Fields
	
	SQLException::SQLException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLException::SQLException()
	{
		__thiz = QAndroidJniObject(
			"android.database.SQLException",
			"()V"
		);
	}
	SQLException::SQLException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.SQLException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLException::SQLException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.SQLException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	SQLException::SQLException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.SQLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	SQLException::SQLException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.SQLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace android::database

