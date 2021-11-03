#include "./Slice.hpp"
#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "./SliceManager.hpp"

namespace android::app::slice
{
	// Fields
	jstring SliceManager::CATEGORY_SLICE()
	{
		return getStaticObjectField(
			"android.app.slice.SliceManager",
			"CATEGORY_SLICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceManager::SLICE_METADATA_KEY()
	{
		return getStaticObjectField(
			"android.app.slice.SliceManager",
			"SLICE_METADATA_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	SliceManager::SliceManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::app::slice::Slice SliceManager::bindSlice(android::content::Intent arg0, JObject arg1)
	{
		return callObjectMethod(
			"bindSlice",
			"(Landroid/content/Intent;Ljava/util/Set;)Landroid/app/slice/Slice;",
			arg0.object(),
			arg1.object()
		);
	}
	android::app::slice::Slice SliceManager::bindSlice(android::net::Uri arg0, JObject arg1)
	{
		return callObjectMethod(
			"bindSlice",
			"(Landroid/net/Uri;Ljava/util/Set;)Landroid/app/slice/Slice;",
			arg0.object(),
			arg1.object()
		);
	}
	jint SliceManager::checkSlicePermission(android::net::Uri arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"checkSlicePermission",
			"(Landroid/net/Uri;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	JObject SliceManager::getPinnedSlices()
	{
		return callObjectMethod(
			"getPinnedSlices",
			"()Ljava/util/List;"
		);
	}
	JObject SliceManager::getPinnedSpecs(android::net::Uri arg0)
	{
		return callObjectMethod(
			"getPinnedSpecs",
			"(Landroid/net/Uri;)Ljava/util/Set;",
			arg0.object()
		);
	}
	JObject SliceManager::getSliceDescendants(android::net::Uri arg0)
	{
		return callObjectMethod(
			"getSliceDescendants",
			"(Landroid/net/Uri;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	void SliceManager::grantSlicePermission(jstring arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"grantSlicePermission",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	android::net::Uri SliceManager::mapIntentToUri(android::content::Intent arg0)
	{
		return callObjectMethod(
			"mapIntentToUri",
			"(Landroid/content/Intent;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	void SliceManager::pinSlice(android::net::Uri arg0, JObject arg1)
	{
		callMethod<void>(
			"pinSlice",
			"(Landroid/net/Uri;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SliceManager::revokeSlicePermission(jstring arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"revokeSlicePermission",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	void SliceManager::unpinSlice(android::net::Uri arg0)
	{
		callMethod<void>(
			"unpinSlice",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
} // namespace android::app::slice

