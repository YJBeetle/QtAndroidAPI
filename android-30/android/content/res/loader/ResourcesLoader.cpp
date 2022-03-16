#include "./ResourcesProvider.hpp"
#include "./ResourcesLoader.hpp"

namespace android::content::res::loader
{
	// Fields
	
	// Constructors
	ResourcesLoader::ResourcesLoader()
		: JObject(
			"android.content.res.loader.ResourcesLoader",
			"()V"
		) {}
	
	// Methods
	void ResourcesLoader::addProvider(android::content::res::loader::ResourcesProvider arg0) const
	{
		callMethod<void>(
			"addProvider",
			"(Landroid/content/res/loader/ResourcesProvider;)V",
			arg0.object()
		);
	}
	void ResourcesLoader::clearProviders() const
	{
		callMethod<void>(
			"clearProviders",
			"()V"
		);
	}
	JObject ResourcesLoader::getProviders() const
	{
		return callObjectMethod(
			"getProviders",
			"()Ljava/util/List;"
		);
	}
	void ResourcesLoader::removeProvider(android::content::res::loader::ResourcesProvider arg0) const
	{
		callMethod<void>(
			"removeProvider",
			"(Landroid/content/res/loader/ResourcesProvider;)V",
			arg0.object()
		);
	}
	void ResourcesLoader::setProviders(JObject arg0) const
	{
		callMethod<void>(
			"setProviders",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::content::res::loader

