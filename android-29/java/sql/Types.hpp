#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::sql
{
	class Types : public __JniBaseClass
	{
	public:
		// Fields
		static jint ARRAY();
		static jint BIGINT();
		static jint BINARY();
		static jint BIT();
		static jint BLOB();
		static jint BOOLEAN();
		static jint CHAR();
		static jint CLOB();
		static jint DATALINK();
		static jint DATE();
		static jint DECIMAL();
		static jint DISTINCT();
		static jint DOUBLE();
		static jint FLOAT();
		static jint INTEGER();
		static jint JAVA_OBJECT();
		static jint LONGNVARCHAR();
		static jint LONGVARBINARY();
		static jint LONGVARCHAR();
		static jint NCHAR();
		static jint NCLOB();
		static jint NULL();
		static jint NUMERIC();
		static jint NVARCHAR();
		static jint OTHER();
		static jint REAL();
		static jint REF();
		static jint REF_CURSOR();
		static jint ROWID();
		static jint SMALLINT();
		static jint SQLXML();
		static jint STRUCT();
		static jint TIME();
		static jint TIMESTAMP();
		static jint TIMESTAMP_WITH_TIMEZONE();
		static jint TIME_WITH_TIMEZONE();
		static jint TINYINT();
		static jint VARBINARY();
		static jint VARCHAR();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::sql


namespace __jni_impl::java::sql
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
	jint Types::NULL()
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
	
	// Constructors
	void Types::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.sql.Types",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class Types : public __jni_impl::java::sql::Types
	{
	public:
		Types(QAndroidJniObject obj) { __thiz = obj; }
		Types()
		{
			__constructor();
		}
	};
} // namespace java::sql

