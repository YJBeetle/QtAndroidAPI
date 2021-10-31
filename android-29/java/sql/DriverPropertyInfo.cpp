#include "./DriverPropertyInfo.hpp"

namespace java::sql
{
	// Fields
	jarray DriverPropertyInfo::choices()
	{
		return getObjectField(
			"choices",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring DriverPropertyInfo::description()
	{
		return getObjectField(
			"description",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DriverPropertyInfo::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean DriverPropertyInfo::required()
	{
		return getField<jboolean>(
			"required"
		);
	}
	jstring DriverPropertyInfo::value()
	{
		return getObjectField(
			"value",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	DriverPropertyInfo::DriverPropertyInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DriverPropertyInfo::DriverPropertyInfo(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"java.sql.DriverPropertyInfo",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::sql

