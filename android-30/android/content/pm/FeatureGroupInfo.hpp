#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class FeatureGroupInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		jarray features();
		
		// QJniObject forward
		template<typename ...Ts> explicit FeatureGroupInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FeatureGroupInfo(QJniObject obj);
		
		// Constructors
		FeatureGroupInfo();
		FeatureGroupInfo(android::content::pm::FeatureGroupInfo &arg0);
		
		// Methods
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

