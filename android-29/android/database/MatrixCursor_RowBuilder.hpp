#pragma once

#include "./MatrixCursor.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MatrixCursor_RowBuilder.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::database::MatrixCursor_RowBuilder MatrixCursor_RowBuilder::add(JObject arg0) const
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;",
			arg0.object<jobject>()
		);
	}
	inline android::database::MatrixCursor_RowBuilder MatrixCursor_RowBuilder::add(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
} // namespace android::database

// Base class headers

