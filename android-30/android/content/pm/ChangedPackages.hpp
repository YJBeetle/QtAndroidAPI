#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class ChangedPackages : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ChangedPackages(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChangedPackages(QAndroidJniObject obj);
		
		// Constructors
		ChangedPackages(jint arg0, JObject arg1);
		
		// Methods
		jint describeContents() const;
		JObject getPackageNames() const;
		jint getSequenceNumber() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

