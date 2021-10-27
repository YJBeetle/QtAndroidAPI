#pragma once

#include "../../../__JniBaseClass.hpp"
#include "SQLiteClosable.hpp"
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
		void execute();
		jlong executeInsert();
		jint executeUpdateDelete();
		QAndroidJniObject simpleQueryForBlobFileDescriptor();
		jlong simpleQueryForLong();
		jstring simpleQueryForString();
		jstring toString();
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
	void SQLiteStatement::execute()
	{
		__thiz.callMethod<void>(
			"execute",
			"()V"
		);
	}
	jlong SQLiteStatement::executeInsert()
	{
		return __thiz.callMethod<jlong>(
			"executeInsert",
			"()J"
		);
	}
	jint SQLiteStatement::executeUpdateDelete()
	{
		return __thiz.callMethod<jint>(
			"executeUpdateDelete",
			"()I"
		);
	}
	QAndroidJniObject SQLiteStatement::simpleQueryForBlobFileDescriptor()
	{
		return __thiz.callObjectMethod(
			"simpleQueryForBlobFileDescriptor",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	jlong SQLiteStatement::simpleQueryForLong()
	{
		return __thiz.callMethod<jlong>(
			"simpleQueryForLong",
			"()J"
		);
	}
	jstring SQLiteStatement::simpleQueryForString()
	{
		return __thiz.callObjectMethod(
			"simpleQueryForString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SQLiteStatement::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

