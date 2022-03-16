#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./DriverPropertyInfo.def.hpp"

namespace java::sql
{
	// Fields
	inline JArray DriverPropertyInfo::choices()
	{
		return getObjectField(
			"choices",
			"[Ljava/lang/String;"
		);
	}
	inline JString DriverPropertyInfo::description()
	{
		return getObjectField(
			"description",
			"Ljava/lang/String;"
		);
	}
	inline JString DriverPropertyInfo::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		);
	}
	inline jboolean DriverPropertyInfo::required()
	{
		return getField<jboolean>(
			"required"
		);
	}
	inline JString DriverPropertyInfo::value()
	{
		return getObjectField(
			"value",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline DriverPropertyInfo::DriverPropertyInfo(JString arg0, JString arg1)
		: JObject(
			"java.sql.DriverPropertyInfo",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::sql

// Base class headers

