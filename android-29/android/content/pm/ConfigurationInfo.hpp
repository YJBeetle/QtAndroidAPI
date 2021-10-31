#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class ConfigurationInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint GL_ES_VERSION_UNDEFINED();
		static jint INPUT_FEATURE_FIVE_WAY_NAV();
		static jint INPUT_FEATURE_HARD_KEYBOARD();
		jint reqGlEsVersion();
		jint reqInputFeatures();
		jint reqKeyboardType();
		jint reqNavigation();
		jint reqTouchScreen();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConfigurationInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConfigurationInfo(QAndroidJniObject obj);
		
		// Constructors
		ConfigurationInfo();
		ConfigurationInfo(android::content::pm::ConfigurationInfo &arg0);
		
		// Methods
		jint describeContents();
		jstring getGlEsVersion();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

