#pragma once

#ifndef JAVA_SQL_ROWIDLIFETIME
#define JAVA_SQL_ROWIDLIFETIME

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace __jni_impl::java::sql
{
	class RowIdLifetime : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ROWID_UNSUPPORTED();
		static QAndroidJniObject ROWID_VALID_OTHER();
		static QAndroidJniObject ROWID_VALID_SESSION();
		static QAndroidJniObject ROWID_VALID_TRANSACTION();
		static QAndroidJniObject ROWID_VALID_FOREVER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::java::sql


namespace __jni_impl::java::sql
{
	// Fields
	QAndroidJniObject RowIdLifetime::ROWID_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_UNSUPPORTED",
			"Ljava/sql/RowIdLifetime;");
	}
	QAndroidJniObject RowIdLifetime::ROWID_VALID_OTHER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_OTHER",
			"Ljava/sql/RowIdLifetime;");
	}
	QAndroidJniObject RowIdLifetime::ROWID_VALID_SESSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_SESSION",
			"Ljava/sql/RowIdLifetime;");
	}
	QAndroidJniObject RowIdLifetime::ROWID_VALID_TRANSACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_TRANSACTION",
			"Ljava/sql/RowIdLifetime;");
	}
	QAndroidJniObject RowIdLifetime::ROWID_VALID_FOREVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.sql.RowIdLifetime",
			"ROWID_VALID_FOREVER",
			"Ljava/sql/RowIdLifetime;");
	}
	
	// Constructors
	void RowIdLifetime::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.sql.RowIdLifetime",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject RowIdLifetime::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.RowIdLifetime",
			"values",
			"()[Ljava/sql/RowIdLifetime;");
	}
	QAndroidJniObject RowIdLifetime::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.RowIdLifetime",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/RowIdLifetime;",
			arg0);
	}
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class RowIdLifetime : public __jni_impl::java::sql::RowIdLifetime
	{
	public:
		RowIdLifetime(QAndroidJniObject obj) { __thiz = obj; }
		RowIdLifetime()
		{
			__constructor();
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_ROWIDLIFETIME

