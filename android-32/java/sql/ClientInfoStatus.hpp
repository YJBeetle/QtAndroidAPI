#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ClientInfoStatus.def.hpp"

namespace java::sql
{
	// Fields
	inline java::sql::ClientInfoStatus ClientInfoStatus::REASON_UNKNOWN()
	{
		return getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_UNKNOWN",
			"Ljava/sql/ClientInfoStatus;"
		);
	}
	inline java::sql::ClientInfoStatus ClientInfoStatus::REASON_UNKNOWN_PROPERTY()
	{
		return getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_UNKNOWN_PROPERTY",
			"Ljava/sql/ClientInfoStatus;"
		);
	}
	inline java::sql::ClientInfoStatus ClientInfoStatus::REASON_VALUE_INVALID()
	{
		return getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_VALUE_INVALID",
			"Ljava/sql/ClientInfoStatus;"
		);
	}
	inline java::sql::ClientInfoStatus ClientInfoStatus::REASON_VALUE_TRUNCATED()
	{
		return getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_VALUE_TRUNCATED",
			"Ljava/sql/ClientInfoStatus;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::sql::ClientInfoStatus ClientInfoStatus::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.sql.ClientInfoStatus",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/ClientInfoStatus;",
			arg0.object<jstring>()
		);
	}
	inline JArray ClientInfoStatus::values()
	{
		return callStaticObjectMethod(
			"java.sql.ClientInfoStatus",
			"values",
			"()[Ljava/sql/ClientInfoStatus;"
		);
	}
} // namespace java::sql

// Base class headers
#include "../lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::sql;
#endif
