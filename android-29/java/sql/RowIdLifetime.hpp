#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./RowIdLifetime.def.hpp"

namespace java::sql
{
	// Fields
	inline java::sql::RowIdLifetime RowIdLifetime::ROWID_UNSUPPORTED()
	{
		return getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_UNSUPPORTED",
			"Ljava/sql/RowIdLifetime;"
		);
	}
	inline java::sql::RowIdLifetime RowIdLifetime::ROWID_VALID_FOREVER()
	{
		return getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_FOREVER",
			"Ljava/sql/RowIdLifetime;"
		);
	}
	inline java::sql::RowIdLifetime RowIdLifetime::ROWID_VALID_OTHER()
	{
		return getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_OTHER",
			"Ljava/sql/RowIdLifetime;"
		);
	}
	inline java::sql::RowIdLifetime RowIdLifetime::ROWID_VALID_SESSION()
	{
		return getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_SESSION",
			"Ljava/sql/RowIdLifetime;"
		);
	}
	inline java::sql::RowIdLifetime RowIdLifetime::ROWID_VALID_TRANSACTION()
	{
		return getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_TRANSACTION",
			"Ljava/sql/RowIdLifetime;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::sql::RowIdLifetime RowIdLifetime::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.sql.RowIdLifetime",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/RowIdLifetime;",
			arg0.object<jstring>()
		);
	}
	inline JArray RowIdLifetime::values()
	{
		return callStaticObjectMethod(
			"java.sql.RowIdLifetime",
			"values",
			"()[Ljava/sql/RowIdLifetime;"
		);
	}
} // namespace java::sql

// Base class headers
#include "../lang/Enum.hpp"

