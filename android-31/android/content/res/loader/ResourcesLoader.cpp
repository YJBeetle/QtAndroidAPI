#include "./ResourcesProvider.hpp"
#include "./ResourcesLoader.hpp"

namespace android::content::res::loader
{
	// Fields
	
	// QAndroidJniObject forward
	ResourcesLoader::ResourcesLoader(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ResourcesLoader::ResourcesLoader()
		: JObject(
			"android.content.res.loader.ResourcesLoader",
			"()V"
		) {}
	
	// Methods
	void ResourcesLoader::addProvider(android::content::res::loader::ResourcesProvider arg0)
	{
		callMethod<void>(
			"addProvider",
			"(Landroid/content/res/loader/ResourcesProvider;)V",
			arg0.object()
		);
	}
	void ResourcesLoader::clearProviders()
	{
		callMethod<void>(
			"clearProviders",
			"()V"
		);
	}
	JObject ResourcesLoader::getProviders()
	{
		return callObjectMethod(
			"getProviders",
			"()Ljava/util/List;"
		);
	}
	void ResourcesLoader::removeProvider(android::content::res::loader::ResourcesProvider arg0)
	{
		callMethod<void>(
			"removeProvider",
			"(Landroid/content/res/loader/ResourcesProvider;)V",
			arg0.object()
		);
	}
	void ResourcesLoader::setProviders(JObject arg0)
	{
		callMethod<void>(
			"setProviders",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::content::res::loader

