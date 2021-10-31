#include "./SQLiteDatabase.hpp"
#include "../../os/CancellationSignal.hpp"
#include "./SQLiteProgram.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteProgram::SQLiteProgram(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
} // namespace android::database::sqlite

