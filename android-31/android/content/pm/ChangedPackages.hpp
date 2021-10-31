#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class ChangedPackages : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ChangedPackages(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ChangedPackages(QJniObject obj);
		
		// Constructors
		ChangedPackages(jint arg0, __JniBaseClass arg1);
		
		// Methods
		jint describeContents();
		__JniBaseClass getPackageNames();
		jint getSequenceNumber();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

