#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "../os/Handler.hpp"
#include "./AsyncQueryHandler_WorkerArgs.hpp"

namespace android::content
{
	// Fields
	jobject AsyncQueryHandler_WorkerArgs::cookie()
	{
		return __thiz.getObjectField(
			"cookie",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject AsyncQueryHandler_WorkerArgs::handler()
	{
		return __thiz.getObjectField(
			"handler",
			"Landroid/os/Handler;"
		);
	}
	jstring AsyncQueryHandler_WorkerArgs::orderBy()
	{
		return __thiz.getObjectField(
			"orderBy",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jarray AsyncQueryHandler_WorkerArgs::projection()
	{
		return __thiz.getObjectField(
			"projection",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jobject AsyncQueryHandler_WorkerArgs::result()
	{
		return __thiz.getObjectField(
			"result",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring AsyncQueryHandler_WorkerArgs::selection()
	{
		return __thiz.getObjectField(
			"selection",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jarray AsyncQueryHandler_WorkerArgs::selectionArgs()
	{
		return __thiz.getObjectField(
			"selectionArgs",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject AsyncQueryHandler_WorkerArgs::uri()
	{
		return __thiz.getObjectField(
			"uri",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject AsyncQueryHandler_WorkerArgs::values()
	{
		return __thiz.getObjectField(
			"values",
			"Landroid/content/ContentValues;"
		);
	}
	
	AsyncQueryHandler_WorkerArgs::AsyncQueryHandler_WorkerArgs(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::content

