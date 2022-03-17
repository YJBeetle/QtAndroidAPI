#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./AsyncTask_Status.def.hpp"

namespace android::os
{
	// Fields
	inline android::os::AsyncTask_Status AsyncTask_Status::FINISHED()
	{
		return getStaticObjectField(
			"android.os.AsyncTask$Status",
			"FINISHED",
			"Landroid/os/AsyncTask$Status;"
		);
	}
	inline android::os::AsyncTask_Status AsyncTask_Status::PENDING()
	{
		return getStaticObjectField(
			"android.os.AsyncTask$Status",
			"PENDING",
			"Landroid/os/AsyncTask$Status;"
		);
	}
	inline android::os::AsyncTask_Status AsyncTask_Status::RUNNING()
	{
		return getStaticObjectField(
			"android.os.AsyncTask$Status",
			"RUNNING",
			"Landroid/os/AsyncTask$Status;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::os::AsyncTask_Status AsyncTask_Status::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.os.AsyncTask$Status",
			"valueOf",
			"(Ljava/lang/String;)Landroid/os/AsyncTask$Status;",
			arg0.object<jstring>()
		);
	}
	inline JArray AsyncTask_Status::values()
	{
		return callStaticObjectMethod(
			"android.os.AsyncTask$Status",
			"values",
			"()[Landroid/os/AsyncTask$Status;"
		);
	}
} // namespace android::os

// Base class headers
#include "../../java/lang/Enum.hpp"

