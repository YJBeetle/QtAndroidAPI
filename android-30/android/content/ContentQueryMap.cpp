#include "./ContentValues.hpp"
#include "../os/Handler.hpp"
#include "./ContentQueryMap.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ContentQueryMap::ContentQueryMap(QAndroidJniObject obj) : java::util::Observable(obj) {}
	
	// Constructors
	ContentQueryMap::ContentQueryMap(JObject arg0, jstring arg1, jboolean arg2, android::os::Handler arg3)
		: java::util::Observable(
			"android.content.ContentQueryMap",
			"(Landroid/database/Cursor;Ljava/lang/String;ZLandroid/os/Handler;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	void ContentQueryMap::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JObject ContentQueryMap::getRows()
	{
		return callObjectMethod(
			"getRows",
			"()Ljava/util/Map;"
		);
	}
	android::content::ContentValues ContentQueryMap::getValues(jstring arg0)
	{
		return callObjectMethod(
			"getValues",
			"(Ljava/lang/String;)Landroid/content/ContentValues;",
			arg0
		);
	}
	void ContentQueryMap::requery()
	{
		callMethod<void>(
			"requery",
			"()V"
		);
	}
	void ContentQueryMap::setKeepUpdated(jboolean arg0)
	{
		callMethod<void>(
			"setKeepUpdated",
			"(Z)V",
			arg0
		);
	}
} // namespace android::content

