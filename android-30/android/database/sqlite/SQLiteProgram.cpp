#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./SQLiteProgram.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteProgram::SQLiteProgram(QJniObject obj) : android::database::sqlite::SQLiteClosable(obj) {}
	
	// Constructors
	
	// Methods
	void SQLiteProgram::bindAllArgsAsStrings(JArray arg0) const
	{
		callMethod<void>(
			"bindAllArgsAsStrings",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SQLiteProgram::bindBlob(jint arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"bindBlob",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	void SQLiteProgram::bindDouble(jint arg0, jdouble arg1) const
	{
		callMethod<void>(
			"bindDouble",
			"(ID)V",
			arg0,
			arg1
		);
	}
	void SQLiteProgram::bindLong(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"bindLong",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void SQLiteProgram::bindNull(jint arg0) const
	{
		callMethod<void>(
			"bindNull",
			"(I)V",
			arg0
		);
	}
	void SQLiteProgram::bindString(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"bindString",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void SQLiteProgram::clearBindings() const
	{
		callMethod<void>(
			"clearBindings",
			"()V"
		);
	}
	jint SQLiteProgram::getUniqueId() const
	{
		return callMethod<jint>(
			"getUniqueId",
			"()I"
		);
	}
} // namespace android::database::sqlite

