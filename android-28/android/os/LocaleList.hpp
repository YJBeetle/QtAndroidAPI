#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::util
{
	class Locale;
}

namespace android::os
{
	class LocaleList : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocaleList(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LocaleList(QAndroidJniObject obj);
		
		// Constructors
		LocaleList(jarray arg0);
		
		// Methods
		static android::os::LocaleList forLanguageTags(jstring arg0);
		static android::os::LocaleList getAdjustedDefault();
		static android::os::LocaleList getDefault();
		static android::os::LocaleList getEmptyLocaleList();
		static void setDefault(android::os::LocaleList arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		java::util::Locale get(jint arg0);
		java::util::Locale getFirstMatch(jarray arg0);
		jint hashCode();
		jint indexOf(java::util::Locale arg0);
		jboolean isEmpty();
		jint size();
		jstring toLanguageTags();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

