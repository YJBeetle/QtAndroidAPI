#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::pm
{
	class ApplicationInfo;
}
namespace android::content::pm
{
	class PackageManager;
}

namespace android::content::pm
{
	class ApplicationInfo_DisplayNameComparator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ApplicationInfo_DisplayNameComparator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationInfo_DisplayNameComparator(QAndroidJniObject obj);
		
		// Constructors
		ApplicationInfo_DisplayNameComparator(android::content::pm::PackageManager arg0);
		
		// Methods
		jint compare(android::content::pm::ApplicationInfo arg0, android::content::pm::ApplicationInfo arg1);
		jint compare(jobject arg0, jobject arg1);
	};
} // namespace android::content::pm

