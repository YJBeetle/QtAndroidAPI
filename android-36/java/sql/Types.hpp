#pragma once

#include "./Types.def.hpp"

namespace java::sql
{
	// Fields
	inline jint Types::ARRAY()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"ARRAY"
		);
	}
	inline jint Types::BIGINT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"BIGINT"
		);
	}
	inline jint Types::BINARY()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"BINARY"
		);
	}
	inline jint Types::BIT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"BIT"
		);
	}
	inline jint Types::BLOB()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"BLOB"
		);
	}
	inline jint Types::BOOLEAN()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"BOOLEAN"
		);
	}
	inline jint Types::CHAR()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"CHAR"
		);
	}
	inline jint Types::CLOB()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"CLOB"
		);
	}
	inline jint Types::DATALINK()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"DATALINK"
		);
	}
	inline jint Types::DATE()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"DATE"
		);
	}
	inline jint Types::DECIMAL()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"DECIMAL"
		);
	}
	inline jint Types::DISTINCT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"DISTINCT"
		);
	}
	inline jint Types::DOUBLE()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"DOUBLE"
		);
	}
	inline jint Types::FLOAT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"FLOAT"
		);
	}
	inline jint Types::INTEGER()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"INTEGER"
		);
	}
	inline jint Types::JAVA_OBJECT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"JAVA_OBJECT"
		);
	}
	inline jint Types::LONGNVARCHAR()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"LONGNVARCHAR"
		);
	}
	inline jint Types::LONGVARBINARY()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"LONGVARBINARY"
		);
	}
	inline jint Types::LONGVARCHAR()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"LONGVARCHAR"
		);
	}
	inline jint Types::NCHAR()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"NCHAR"
		);
	}
	inline jint Types::NCLOB()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"NCLOB"
		);
	}
	inline jint Types::NULL_()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"NULL"
		);
	}
	inline jint Types::NUMERIC()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"NUMERIC"
		);
	}
	inline jint Types::NVARCHAR()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"NVARCHAR"
		);
	}
	inline jint Types::OTHER()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"OTHER"
		);
	}
	inline jint Types::REAL()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"REAL"
		);
	}
	inline jint Types::REF()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"REF"
		);
	}
	inline jint Types::REF_CURSOR()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"REF_CURSOR"
		);
	}
	inline jint Types::ROWID()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"ROWID"
		);
	}
	inline jint Types::SMALLINT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"SMALLINT"
		);
	}
	inline jint Types::SQLXML()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"SQLXML"
		);
	}
	inline jint Types::STRUCT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"STRUCT"
		);
	}
	inline jint Types::TIME()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"TIME"
		);
	}
	inline jint Types::TIMESTAMP()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"TIMESTAMP"
		);
	}
	inline jint Types::TIMESTAMP_WITH_TIMEZONE()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"TIMESTAMP_WITH_TIMEZONE"
		);
	}
	inline jint Types::TIME_WITH_TIMEZONE()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"TIME_WITH_TIMEZONE"
		);
	}
	inline jint Types::TINYINT()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"TINYINT"
		);
	}
	inline jint Types::VARBINARY()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"VARBINARY"
		);
	}
	inline jint Types::VARCHAR()
	{
		return getStaticField<jint>(
			"java.sql.Types",
			"VARCHAR"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace java::sql

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::sql;
#endif
