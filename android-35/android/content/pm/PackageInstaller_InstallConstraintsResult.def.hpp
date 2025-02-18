#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class PackageInstaller_InstallConstraintsResult : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInstaller_InstallConstraintsResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_InstallConstraintsResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean areAllConstraintsSatisfied() const;
		jint describeContents() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

