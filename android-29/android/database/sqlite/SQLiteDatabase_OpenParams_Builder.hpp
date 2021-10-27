#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabase_OpenParams;
}

namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabase_OpenParams_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::database::sqlite::SQLiteDatabase_OpenParams arg0);
		
		// Methods
		QAndroidJniObject addOpenFlags(jint arg0);
		QAndroidJniObject build();
		QAndroidJniObject removeOpenFlags(jint arg0);
		QAndroidJniObject setCursorFactory(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setErrorHandler(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setIdleConnectionTimeout(jlong arg0);
		QAndroidJniObject setJournalMode(jstring arg0);
		QAndroidJniObject setJournalMode(const QString &arg0);
		QAndroidJniObject setLookasideConfig(jint arg0, jint arg1);
		QAndroidJniObject setOpenFlags(jint arg0);
		QAndroidJniObject setSynchronousMode(jstring arg0);
		QAndroidJniObject setSynchronousMode(const QString &arg0);
	};
} // namespace __jni_impl::android::database::sqlite

#include "./SQLiteDatabase_OpenParams.hpp"

namespace __jni_impl::android::database::sqlite
{
	// Fields
	
	// Constructors
	void SQLiteDatabase_OpenParams_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatabase$OpenParams$Builder",
			"()V"
		);
	}
	void SQLiteDatabase_OpenParams_Builder::__constructor(__jni_impl::android::database::sqlite::SQLiteDatabase_OpenParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatabase$OpenParams$Builder",
			"(Landroid/database/sqlite/SQLiteDatabase$OpenParams;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::addOpenFlags(jint arg0)
	{
		return __thiz.callObjectMethod(
			"addOpenFlags",
			"(I)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/database/sqlite/SQLiteDatabase$OpenParams;"
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::removeOpenFlags(jint arg0)
	{
		return __thiz.callObjectMethod(
			"removeOpenFlags",
			"(I)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setCursorFactory(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setCursorFactory",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setErrorHandler(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setErrorHandler",
			"(Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setIdleConnectionTimeout(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setIdleConnectionTimeout",
			"(J)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setJournalMode(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setJournalMode",
			"(Ljava/lang/String;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setJournalMode(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setJournalMode",
			"(Ljava/lang/String;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setLookasideConfig(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setLookasideConfig",
			"(II)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setOpenFlags(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setOpenFlags",
			"(I)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setSynchronousMode(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSynchronousMode",
			"(Ljava/lang/String;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setSynchronousMode(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setSynchronousMode",
			"(Ljava/lang/String;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteDatabase_OpenParams_Builder : public __jni_impl::android::database::sqlite::SQLiteDatabase_OpenParams_Builder
	{
	public:
		SQLiteDatabase_OpenParams_Builder(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteDatabase_OpenParams_Builder()
		{
			__constructor();
		}
		SQLiteDatabase_OpenParams_Builder(__jni_impl::android::database::sqlite::SQLiteDatabase_OpenParams arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database::sqlite

