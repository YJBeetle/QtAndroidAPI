#pragma once

#include "../../../../JObject.hpp"

namespace android::content::res::loader
{
	class ResourcesProvider;
}

namespace android::content::res::loader
{
	class ResourcesLoader : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ResourcesLoader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResourcesLoader(QJniObject obj);
		
		// Constructors
		ResourcesLoader();
		
		// Methods
		void addProvider(android::content::res::loader::ResourcesProvider arg0);
		void clearProviders();
		JObject getProviders();
		void removeProvider(android::content::res::loader::ResourcesProvider arg0);
		void setProviders(JObject arg0);
	};
} // namespace android::content::res::loader

