#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITEDATABASE_OPENPARAMS
#define ANDROID_DATABASE_SQLITE_SQLITEDATABASE_OPENPARAMS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabase_OpenParams : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getSynchronousMode();
		jint getLookasideSlotSize();
		jint getLookasideSlotCount();
		jint getOpenFlags();
		jlong getIdleConnectionTimeout();
		jstring getJournalMode();
		QAndroidJniObject getErrorHandler();
		QAndroidJniObject getCursorFactory();
	};
} // namespace __jni_impl::android::database::sqlite


namespace __jni_impl::android::database::sqlite
{
	// Fields
	
	// Constructors
	void SQLiteDatabase_OpenParams::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatabase$OpenParams",
			"(V)V");
	}
	
	// Methods
	jstring SQLiteDatabase_OpenParams::getSynchronousMode()
	{
		return __thiz.callObjectMethod(
			"getSynchronousMode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SQLiteDatabase_OpenParams::getLookasideSlotSize()
	{
		return __thiz.callMethod<jint>(
			"getLookasideSlotSize",
			"()I"
		);
	}
	jint SQLiteDatabase_OpenParams::getLookasideSlotCount()
	{
		return __thiz.callMethod<jint>(
			"getLookasideSlotCount",
			"()I"
		);
	}
	jint SQLiteDatabase_OpenParams::getOpenFlags()
	{
		return __thiz.callMethod<jint>(
			"getOpenFlags",
			"()I"
		);
	}
	jlong SQLiteDatabase_OpenParams::getIdleConnectionTimeout()
	{
		return __thiz.callMethod<jlong>(
			"getIdleConnectionTimeout",
			"()J"
		);
	}
	jstring SQLiteDatabase_OpenParams::getJournalMode()
	{
		return __thiz.callObjectMethod(
			"getJournalMode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SQLiteDatabase_OpenParams::getErrorHandler()
	{
		return __thiz.callObjectMethod(
			"getErrorHandler",
			"()Landroid/database/DatabaseErrorHandler;"
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams::getCursorFactory()
	{
		return __thiz.callObjectMethod(
			"getCursorFactory",
			"()Landroid/database/sqlite/SQLiteDatabase$CursorFactory;"
		);
	}
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteDatabase_OpenParams : public __jni_impl::android::database::sqlite::SQLiteDatabase_OpenParams
	{
	public:
		SQLiteDatabase_OpenParams(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteDatabase_OpenParams()
		{
			__constructor();
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITEDATABASE_OPENPARAMS

