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
class JObject;

namespace android::content::pm
{
	class PackageItemInfo_DisplayNameComparator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageItemInfo_DisplayNameComparator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageItemInfo_DisplayNameComparator(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PackageItemInfo_DisplayNameComparator(android::content::pm::PackageManager arg0);
		
		// Methods
		jint compare(android::content::pm::PackageItemInfo arg0, android::content::pm::PackageItemInfo arg1) const;
		jint compare(JObject arg0, JObject arg1) const;
	};
} // namespace android::content::pm

