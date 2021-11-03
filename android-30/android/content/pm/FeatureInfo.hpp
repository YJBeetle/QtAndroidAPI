#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::pm
{
	class FeatureInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_REQUIRED();
		static jint GL_ES_VERSION_UNDEFINED();
		jint flags();
		JString name();
		jint reqGlEsVersion();
		jint version();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FeatureInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FeatureInfo(QAndroidJniObject obj);
		
		// Constructors
		FeatureInfo();
		FeatureInfo(android::content::pm::FeatureInfo &arg0);
		
		// Methods
		jint describeContents();
		JString getGlEsVersion();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

