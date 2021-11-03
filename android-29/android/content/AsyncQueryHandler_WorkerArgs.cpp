#include "../../JArray.hpp"
#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "../os/Handler.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AsyncQueryHandler_WorkerArgs.hpp"

namespace android::content
{
	// Fields
	JObject AsyncQueryHandler_WorkerArgs::cookie()
	{
		return getObjectField(
			"cookie",
			"Ljava/lang/Object;"
		);
	}
	android::os::Handler AsyncQueryHandler_WorkerArgs::handler()
	{
		return getObjectField(
			"handler",
			"Landroid/os/Handler;"
		);
	}
	JString AsyncQueryHandler_WorkerArgs::orderBy()
	{
		return getObjectField(
			"orderBy",
			"Ljava/lang/String;"
		);
	}
	JArray AsyncQueryHandler_WorkerArgs::projection()
	{
		return getObjectField(
			"projection",
			"[Ljava/lang/String;"
		);
	}
	JObject AsyncQueryHandler_WorkerArgs::result()
	{
		return getObjectField(
			"result",
			"Ljava/lang/Object;"
		);
	}
	JString AsyncQueryHandler_WorkerArgs::selection()
	{
		return getObjectField(
			"selection",
			"Ljava/lang/String;"
		);
	}
	JArray AsyncQueryHandler_WorkerArgs::selectionArgs()
	{
		return getObjectField(
			"selectionArgs",
			"[Ljava/lang/String;"
		);
	}
	android::net::Uri AsyncQueryHandler_WorkerArgs::uri()
	{
		return getObjectField(
			"uri",
			"Landroid/net/Uri;"
		);
	}
	android::content::ContentValues AsyncQueryHandler_WorkerArgs::values()
	{
		return getObjectField(
			"values",
			"Landroid/content/ContentValues;"
		);
	}
	
	// QAndroidJniObject forward
	AsyncQueryHandler_WorkerArgs::AsyncQueryHandler_WorkerArgs(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::content

