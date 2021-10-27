#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "SQLiteException.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteDiskIOException : public __jni_impl::android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::database::sqlite


namespace __jni_impl::android::database::sqlite
{
	// Fields
	
	// Constructors
	void SQLiteDiskIOException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDiskIOException",
			"()V"
		);
	}
	void SQLiteDiskIOException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDiskIOException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SQLiteDiskIOException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDiskIOException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteDiskIOException : public __jni_impl::android::database::sqlite::SQLiteDiskIOException
	{
	public:
		SQLiteDiskIOException(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteDiskIOException()
		{
			__constructor();
		}
		SQLiteDiskIOException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database::sqlite

