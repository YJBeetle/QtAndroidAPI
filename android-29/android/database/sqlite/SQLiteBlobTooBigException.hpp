#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteBlobTooBigException : public __jni_impl::android::database::sqlite::SQLiteException
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
	void SQLiteBlobTooBigException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteBlobTooBigException",
			"()V"
		);
	}
	void SQLiteBlobTooBigException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteBlobTooBigException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SQLiteBlobTooBigException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteBlobTooBigException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteBlobTooBigException : public __jni_impl::android::database::sqlite::SQLiteBlobTooBigException
	{
	public:
		SQLiteBlobTooBigException(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteBlobTooBigException()
		{
			__constructor();
		}
		SQLiteBlobTooBigException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database::sqlite

