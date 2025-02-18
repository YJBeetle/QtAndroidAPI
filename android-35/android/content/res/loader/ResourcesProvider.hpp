#pragma once

#include "../../Context.def.hpp"
#include "../../om/OverlayInfo.def.hpp"
#include "../../../os/ParcelFileDescriptor.def.hpp"
#include "../../../../JString.hpp"
#include "./ResourcesProvider.def.hpp"

namespace android::content::res::loader
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::content::res::loader::ResourcesProvider ResourcesProvider::empty(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.content.res.loader.ResourcesProvider",
			"empty",
			"(Landroid/content/res/loader/AssetsProvider;)Landroid/content/res/loader/ResourcesProvider;",
			arg0.object()
		);
	}
	inline android::content::res::loader::ResourcesProvider ResourcesProvider::loadFromApk(android::os::ParcelFileDescriptor arg0)
	{
		return callStaticObjectMethod(
			"android.content.res.loader.ResourcesProvider",
			"loadFromApk",
			"(Landroid/os/ParcelFileDescriptor;)Landroid/content/res/loader/ResourcesProvider;",
			arg0.object()
		);
	}
	inline android::content::res::loader::ResourcesProvider ResourcesProvider::loadFromApk(android::os::ParcelFileDescriptor arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.content.res.loader.ResourcesProvider",
			"loadFromApk",
			"(Landroid/os/ParcelFileDescriptor;Landroid/content/res/loader/AssetsProvider;)Landroid/content/res/loader/ResourcesProvider;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::content::res::loader::ResourcesProvider ResourcesProvider::loadFromDirectory(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.content.res.loader.ResourcesProvider",
			"loadFromDirectory",
			"(Ljava/lang/String;Landroid/content/res/loader/AssetsProvider;)Landroid/content/res/loader/ResourcesProvider;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::content::res::loader::ResourcesProvider ResourcesProvider::loadFromSplit(android::content::Context arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.content.res.loader.ResourcesProvider",
			"loadFromSplit",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/content/res/loader/ResourcesProvider;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::content::res::loader::ResourcesProvider ResourcesProvider::loadFromTable(android::os::ParcelFileDescriptor arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.content.res.loader.ResourcesProvider",
			"loadFromTable",
			"(Landroid/os/ParcelFileDescriptor;Landroid/content/res/loader/AssetsProvider;)Landroid/content/res/loader/ResourcesProvider;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::content::res::loader::ResourcesProvider ResourcesProvider::loadOverlay(android::content::om::OverlayInfo arg0)
	{
		return callStaticObjectMethod(
			"android.content.res.loader.ResourcesProvider",
			"loadOverlay",
			"(Landroid/content/om/OverlayInfo;)Landroid/content/res/loader/ResourcesProvider;",
			arg0.object()
		);
	}
	inline void ResourcesProvider::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::content::res::loader

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::res::loader;
#endif
