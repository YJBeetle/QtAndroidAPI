#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ClientInfoStatus.hpp"

namespace java::sql
{
	// Fields
	java::sql::ClientInfoStatus ClientInfoStatus::REASON_UNKNOWN()
	{
		return getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_UNKNOWN",
			"Ljava/sql/ClientInfoStatus;"
		);
	}
	java::sql::ClientInfoStatus ClientInfoStatus::REASON_UNKNOWN_PROPERTY()
	{
		return getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_UNKNOWN_PROPERTY",
			"Ljava/sql/ClientInfoStatus;"
		);
	}
	java::sql::ClientInfoStatus ClientInfoStatus::REASON_VALUE_INVALID()
	{
		return getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_VALUE_INVALID",
			"Ljava/sql/ClientInfoStatus;"
		);
	}
	java::sql::ClientInfoStatus ClientInfoStatus::REASON_VALUE_TRUNCATED()
	{
		return getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_VALUE_TRUNCATED",
			"Ljava/sql/ClientInfoStatus;"
		);
	}
	
	// Constructors
	
	// Methods
	java::sql::ClientInfoStatus ClientInfoStatus::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.sql.ClientInfoStatus",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/ClientInfoStatus;",
			arg0.object<jstring>()
		);
	}
	JArray ClientInfoStatus::values()
	{
		return callStaticObjectMethod(
			"java.sql.ClientInfoStatus",
			"values",
			"()[Ljava/sql/ClientInfoStatus;"
		);
	}
} // namespace java::sql

