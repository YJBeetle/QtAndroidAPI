#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITECURSOR
#define ANDROID_DATABASE_SQLITE_SQLITECURSOR

#include "../../../__JniBaseClass.hpp"
#include "../AbstractCursor.hpp"
#include "../AbstractWindowedCursor.hpp"

namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabase;
}
namespace __jni_impl::android::database::sqlite
{
	class SQLiteQuery;
}
namespace __jni_impl::android::database
{
	class CursorWindow;
}

namespace __jni_impl::android::database::sqlite
{
	class SQLiteCursor : public __jni_impl::android::database::AbstractWindowedCursor
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, __jni_impl::android::database::sqlite::SQLiteQuery arg3);
		void __constructor(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::database::sqlite::SQLiteQuery arg2);
		
		// Methods
		void close();
		jint getCount();
		jint getColumnIndex(jstring arg0);
		jarray getColumnNames();
		void deactivate();
		jboolean requery();
		jboolean onMove(jint arg0, jint arg1);
		QAndroidJniObject getDatabase();
		void setWindow(__jni_impl::android::database::CursorWindow arg0);
		void setSelectionArguments(jarray arg0);
		void setFillWindowForwardOnly(jboolean arg0);
	};
} // namespace __jni_impl::android::database::sqlite

#include "SQLiteDatabase.hpp"
#include "SQLiteQuery.hpp"
#include "../CursorWindow.hpp"

namespace __jni_impl::android::database::sqlite
{
	// Fields
	
	// Constructors
	void SQLiteCursor::__constructor(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, __jni_impl::android::database::sqlite::SQLiteQuery arg3)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteCursor",
			"(Landroid/database/sqlite/SQLiteDatabase;Landroid/database/sqlite/SQLiteCursorDriver;Ljava/lang/String;Landroid/database/sqlite/SQLiteQuery;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	void SQLiteCursor::__constructor(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::database::sqlite::SQLiteQuery arg2)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteCursor",
			"(Landroid/database/sqlite/SQLiteCursorDriver;Ljava/lang/String;Landroid/database/sqlite/SQLiteQuery;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	
	// Methods
	void SQLiteCursor::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint SQLiteCursor::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jint SQLiteCursor::getColumnIndex(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jarray SQLiteCursor::getColumnNames()
	{
		return __thiz.callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void SQLiteCursor::deactivate()
	{
		__thiz.callMethod<void>(
			"deactivate",
			"()V"
		);
	}
	jboolean SQLiteCursor::requery()
	{
		return __thiz.callMethod<jboolean>(
			"requery",
			"()Z"
		);
	}
	jboolean SQLiteCursor::onMove(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMove",
			"(II)Z",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SQLiteCursor::getDatabase()
	{
		return __thiz.callObjectMethod(
			"getDatabase",
			"()Landroid/database/sqlite/SQLiteDatabase;"
		);
	}
	void SQLiteCursor::setWindow(__jni_impl::android::database::CursorWindow arg0)
	{
		__thiz.callMethod<void>(
			"setWindow",
			"(Landroid/database/CursorWindow;)V",
			arg0.__jniObject().object()
		);
	}
	void SQLiteCursor::setSelectionArguments(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setSelectionArguments",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void SQLiteCursor::setFillWindowForwardOnly(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFillWindowForwardOnly",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteCursor : public __jni_impl::android::database::sqlite::SQLiteCursor
	{
	public:
		SQLiteCursor(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteCursor(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, __jni_impl::android::database::sqlite::SQLiteQuery arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SQLiteCursor(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::database::sqlite::SQLiteQuery arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITECURSOR

