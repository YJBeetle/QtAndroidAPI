#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::app::admin
{
	class PackagePolicy : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint PACKAGE_POLICY_ALLOWLIST();
		static jint PACKAGE_POLICY_ALLOWLIST_AND_SYSTEM();
		static jint PACKAGE_POLICY_BLOCKLIST();
		
		// QJniObject forward
		template<typename ...Ts> explicit PackagePolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackagePolicy(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PackagePolicy(jint arg0);
		PackagePolicy(jint arg0, JObject arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getPackageNames() const;
		jint getPolicyType() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::admin

