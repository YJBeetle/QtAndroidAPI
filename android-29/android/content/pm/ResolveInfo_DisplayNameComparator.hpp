#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::pm
{
	class PackageManager;
}
namespace android::content::pm
{
	class ResolveInfo;
}

namespace android::content::pm
{
	class ResolveInfo_DisplayNameComparator : public __JniBaseClass
	{
	public:
		// Fields
		
		ResolveInfo_DisplayNameComparator(QAndroidJniObject obj);
		// Constructors
		ResolveInfo_DisplayNameComparator(android::content::pm::PackageManager arg0);
		ResolveInfo_DisplayNameComparator() = default;
		
		// Methods
		jint compare(android::content::pm::ResolveInfo arg0, android::content::pm::ResolveInfo arg1);
		jint compare(jobject arg0, jobject arg1);
	};
} // namespace android::content::pm

