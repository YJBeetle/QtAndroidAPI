#pragma once

#include "../../../JObject.hpp"

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
	class ResolveInfo_DisplayNameComparator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ResolveInfo_DisplayNameComparator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResolveInfo_DisplayNameComparator(QAndroidJniObject obj);
		
		// Constructors
		ResolveInfo_DisplayNameComparator(android::content::pm::PackageManager arg0);
		
		// Methods
		jint compare(android::content::pm::ResolveInfo arg0, android::content::pm::ResolveInfo arg1);
		jint compare(jobject arg0, jobject arg1);
	};
} // namespace android::content::pm

