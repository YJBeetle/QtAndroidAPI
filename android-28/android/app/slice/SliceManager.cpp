#include "./Slice.hpp"
#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "../../../JString.hpp"
#include "./SliceManager.hpp"

namespace android::app::slice
{
	// Fields
	JString SliceManager::CATEGORY_SLICE()
	{
		return getStaticObjectField(
			"android.app.slice.SliceManager",
			"CATEGORY_SLICE",
			"Ljava/lang/String;"
		);
	}
	JString SliceManager::SLICE_METADATA_KEY()
	{
		return getStaticObjectField(
			"android.app.slice.SliceManager",
			"SLICE_METADATA_KEY",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	SliceManager::SliceManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::app::slice::Slice SliceManager::bindSlice(android::content::Intent arg0, JObject arg1) const
	{
		return callObjectMethod(
			"bindSlice",
			"(Landroid/content/Intent;Ljava/util/Set;)Landroid/app/slice/Slice;",
			arg0.object(),
			arg1.object()
		);
	}
	android::app::slice::Slice SliceManager::bindSlice(android::net::Uri arg0, JObject arg1) const
	{
		return callObjectMethod(
			"bindSlice",
			"(Landroid/net/Uri;Ljava/util/Set;)Landroid/app/slice/Slice;",
			arg0.object(),
			arg1.object()
		);
	}
	jint SliceManager::checkSlicePermission(android::net::Uri arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"checkSlicePermission",
			"(Landroid/net/Uri;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	JObject SliceManager::getPinnedSlices() const
	{
		return callObjectMethod(
			"getPinnedSlices",
			"()Ljava/util/List;"
		);
	}
	JObject SliceManager::getPinnedSpecs(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getPinnedSpecs",
			"(Landroid/net/Uri;)Ljava/util/Set;",
			arg0.object()
		);
	}
	JObject SliceManager::getSliceDescendants(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getSliceDescendants",
			"(Landroid/net/Uri;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	void SliceManager::grantSlicePermission(JString arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"grantSlicePermission",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::net::Uri SliceManager::mapIntentToUri(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"mapIntentToUri",
			"(Landroid/content/Intent;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	void SliceManager::pinSlice(android::net::Uri arg0, JObject arg1) const
	{
		callMethod<void>(
			"pinSlice",
			"(Landroid/net/Uri;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SliceManager::revokeSlicePermission(JString arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"revokeSlicePermission",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void SliceManager::unpinSlice(android::net::Uri arg0) const
	{
		callMethod<void>(
			"unpinSlice",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
} // namespace android::app::slice

