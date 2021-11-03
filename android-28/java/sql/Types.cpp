#include "./Types.hpp"

namespace java::sql
{
	// Fields
	jint Types::ARRAY()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"ARRAY"
		);
	}
	jint Types::BIGINT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"BIGINT"
		);
	}
	jint Types::BINARY()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"BINARY"
		);
	}
	jint Types::BIT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"BIT"
		);
	}
	jint Types::BLOB()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"BLOB"
		);
	}
	jint Types::BOOLEAN()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"BOOLEAN"
		);
	}
	jint Types::CHAR()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"CHAR"
		);
	}
	jint Types::CLOB()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"CLOB"
		);
	}
	jint Types::DATALINK()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"DATALINK"
		);
	}
	jint Types::DATE()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"DATE"
		);
	}
	jint Types::DECIMAL()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"DECIMAL"
		);
	}
	jint Types::DISTINCT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"DISTINCT"
		);
	}
	jint Types::DOUBLE()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"DOUBLE"
		);
	}
	jint Types::FLOAT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"FLOAT"
		);
	}
	jint Types::INTEGER()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"INTEGER"
		);
	}
	jint Types::JAVA_OBJECT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"JAVA_OBJECT"
		);
	}
	jint Types::LONGNVARCHAR()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"LONGNVARCHAR"
		);
	}
	jint Types::LONGVARBINARY()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"LONGVARBINARY"
		);
	}
	jint Types::LONGVARCHAR()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"LONGVARCHAR"
		);
	}
	jint Types::NCHAR()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"NCHAR"
		);
	}
	jint Types::NCLOB()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"NCLOB"
		);
	}
	jint Types::_NULL()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"NULL"
		);
	}
	jint Types::NUMERIC()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"NUMERIC"
		);
	}
	jint Types::NVARCHAR()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"NVARCHAR"
		);
	}
	jint Types::OTHER()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"OTHER"
		);
	}
	jint Types::REAL()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"REAL"
		);
	}
	jint Types::REF()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"REF"
		);
	}
	jint Types::REF_CURSOR()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"REF_CURSOR"
		);
	}
	jint Types::ROWID()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"ROWID"
		);
	}
	jint Types::SMALLINT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"SMALLINT"
		);
	}
	jint Types::SQLXML()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"SQLXML"
		);
	}
	jint Types::STRUCT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"STRUCT"
		);
	}
	jint Types::TIME()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"TIME"
		);
	}
	jint Types::TIMESTAMP()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"TIMESTAMP"
		);
	}
	jint Types::TIMESTAMP_WITH_TIMEZONE()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"TIMESTAMP_WITH_TIMEZONE"
		);
	}
	jint Types::TIME_WITH_TIMEZONE()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"TIME_WITH_TIMEZONE"
		);
	}
	jint Types::TINYINT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"TINYINT"
		);
	}
	jint Types::VARBINARY()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"VARBINARY"
		);
	}
	jint Types::VARCHAR()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"VARCHAR"
		);
	}
	
	// QAndroidJniObject forward
	Types::Types(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::sql

