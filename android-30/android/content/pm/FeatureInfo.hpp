#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class FeatureInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint FLAG_REQUIRED();
		static jint GL_ES_VERSION_UNDEFINED();
		jint flags();
		jstring name();
		jint reqGlEsVersion();
		jint version();
		
		// QJniObject forward
		template<typename ...Ts> explicit FeatureInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FeatureInfo(QJniObject obj);
		
		// Constructors
		FeatureInfo();
		FeatureInfo(android::content::pm::FeatureInfo &arg0);
		
		// Methods
		jint describeContents();
		jstring getGlEsVersion();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

