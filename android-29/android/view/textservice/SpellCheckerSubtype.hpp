#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::pm
{
	class ApplicationInfo;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::textservice
{
	class SpellCheckerSubtype : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SpellCheckerSubtype(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SpellCheckerSubtype(QAndroidJniObject obj);
		
		// Constructors
		SpellCheckerSubtype(jint arg0, jstring arg1, jstring arg2);
		
		// Methods
		jboolean containsExtraValueKey(jstring arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getDisplayName(android::content::Context arg0, jstring arg1, android::content::pm::ApplicationInfo arg2);
		jstring getExtraValue();
		jstring getExtraValueOf(jstring arg0);
		jstring getLanguageTag();
		jstring getLocale();
		jint getNameResId();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textservice

