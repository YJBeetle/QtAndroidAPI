#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "../os/Handler.hpp"
#include "./AsyncQueryHandler_WorkerArgs.hpp"

namespace android::content
{
	// Fields
	jobject AsyncQueryHandler_WorkerArgs::cookie()
	{
		return getObjectField(
			"cookie",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	android::os::Handler AsyncQueryHandler_WorkerArgs::handler()
	{
		return getObjectField(
			"handler",
			"Landroid/os/Handler;"
		);
	}
	jstring AsyncQueryHandler_WorkerArgs::orderBy()
	{
		return getObjectField(
			"orderBy",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jarray AsyncQueryHandler_WorkerArgs::projection()
	{
		return getObjectField(
			"projection",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jobject AsyncQueryHandler_WorkerArgs::result()
	{
		return getObjectField(
			"result",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring AsyncQueryHandler_WorkerArgs::selection()
	{
		return getObjectField(
			"selection",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jarray AsyncQueryHandler_WorkerArgs::selectionArgs()
	{
		return getObjectField(
			"selectionArgs",
			"[Ljava/lang/String;"
		).object<jarray>();
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
	AsyncQueryHandler_WorkerArgs::AsyncQueryHandler_WorkerArgs(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::content

