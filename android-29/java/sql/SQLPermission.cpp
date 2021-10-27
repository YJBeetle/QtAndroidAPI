#include "./SQLPermission.hpp"

namespace java::sql
{
	// Fields
	
	SQLPermission::SQLPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLPermission::SQLPermission(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLPermission::SQLPermission(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLPermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	SQLPermission::SQLPermission(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SQLPermission::SQLPermission(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::sql

