#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::content::res::loader
{
	class ResourcesProvider;
}

namespace android::content::res::loader
{
	class ResourcesLoader : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ResourcesLoader(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ResourcesLoader(QJniObject obj);
		
		// Constructors
		ResourcesLoader();
		
		// Methods
		void addProvider(android::content::res::loader::ResourcesProvider arg0);
		void clearProviders();
		__JniBaseClass getProviders();
		void removeProvider(android::content::res::loader::ResourcesProvider arg0);
		void setProviders(__JniBaseClass arg0);
	};
} // namespace android::content::res::loader

