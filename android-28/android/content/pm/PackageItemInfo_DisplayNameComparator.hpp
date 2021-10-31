#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::pm
{
	class PackageItemInfo;
}
namespace android::content::pm
{
	class PackageManager;
}

namespace android::content::pm
{
	class PackageItemInfo_DisplayNameComparator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageItemInfo_DisplayNameComparator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PackageItemInfo_DisplayNameComparator(QAndroidJniObject obj);
		
		// Constructors
		PackageItemInfo_DisplayNameComparator(android::content::pm::PackageManager arg0);
		
		// Methods
		jint compare(android::content::pm::PackageItemInfo arg0, android::content::pm::PackageItemInfo arg1);
		jint compare(jobject arg0, jobject arg1);
	};
} // namespace android::content::pm

