#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::content::res::loader
{
	class ResourcesProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ResourcesProvider(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ResourcesProvider(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::content::res::loader::ResourcesProvider empty(__JniBaseClass arg0);
		static android::content::res::loader::ResourcesProvider loadFromApk(android::os::ParcelFileDescriptor arg0);
		static android::content::res::loader::ResourcesProvider loadFromApk(android::os::ParcelFileDescriptor arg0, __JniBaseClass arg1);
		static android::content::res::loader::ResourcesProvider loadFromDirectory(jstring arg0, __JniBaseClass arg1);
		static android::content::res::loader::ResourcesProvider loadFromSplit(android::content::Context arg0, jstring arg1);
		static android::content::res::loader::ResourcesProvider loadFromTable(android::os::ParcelFileDescriptor arg0, __JniBaseClass arg1);
		void close();
	};
} // namespace android::content::res::loader

