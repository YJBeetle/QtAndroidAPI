#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::pm
{
	class ConfigurationInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint GL_ES_VERSION_UNDEFINED();
		static jint INPUT_FEATURE_FIVE_WAY_NAV();
		static jint INPUT_FEATURE_HARD_KEYBOARD();
		jint reqGlEsVersion();
		jint reqInputFeatures();
		jint reqKeyboardType();
		jint reqNavigation();
		jint reqTouchScreen();
		
		// QJniObject forward
		template<typename ...Ts> explicit ConfigurationInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConfigurationInfo(QJniObject obj);
		
		// Constructors
		ConfigurationInfo();
		ConfigurationInfo(android::content::pm::ConfigurationInfo &arg0);
		
		// Methods
		jint describeContents() const;
		JString getGlEsVersion() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

