#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::content
{
	class Intent;
}
namespace android::content
{
	class IntentFilter_AuthorityEntry;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class PatternMatcher;
}

namespace android::content
{
	class IntentFilter : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint MATCH_ADJUSTMENT_MASK();
		static jint MATCH_ADJUSTMENT_NORMAL();
		static jint MATCH_CATEGORY_EMPTY();
		static jint MATCH_CATEGORY_HOST();
		static jint MATCH_CATEGORY_MASK();
		static jint MATCH_CATEGORY_PATH();
		static jint MATCH_CATEGORY_PORT();
		static jint MATCH_CATEGORY_SCHEME();
		static jint MATCH_CATEGORY_SCHEME_SPECIFIC_PART();
		static jint MATCH_CATEGORY_TYPE();
		static jint NO_MATCH_ACTION();
		static jint NO_MATCH_CATEGORY();
		static jint NO_MATCH_DATA();
		static jint NO_MATCH_TYPE();
		static jint SYSTEM_HIGH_PRIORITY();
		static jint SYSTEM_LOW_PRIORITY();
		
		IntentFilter(QAndroidJniObject obj);
		// Constructors
		IntentFilter();
		IntentFilter(android::content::IntentFilter &arg0);
		IntentFilter(jstring arg0);
		IntentFilter(jstring arg0, jstring arg1);
		
		// Methods
		static QAndroidJniObject create(jstring arg0, jstring arg1);
		QAndroidJniObject actionsIterator();
		void addAction(jstring arg0);
		void addCategory(jstring arg0);
		void addDataAuthority(jstring arg0, jstring arg1);
		void addDataPath(jstring arg0, jint arg1);
		void addDataScheme(jstring arg0);
		void addDataSchemeSpecificPart(jstring arg0, jint arg1);
		void addDataType(jstring arg0);
		QAndroidJniObject authoritiesIterator();
		QAndroidJniObject categoriesIterator();
		jint countActions();
		jint countCategories();
		jint countDataAuthorities();
		jint countDataPaths();
		jint countDataSchemeSpecificParts();
		jint countDataSchemes();
		jint countDataTypes();
		jint describeContents();
		void dump(__JniBaseClass arg0, jstring arg1);
		jstring getAction(jint arg0);
		jstring getCategory(jint arg0);
		QAndroidJniObject getDataAuthority(jint arg0);
		QAndroidJniObject getDataPath(jint arg0);
		jstring getDataScheme(jint arg0);
		QAndroidJniObject getDataSchemeSpecificPart(jint arg0);
		jstring getDataType(jint arg0);
		jint getPriority();
		jboolean hasAction(jstring arg0);
		jboolean hasCategory(jstring arg0);
		jboolean hasDataAuthority(android::net::Uri arg0);
		jboolean hasDataPath(jstring arg0);
		jboolean hasDataScheme(jstring arg0);
		jboolean hasDataSchemeSpecificPart(jstring arg0);
		jboolean hasDataType(jstring arg0);
		jint match(android::content::ContentResolver arg0, android::content::Intent arg1, jboolean arg2, jstring arg3);
		jint match(jstring arg0, jstring arg1, jstring arg2, android::net::Uri arg3, __JniBaseClass arg4, jstring arg5);
		jboolean matchAction(jstring arg0);
		jstring matchCategories(__JniBaseClass arg0);
		jint matchData(jstring arg0, jstring arg1, android::net::Uri arg2);
		jint matchDataAuthority(android::net::Uri arg0);
		QAndroidJniObject pathsIterator();
		void readFromXml(__JniBaseClass arg0);
		QAndroidJniObject schemeSpecificPartsIterator();
		QAndroidJniObject schemesIterator();
		void setPriority(jint arg0);
		QAndroidJniObject typesIterator();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
		void writeToXml(__JniBaseClass arg0);
	};
} // namespace android::content

