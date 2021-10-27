#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./SQLiteClosable.hpp"

namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabase;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}

namespace __jni_impl::android::database::sqlite
{
	class SQLiteProgram : public __jni_impl::android::database::sqlite::SQLiteClosable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void bindAllArgsAsStrings(jarray arg0);
		void bindBlob(jint arg0, jbyteArray arg1);
		void bindDouble(jint arg0, jdouble arg1);
		void bindLong(jint arg0, jlong arg1);
		void bindNull(jint arg0);
		void bindString(jint arg0, jstring arg1);
		void bindString(jint arg0, const QString &arg1);
		void clearBindings();
		jint getUniqueId();
	};
} // namespace __jni_impl::android::database::sqlite

#include "./SQLiteDatabase.hpp"
#include "../../os/CancellationSignal.hpp"

namespace __jni_impl::android::database::sqlite
{
	// Fields
	
	// Constructors
	void SQLiteProgram::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteProgram",
			"(V)V");
	}
	
	// Methods
	void SQLiteProgram::bindAllArgsAsStrings(jarray arg0)
	{
		__thiz.callMethod<void>(
			"bindAllArgsAsStrings",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void SQLiteProgram::bindBlob(jint arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"bindBlob",
			"(I[B)V",
			arg0,
			arg1
		);
	}
	void SQLiteProgram::bindDouble(jint arg0, jdouble arg1)
	{
		__thiz.callMethod<void>(
			"bindDouble",
			"(ID)V",
			arg0,
			arg1
		);
	}
	void SQLiteProgram::bindLong(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"bindLong",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void SQLiteProgram::bindNull(jint arg0)
	{
		__thiz.callMethod<void>(
			"bindNull",
			"(I)V",
			arg0
		);
	}
	void SQLiteProgram::bindString(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"bindString",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void SQLiteProgram::bindString(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"bindString",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void SQLiteProgram::clearBindings()
	{
		__thiz.callMethod<void>(
			"clearBindings",
			"()V"
		);
	}
	jint SQLiteProgram::getUniqueId()
	{
		return __thiz.callMethod<jint>(
			"getUniqueId",
			"()I"
		);
	}
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteProgram : public __jni_impl::android::database::sqlite::SQLiteProgram
	{
	public:
		SQLiteProgram(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteProgram()
		{
			__constructor();
		}
	};
} // namespace android::database::sqlite

