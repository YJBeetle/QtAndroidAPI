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
class JObject;

namespace android::content::pm
{
	class ResolveInfo_DisplayNameComparator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ResolveInfo_DisplayNameComparator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResolveInfo_DisplayNameComparator(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ResolveInfo_DisplayNameComparator(android::content::pm::PackageManager arg0);
		
		// Methods
		jint compare(android::content::pm::ResolveInfo arg0, android::content::pm::ResolveInfo arg1) const;
		jint compare(JObject arg0, JObject arg1) const;
	};
} // namespace android::content::pm

