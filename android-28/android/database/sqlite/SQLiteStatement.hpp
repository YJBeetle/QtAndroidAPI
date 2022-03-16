#pragma once

#include "../../../JObjectArray.hpp"
#include "./SQLiteDatabase.def.hpp"
#include "../../os/ParcelFileDescriptor.def.hpp"
#include "../../../JString.hpp"
#include "./SQLiteStatement.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void SQLiteStatement::execute() const
	{
		callMethod<void>(
			"execute",
			"()V"
		);
	}
	inline jlong SQLiteStatement::executeInsert() const
	{
		return callMethod<jlong>(
			"executeInsert",
			"()J"
		);
	}
	inline jint SQLiteStatement::executeUpdateDelete() const
	{
		return callMethod<jint>(
			"executeUpdateDelete",
			"()I"
		);
	}
	inline android::os::ParcelFileDescriptor SQLiteStatement::simpleQueryForBlobFileDescriptor() const
	{
		return callObjectMethod(
			"simpleQueryForBlobFileDescriptor",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	inline jlong SQLiteStatement::simpleQueryForLong() const
	{
		return callMethod<jlong>(
			"simpleQueryForLong",
			"()J"
		);
	}
	inline JString SQLiteStatement::simpleQueryForString() const
	{
		return callObjectMethod(
			"simpleQueryForString",
			"()Ljava/lang/String;"
		);
	}
	inline JString SQLiteStatement::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::database::sqlite

// Base class headers
#include "./SQLiteClosable.hpp"
#include "./SQLiteProgram.hpp"

