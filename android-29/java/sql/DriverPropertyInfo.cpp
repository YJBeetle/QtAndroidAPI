#include "./DriverPropertyInfo.hpp"

namespace java::sql
{
	// Fields
	jarray DriverPropertyInfo::choices()
	{
		return __thiz.getObjectField(
			"choices",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring DriverPropertyInfo::description()
	{
		return __thiz.getObjectField(
			"description",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DriverPropertyInfo::name()
	{
		return __thiz.getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean DriverPropertyInfo::required()
	{
		return __thiz.getField<jboolean>(
			"required"
		);
	}
	jstring DriverPropertyInfo::value()
	{
		return __thiz.getObjectField(
			"value",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	DriverPropertyInfo::DriverPropertyInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DriverPropertyInfo::DriverPropertyInfo(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.DriverPropertyInfo",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	DriverPropertyInfo::DriverPropertyInfo(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.DriverPropertyInfo",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::sql

