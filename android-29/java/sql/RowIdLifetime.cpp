#include "./RowIdLifetime.hpp"

namespace java::sql
{
	// Fields
	QAndroidJniObject RowIdLifetime::ROWID_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_UNSUPPORTED",
			"Ljava/sql/RowIdLifetime;"
		);
	}
	QAndroidJniObject RowIdLifetime::ROWID_VALID_FOREVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_FOREVER",
			"Ljava/sql/RowIdLifetime;"
		);
	}
	QAndroidJniObject RowIdLifetime::ROWID_VALID_OTHER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_OTHER",
			"Ljava/sql/RowIdLifetime;"
		);
	}
	QAndroidJniObject RowIdLifetime::ROWID_VALID_SESSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_SESSION",
			"Ljava/sql/RowIdLifetime;"
		);
	}
	QAndroidJniObject RowIdLifetime::ROWID_VALID_TRANSACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_TRANSACTION",
			"Ljava/sql/RowIdLifetime;"
		);
	}
	
	RowIdLifetime::RowIdLifetime(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject RowIdLifetime::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.RowIdLifetime",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/RowIdLifetime;",
			arg0
		);
	}
	QAndroidJniObject RowIdLifetime::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.RowIdLifetime",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/RowIdLifetime;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray RowIdLifetime::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.RowIdLifetime",
			"values",
			"()[Ljava/sql/RowIdLifetime;"
		).object<jarray>();
	}
} // namespace java::sql

