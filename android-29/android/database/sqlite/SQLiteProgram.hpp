#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../../JArray.hpp"
#include "./SQLiteDatabase.def.hpp"
#include "../../os/CancellationSignal.def.hpp"
#include "../../../JString.hpp"
#include "./SQLiteProgram.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void SQLiteProgram::bindAllArgsAsStrings(JArray arg0) const
	{
		callMethod<void>(
			"bindAllArgsAsStrings",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void SQLiteProgram::bindBlob(jint arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"bindBlob",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	inline void SQLiteProgram::bindDouble(jint arg0, jdouble arg1) const
	{
		callMethod<void>(
			"bindDouble",
			"(ID)V",
			arg0,
			arg1
		);
	}
	inline void SQLiteProgram::bindLong(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"bindLong",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline void SQLiteProgram::bindNull(jint arg0) const
	{
		callMethod<void>(
			"bindNull",
			"(I)V",
			arg0
		);
	}
	inline void SQLiteProgram::bindString(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"bindString",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void SQLiteProgram::clearBindings() const
	{
		callMethod<void>(
			"clearBindings",
			"()V"
		);
	}
	inline jint SQLiteProgram::getUniqueId() const
	{
		return callMethod<jint>(
			"getUniqueId",
			"()I"
		);
	}
} // namespace android::database::sqlite

// Base class headers
#include "./SQLiteClosable.hpp"

