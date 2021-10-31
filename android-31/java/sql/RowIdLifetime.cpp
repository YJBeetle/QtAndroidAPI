#include "./RowIdLifetime.hpp"

namespace java::sql
{
	// Fields
	java::sql::RowIdLifetime RowIdLifetime::ROWID_UNSUPPORTED()
	{
		return getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_UNSUPPORTED",
			"Ljava/sql/RowIdLifetime;"
		);
	}
	java::sql::RowIdLifetime RowIdLifetime::ROWID_VALID_FOREVER()
	{
		return getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_FOREVER",
			"Ljava/sql/RowIdLifetime;"
		);
	}
	java::sql::RowIdLifetime RowIdLifetime::ROWID_VALID_OTHER()
	{
		return getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_OTHER",
			"Ljava/sql/RowIdLifetime;"
		);
	}
	java::sql::RowIdLifetime RowIdLifetime::ROWID_VALID_SESSION()
	{
		return getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_SESSION",
			"Ljava/sql/RowIdLifetime;"
		);
	}
	java::sql::RowIdLifetime RowIdLifetime::ROWID_VALID_TRANSACTION()
	{
		return getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_TRANSACTION",
			"Ljava/sql/RowIdLifetime;"
		);
	}
	
	// QAndroidJniObject forward
	RowIdLifetime::RowIdLifetime(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::sql::RowIdLifetime RowIdLifetime::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.sql.RowIdLifetime",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/RowIdLifetime;",
			arg0
		);
	}
	jarray RowIdLifetime::values()
	{
		return callStaticObjectMethod(
			"java.sql.RowIdLifetime",
			"values",
			"()[Ljava/sql/RowIdLifetime;"
		).object<jarray>();
	}
} // namespace java::sql

