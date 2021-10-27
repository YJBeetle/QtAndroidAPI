#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabase;
}

namespace __jni_impl::android::database
{
	class DatabaseUtils_InsertHelper : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1);
		void __constructor(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1);
		
		// Methods
		void bind(jint arg0, jbyteArray arg1);
		void bind(jint arg0, jboolean arg1);
		void bind(jint arg0, jdouble arg1);
		void bind(jint arg0, jfloat arg1);
		void bind(jint arg0, jint arg1);
		void bind(jint arg0, jstring arg1);
		void bind(jint arg0, const QString &arg1);
		void bind(jint arg0, jlong arg1);
		void bindNull(jint arg0);
		void close();
		jlong execute();
		jint getColumnIndex(jstring arg0);
		jint getColumnIndex(const QString &arg0);
		jlong insert(__jni_impl::android::content::ContentValues arg0);
		void prepareForInsert();
		void prepareForReplace();
		jlong replace(__jni_impl::android::content::ContentValues arg0);
	};
} // namespace __jni_impl::android::database

#include "../content/ContentValues.hpp"
#include "sqlite/SQLiteDatabase.hpp"

namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void DatabaseUtils_InsertHelper::__constructor(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.DatabaseUtils$InsertHelper",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::__constructor(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.DatabaseUtils$InsertHelper",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	void DatabaseUtils_InsertHelper::bind(jint arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(I[B)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jdouble arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(ID)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(II)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bindNull(jint arg0)
	{
		__thiz.callMethod<void>(
			"bindNull",
			"(I)V",
			arg0
		);
	}
	void DatabaseUtils_InsertHelper::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jlong DatabaseUtils_InsertHelper::execute()
	{
		return __thiz.callMethod<jlong>(
			"execute",
			"()J"
		);
	}
	jint DatabaseUtils_InsertHelper::getColumnIndex(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint DatabaseUtils_InsertHelper::getColumnIndex(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jlong DatabaseUtils_InsertHelper::insert(__jni_impl::android::content::ContentValues arg0)
	{
		return __thiz.callMethod<jlong>(
			"insert",
			"(Landroid/content/ContentValues;)J",
			arg0.__jniObject().object()
		);
	}
	void DatabaseUtils_InsertHelper::prepareForInsert()
	{
		__thiz.callMethod<void>(
			"prepareForInsert",
			"()V"
		);
	}
	void DatabaseUtils_InsertHelper::prepareForReplace()
	{
		__thiz.callMethod<void>(
			"prepareForReplace",
			"()V"
		);
	}
	jlong DatabaseUtils_InsertHelper::replace(__jni_impl::android::content::ContentValues arg0)
	{
		return __thiz.callMethod<jlong>(
			"replace",
			"(Landroid/content/ContentValues;)J",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class DatabaseUtils_InsertHelper : public __jni_impl::android::database::DatabaseUtils_InsertHelper
	{
	public:
		DatabaseUtils_InsertHelper(QAndroidJniObject obj) { __thiz = obj; }
		DatabaseUtils_InsertHelper(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::database

