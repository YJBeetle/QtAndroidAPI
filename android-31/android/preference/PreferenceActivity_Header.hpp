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

namespace android::preference
{
	class PreferenceActivity_Header : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jstring breadCrumbShortTitle();
		jint breadCrumbShortTitleRes();
		jstring breadCrumbTitle();
		jint breadCrumbTitleRes();
		android::os::Bundle extras();
		jstring fragment();
		android::os::Bundle fragmentArguments();
		jint iconRes();
		jlong id();
		android::content::Intent intent();
		jstring summary();
		jint summaryRes();
		jstring title();
		jint titleRes();
		
		// QJniObject forward
		template<typename ...Ts> explicit PreferenceActivity_Header(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PreferenceActivity_Header(QJniObject obj);
		
		// Constructors
		PreferenceActivity_Header();
		
		// Methods
		jint describeContents();
		jstring getBreadCrumbShortTitle(android::content::res::Resources arg0);
		jstring getBreadCrumbTitle(android::content::res::Resources arg0);
		jstring getSummary(android::content::res::Resources arg0);
		jstring getTitle(android::content::res::Resources arg0);
		void readFromParcel(android::os::Parcel arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::preference

