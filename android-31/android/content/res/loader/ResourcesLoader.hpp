#pragma once

#include "./ResourcesProvider.def.hpp"
#include "./ResourcesLoader.def.hpp"

namespace android::content::res::loader
{
	// Fields
	
	// Constructors
	inline ResourcesLoader::ResourcesLoader()
		: JObject(
			"android.content.res.loader.ResourcesLoader",
			"()V"
		) {}
	
	// Methods
	inline void ResourcesLoader::addProvider(android::content::res::loader::ResourcesProvider arg0) const
	{
		callMethod<void>(
			"addProvider",
			"(Landroid/content/res/loader/ResourcesProvider;)V",
			arg0.object()
		);
	}
	inline void ResourcesLoader::clearProviders() const
	{
		callMethod<void>(
			"clearProviders",
			"()V"
		);
	}
	inline JObject ResourcesLoader::getProviders() const
	{
		return callObjectMethod(
			"getProviders",
			"()Ljava/util/List;"
		);
	}
	inline void ResourcesLoader::removeProvider(android::content::res::loader::ResourcesProvider arg0) const
	{
		callMethod<void>(
			"removeProvider",
			"(Landroid/content/res/loader/ResourcesProvider;)V",
			arg0.object()
		);
	}
	inline void ResourcesLoader::setProviders(JObject arg0) const
	{
		callMethod<void>(
			"setProviders",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::content::res::loader

// Base class headers

