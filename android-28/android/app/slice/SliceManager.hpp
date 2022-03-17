#pragma once

#include "./Slice.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../../JString.hpp"
#include "./SliceManager.def.hpp"

namespace android::app::slice
{
	// Fields
	inline JString SliceManager::CATEGORY_SLICE()
	{
		return getStaticObjectField(
			"android.app.slice.SliceManager",
			"CATEGORY_SLICE",
			"Ljava/lang/String;"
		);
	}
	inline JString SliceManager::SLICE_METADATA_KEY()
	{
		return getStaticObjectField(
			"android.app.slice.SliceManager",
			"SLICE_METADATA_KEY",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::app::slice::Slice SliceManager::bindSlice(android::content::Intent arg0, JObject arg1) const
	{
		return callObjectMethod(
			"bindSlice",
			"(Landroid/content/Intent;Ljava/util/Set;)Landroid/app/slice/Slice;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::app::slice::Slice SliceManager::bindSlice(android::net::Uri arg0, JObject arg1) const
	{
		return callObjectMethod(
			"bindSlice",
			"(Landroid/net/Uri;Ljava/util/Set;)Landroid/app/slice/Slice;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint SliceManager::checkSlicePermission(android::net::Uri arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"checkSlicePermission",
			"(Landroid/net/Uri;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline JObject SliceManager::getPinnedSlices() const
	{
		return callObjectMethod(
			"getPinnedSlices",
			"()Ljava/util/List;"
		);
	}
	inline JObject SliceManager::getPinnedSpecs(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getPinnedSpecs",
			"(Landroid/net/Uri;)Ljava/util/Set;",
			arg0.object()
		);
	}
	inline JObject SliceManager::getSliceDescendants(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getSliceDescendants",
			"(Landroid/net/Uri;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	inline void SliceManager::grantSlicePermission(JString arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"grantSlicePermission",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::net::Uri SliceManager::mapIntentToUri(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"mapIntentToUri",
			"(Landroid/content/Intent;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline void SliceManager::pinSlice(android::net::Uri arg0, JObject arg1) const
	{
		callMethod<void>(
			"pinSlice",
			"(Landroid/net/Uri;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SliceManager::revokeSlicePermission(JString arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"revokeSlicePermission",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void SliceManager::unpinSlice(android::net::Uri arg0) const
	{
		callMethod<void>(
			"unpinSlice",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
} // namespace android::app::slice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::slice;
#endif
