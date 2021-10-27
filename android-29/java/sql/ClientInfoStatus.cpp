#include "./ClientInfoStatus.hpp"

namespace java::sql
{
	// Fields
	QAndroidJniObject ClientInfoStatus::REASON_UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_UNKNOWN",
			"Ljava/sql/ClientInfoStatus;"
		);
	}
	QAndroidJniObject ClientInfoStatus::REASON_UNKNOWN_PROPERTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_UNKNOWN_PROPERTY",
			"Ljava/sql/ClientInfoStatus;"
		);
	}
	QAndroidJniObject ClientInfoStatus::REASON_VALUE_INVALID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_VALUE_INVALID",
			"Ljava/sql/ClientInfoStatus;"
		);
	}
	QAndroidJniObject ClientInfoStatus::REASON_VALUE_TRUNCATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.ClientInfoStatus",
			"REASON_VALUE_TRUNCATED",
			"Ljava/sql/ClientInfoStatus;"
		);
	}
	
	ClientInfoStatus::ClientInfoStatus(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ClientInfoStatus::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.ClientInfoStatus",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/ClientInfoStatus;",
			arg0
		);
	}
	QAndroidJniObject ClientInfoStatus::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.ClientInfoStatus",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/ClientInfoStatus;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray ClientInfoStatus::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.ClientInfoStatus",
			"values",
			"()[Ljava/sql/ClientInfoStatus;"
		).object<jarray>();
	}
} // namespace java::sql

