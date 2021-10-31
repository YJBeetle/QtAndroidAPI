#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::icu::util
{
	class ULocale;
}
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
		static QAndroidJniObject CREATOR();
		
		LocaleList(QAndroidJniObject obj);
		// Constructors
		LocaleList(jarray arg0);
		LocaleList() = default;
		
		// Methods
		static QAndroidJniObject forLanguageTags(jstring arg0);
		static QAndroidJniObject getAdjustedDefault();
		static QAndroidJniObject getDefault();
		static QAndroidJniObject getEmptyLocaleList();
		static jboolean isPseudoLocale(android::icu::util::ULocale arg0);
		static void setDefault(android::os::LocaleList arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject get(jint arg0);
		QAndroidJniObject getFirstMatch(jarray arg0);
		jint hashCode();
		jint indexOf(java::util::Locale arg0);
		jboolean isEmpty();
		jint size();
		jstring toLanguageTags();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

