#pragma once

#include "../../../JObject.hpp"

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
	class PackageItemInfo_DisplayNameComparator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageItemInfo_DisplayNameComparator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageItemInfo_DisplayNameComparator(QJniObject obj);
		
		// Constructors
		PackageItemInfo_DisplayNameComparator(android::content::pm::PackageManager arg0);
		
		// Methods
		jint compare(android::content::pm::PackageItemInfo arg0, android::content::pm::PackageItemInfo arg1);
		jint compare(jobject arg0, jobject arg1);
	};
} // namespace android::content::pm

