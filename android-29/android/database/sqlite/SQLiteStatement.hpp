#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITESTATEMENT
#define ANDROID_DATABASE_SQLITE_SQLITESTATEMENT

#include "SQLiteProgram.hpp"

namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabase;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}

namespace __jni_impl::android::database::sqlite
{
	class SQLiteStatement : public __jni_impl::android::database::sqlite::SQLiteProgram
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		void execute();
		jlong executeInsert();
		jint executeUpdateDelete();
		jlong simpleQueryForLong();
		QAndroidJniObject simpleQueryForString();
		QAndroidJniObject simpleQueryForBlobFileDescriptor();
	};
} // namespace __jni_impl::android::database::sqlite

#include "SQLiteDatabase.hpp"
#include "../../os/ParcelFileDescriptor.hpp"

namespace __jni_impl::android::database::sqlite
{
	// Fields
	
	// Constructors
	void SQLiteStatement::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteStatement",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SQLiteStatement::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void SQLiteStatement::execute()
	{
		__thiz.callMethod<void>(
			"execute",
			"()V");
	}
	jlong SQLiteStatement::executeInsert()
	{
		return __thiz.callMethod<jlong>(
			"executeInsert",
			"()J");
	}
	jint SQLiteStatement::executeUpdateDelete()
	{
		return __thiz.callMethod<jint>(
			"executeUpdateDelete",
			"()I");
	}
	jlong SQLiteStatement::simpleQueryForLong()
	{
		return __thiz.callMethod<jlong>(
			"simpleQueryForLong",
			"()J");
	}
	QAndroidJniObject SQLiteStatement::simpleQueryForString()
	{
		return __thiz.callObjectMethod(
			"simpleQueryForString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SQLiteStatement::simpleQueryForBlobFileDescriptor()
	{
		return __thiz.callObjectMethod(
			"simpleQueryForBlobFileDescriptor",
			"()Landroid/os/ParcelFileDescriptor;");
	}
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteStatement : public __jni_impl::android::database::sqlite::SQLiteStatement
	{
	public:
		SQLiteStatement(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteStatement()
		{
			__constructor();
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITESTATEMENT

