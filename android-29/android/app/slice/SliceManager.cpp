#include "./Slice.hpp"
#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "./SliceManager.hpp"

namespace android::app::slice
{
	// Fields
	jstring SliceManager::CATEGORY_SLICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceManager",
			"CATEGORY_SLICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceManager::SLICE_METADATA_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceManager",
			"SLICE_METADATA_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	SliceManager::SliceManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SliceManager::bindSlice(android::content::Intent arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"bindSlice",
			"(Landroid/content/Intent;Ljava/util/Set;)Landroid/app/slice/Slice;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SliceManager::bindSlice(android::net::Uri arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"bindSlice",
			"(Landroid/net/Uri;Ljava/util/Set;)Landroid/app/slice/Slice;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint SliceManager::checkSlicePermission(android::net::Uri arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"checkSlicePermission",
			"(Landroid/net/Uri;II)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject SliceManager::getPinnedSlices()
	{
		return __thiz.callObjectMethod(
			"getPinnedSlices",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SliceManager::getPinnedSpecs(android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getPinnedSpecs",
			"(Landroid/net/Uri;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SliceManager::getSliceDescendants(android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getSliceDescendants",
			"(Landroid/net/Uri;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	void SliceManager::grantSlicePermission(jstring arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"grantSlicePermission",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SliceManager::grantSlicePermission(const QString &arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"grantSlicePermission",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SliceManager::mapIntentToUri(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"mapIntentToUri",
			"(Landroid/content/Intent;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	void SliceManager::pinSlice(android::net::Uri arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"pinSlice",
			"(Landroid/net/Uri;Ljava/util/Set;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SliceManager::revokeSlicePermission(jstring arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"revokeSlicePermission",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SliceManager::revokeSlicePermission(const QString &arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"revokeSlicePermission",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void SliceManager::unpinSlice(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"unpinSlice",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app::slice

