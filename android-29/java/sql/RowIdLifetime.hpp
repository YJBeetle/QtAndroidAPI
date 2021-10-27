#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace __jni_impl::java::sql
{
	class RowIdLifetime : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ROWID_UNSUPPORTED();
		static QAndroidJniObject ROWID_VALID_FOREVER();
		static QAndroidJniObject ROWID_VALID_OTHER();
		static QAndroidJniObject ROWID_VALID_SESSION();
		static QAndroidJniObject ROWID_VALID_TRANSACTION();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
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
	
	// Constructors
	void RowIdLifetime::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.sql.RowIdLifetime",
			"(V)V");
	}
	
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

