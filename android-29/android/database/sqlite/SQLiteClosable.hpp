#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITECLOSABLE
#define ANDROID_DATABASE_SQLITE_SQLITECLOSABLE

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteClosable : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		void acquireReference();
		void releaseReference();
		void releaseReferenceFromContainer();
	};
} // namespace __jni_impl::android::database::sqlite


namespace __jni_impl::android::database::sqlite
{
	// Fields
	
	// Constructors
	void SQLiteClosable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteClosable",
			"()V");
	}
	
	// Methods
	void SQLiteClosable::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	void SQLiteClosable::acquireReference()
	{
		__thiz.callMethod<void>(
			"acquireReference",
			"()V");
	}
	void SQLiteClosable::releaseReference()
	{
		__thiz.callMethod<void>(
			"releaseReference",
			"()V");
	}
	void SQLiteClosable::releaseReferenceFromContainer()
	{
		__thiz.callMethod<void>(
			"releaseReferenceFromContainer",
			"()V");
	}
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteClosable : public __jni_impl::android::database::sqlite::SQLiteClosable
	{
	public:
		SQLiteClosable(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteClosable()
		{
			__constructor();
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITECLOSABLE

