#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class FeatureGroupInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		JArray features();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FeatureGroupInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FeatureGroupInfo(QAndroidJniObject obj);
		
		// Constructors
		FeatureGroupInfo();
		FeatureGroupInfo(android::content::pm::FeatureGroupInfo &arg0);
		
		// Methods
		jint describeContents() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

