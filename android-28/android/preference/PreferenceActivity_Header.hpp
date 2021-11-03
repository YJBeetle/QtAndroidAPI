#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Intent;
}
namespace android::content::res
{
	class Resources;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::preference
{
	class PreferenceActivity_Header : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		JString breadCrumbShortTitle();
		jint breadCrumbShortTitleRes();
		JString breadCrumbTitle();
		jint breadCrumbTitleRes();
		android::os::Bundle extras();
		JString fragment();
		android::os::Bundle fragmentArguments();
		jint iconRes();
		jlong id();
		android::content::Intent intent();
		JString summary();
		jint summaryRes();
		JString title();
		jint titleRes();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PreferenceActivity_Header(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PreferenceActivity_Header(QAndroidJniObject obj);
		
		// Constructors
		PreferenceActivity_Header();
		
		// Methods
		jint describeContents() const;
		JString getBreadCrumbShortTitle(android::content::res::Resources arg0) const;
		JString getBreadCrumbTitle(android::content::res::Resources arg0) const;
		JString getSummary(android::content::res::Resources arg0) const;
		JString getTitle(android::content::res::Resources arg0) const;
		void readFromParcel(android::os::Parcel arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::preference

