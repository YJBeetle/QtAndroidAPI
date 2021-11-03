#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./AsyncTask_Status.hpp"

namespace android::os
{
	// Fields
	android::os::AsyncTask_Status AsyncTask_Status::FINISHED()
	{
		return getStaticObjectField(
			"android.os.AsyncTask$Status",
			"FINISHED",
			"Landroid/os/AsyncTask$Status;"
		);
	}
	android::os::AsyncTask_Status AsyncTask_Status::PENDING()
	{
		return getStaticObjectField(
			"android.os.AsyncTask$Status",
			"PENDING",
			"Landroid/os/AsyncTask$Status;"
		);
	}
	android::os::AsyncTask_Status AsyncTask_Status::RUNNING()
	{
		return getStaticObjectField(
			"android.os.AsyncTask$Status",
			"RUNNING",
			"Landroid/os/AsyncTask$Status;"
		);
	}
	
	// QJniObject forward
	AsyncTask_Status::AsyncTask_Status(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::os::AsyncTask_Status AsyncTask_Status::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.os.AsyncTask$Status",
			"valueOf",
			"(Ljava/lang/String;)Landroid/os/AsyncTask$Status;",
			arg0.object<jstring>()
		);
	}
	JArray AsyncTask_Status::values()
	{
		return callStaticObjectMethod(
			"android.os.AsyncTask$Status",
			"values",
			"()[Landroid/os/AsyncTask$Status;"
		);
	}
} // namespace android::os

