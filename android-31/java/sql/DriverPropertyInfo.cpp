#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./DriverPropertyInfo.hpp"

namespace java::sql
{
	// Fields
	JArray DriverPropertyInfo::choices()
	{
		return getObjectField(
			"choices",
			"[Ljava/lang/String;"
		);
	}
	JString DriverPropertyInfo::description()
	{
		return getObjectField(
			"description",
			"Ljava/lang/String;"
		);
	}
	JString DriverPropertyInfo::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		);
	}
	jboolean DriverPropertyInfo::required()
	{
		return getField<jboolean>(
			"required"
		);
	}
	JString DriverPropertyInfo::value()
	{
		return getObjectField(
			"value",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	DriverPropertyInfo::DriverPropertyInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DriverPropertyInfo::DriverPropertyInfo(JString arg0, JString arg1)
		: JObject(
			"java.sql.DriverPropertyInfo",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::sql

