#include "./ContentValues.hpp"
#include "../os/Handler.hpp"
#include "../../JString.hpp"
#include "./ContentQueryMap.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ContentQueryMap::ContentQueryMap(QAndroidJniObject obj) : java::util::Observable(obj) {}
	
	// Constructors
	ContentQueryMap::ContentQueryMap(JObject arg0, JString arg1, jboolean arg2, android::os::Handler arg3)
		: java::util::Observable(
			"android.content.ContentQueryMap",
			"(Landroid/database/Cursor;Ljava/lang/String;ZLandroid/os/Handler;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3.object()
		) {}
	
	// Methods
	void ContentQueryMap::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JObject ContentQueryMap::getRows() const
	{
		return callObjectMethod(
			"getRows",
			"()Ljava/util/Map;"
		);
	}
	android::content::ContentValues ContentQueryMap::getValues(JString arg0) const
	{
		return callObjectMethod(
			"getValues",
			"(Ljava/lang/String;)Landroid/content/ContentValues;",
			arg0.object<jstring>()
		);
	}
	void ContentQueryMap::requery() const
	{
		callMethod<void>(
			"requery",
			"()V"
		);
	}
	void ContentQueryMap::setKeepUpdated(jboolean arg0) const
	{
		callMethod<void>(
			"setKeepUpdated",
			"(Z)V",
			arg0
		);
	}
} // namespace android::content

