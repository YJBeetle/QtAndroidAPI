#include "./Types.hpp"

namespace java::sql
{
	// Fields
	jint Types::ARRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"ARRAY"
		);
	}
	jint Types::BIGINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"BIGINT"
		);
	}
	jint Types::BINARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"BINARY"
		);
	}
	jint Types::BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"BIT"
		);
	}
	jint Types::BLOB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"BLOB"
		);
	}
	jint Types::BOOLEAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"BOOLEAN"
		);
	}
	jint Types::CHAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"CHAR"
		);
	}
	jint Types::CLOB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"CLOB"
		);
	}
	jint Types::DATALINK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"DATALINK"
		);
	}
	jint Types::DATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"DATE"
		);
	}
	jint Types::DECIMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"DECIMAL"
		);
	}
	jint Types::DISTINCT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"DISTINCT"
		);
	}
	jint Types::DOUBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"DOUBLE"
		);
	}
	jint Types::FLOAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"FLOAT"
		);
	}
	jint Types::INTEGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"INTEGER"
		);
	}
	jint Types::JAVA_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"JAVA_OBJECT"
		);
	}
	jint Types::LONGNVARCHAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"LONGNVARCHAR"
		);
	}
	jint Types::LONGVARBINARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"LONGVARBINARY"
		);
	}
	jint Types::LONGVARCHAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"LONGVARCHAR"
		);
	}
	jint Types::NCHAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"NCHAR"
		);
	}
	jint Types::NCLOB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"NCLOB"
		);
	}
	jint Types::_NULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"NULL"
		);
	}
	jint Types::NUMERIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"NUMERIC"
		);
	}
	jint Types::NVARCHAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"NVARCHAR"
		);
	}
	jint Types::OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"OTHER"
		);
	}
	jint Types::REAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"REAL"
		);
	}
	jint Types::REF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"REF"
		);
	}
	jint Types::REF_CURSOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"REF_CURSOR"
		);
	}
	jint Types::ROWID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"ROWID"
		);
	}
	jint Types::SMALLINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"SMALLINT"
		);
	}
	jint Types::SQLXML()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"SQLXML"
		);
	}
	jint Types::STRUCT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"STRUCT"
		);
	}
	jint Types::TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"TIME"
		);
	}
	jint Types::TIMESTAMP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"TIMESTAMP"
		);
	}
	jint Types::TIMESTAMP_WITH_TIMEZONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"TIMESTAMP_WITH_TIMEZONE"
		);
	}
	jint Types::TIME_WITH_TIMEZONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"TIME_WITH_TIMEZONE"
		);
	}
	jint Types::TINYINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"TINYINT"
		);
	}
	jint Types::VARBINARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"VARBINARY"
		);
	}
	jint Types::VARCHAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.sql.Types",
			"VARCHAR"
		);
	}
	
	// QAndroidJniObject forward
	Types::Types(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::sql

