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
		ResourcesLoader(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ResourcesLoader();
		
		// Methods
		void addProvider(android::content::res::loader::ResourcesProvider arg0) const;
		void clearProviders() const;
		JObject getProviders() const;
		void removeProvider(android::content::res::loader::ResourcesProvider arg0) const;
		void setProviders(JObject arg0) const;
	};
} // namespace android::content::res::loader

