#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::admin
{
	class FactoryResetProtectionPolicy : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FactoryResetProtectionPolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FactoryResetProtectionPolicy(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getFactoryResetProtectionAccounts() const;
		jboolean isFactoryResetProtectionEnabled() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::admin

