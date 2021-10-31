#include "./ContentValues.hpp"
#include "../os/Handler.hpp"
#include "./ContentQueryMap.hpp"

namespace android::content
{
	// Fields
	
	ContentQueryMap::ContentQueryMap(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ContentQueryMap::ContentQueryMap(__JniBaseClass arg0, jstring arg1, jboolean arg2, android::os::Handler arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentQueryMap",
			"(Landroid/database/Cursor;Ljava/lang/String;ZLandroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	void ContentQueryMap::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject ContentQueryMap::getRows()
	{
		return __thiz.callObjectMethod(
			"getRows",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject ContentQueryMap::getValues(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getValues",
			"(Ljava/lang/String;)Landroid/content/ContentValues;",
			arg0
		);
	}
	void ContentQueryMap::requery()
	{
		__thiz.callMethod<void>(
			"requery",
			"()V"
		);
	}
	void ContentQueryMap::setKeepUpdated(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setKeepUpdated",
			"(Z)V",
			arg0
		);
	}
} // namespace android::content

