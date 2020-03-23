#pragma once

#ifndef ANDROID_DATABASE_DEFAULTDATABASEERRORHANDLER
#define ANDROID_DATABASE_DEFAULTDATABASEERRORHANDLER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabase;
}

namespace __jni_impl::android::database
{
	class DefaultDatabaseErrorHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onCorruption(__jni_impl::android::database::sqlite::SQLiteDatabase arg0);
	};
} // namespace __jni_impl::android::database

#include "sqlite/SQLiteDatabase.hpp"

namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void DefaultDatabaseErrorHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.DefaultDatabaseErrorHandler",
			"()V");
	}
	
	// Methods
	void DefaultDatabaseErrorHandler::onCorruption(__jni_impl::android::database::sqlite::SQLiteDatabase arg0)
	{
		__thiz.callMethod<void>(
			"onCorruption",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class DefaultDatabaseErrorHandler : public __jni_impl::android::database::DefaultDatabaseErrorHandler
	{
	public:
		DefaultDatabaseErrorHandler(QAndroidJniObject obj) { __thiz = obj; }
		DefaultDatabaseErrorHandler()
		{
			__constructor();
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_DEFAULTDATABASEERRORHANDLER

