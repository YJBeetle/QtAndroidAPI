#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::content
{
	class IntentFilter : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit IntentFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IntentFilter(QJniObject obj);
		
		// Constructors
		IntentFilter();
		IntentFilter(android::content::IntentFilter &arg0);
		IntentFilter(JString arg0);
		IntentFilter(JString arg0, JString arg1);
		
		// Methods
		static android::content::IntentFilter create(JString arg0, JString arg1);
		JObject actionsIterator();
		void addAction(JString arg0);
		void addCategory(JString arg0);
		void addDataAuthority(JString arg0, JString arg1);
		void addDataPath(JString arg0, jint arg1);
		void addDataScheme(JString arg0);
		void addDataSchemeSpecificPart(JString arg0, jint arg1);
		void addDataType(JString arg0);
		JObject authoritiesIterator();
		JObject categoriesIterator();
		jint countActions();
		jint countCategories();
		jint countDataAuthorities();
		jint countDataPaths();
		jint countDataSchemeSpecificParts();
		jint countDataSchemes();
		jint countDataTypes();
		jint describeContents();
		void dump(JObject arg0, JString arg1);
		JString getAction(jint arg0);
		JString getCategory(jint arg0);
		android::content::IntentFilter_AuthorityEntry getDataAuthority(jint arg0);
		android::os::PatternMatcher getDataPath(jint arg0);
		JString getDataScheme(jint arg0);
		android::os::PatternMatcher getDataSchemeSpecificPart(jint arg0);
		JString getDataType(jint arg0);
		jint getPriority();
		jboolean hasAction(JString arg0);
		jboolean hasCategory(JString arg0);
		jboolean hasDataAuthority(android::net::Uri arg0);
		jboolean hasDataPath(JString arg0);
		jboolean hasDataScheme(JString arg0);
		jboolean hasDataSchemeSpecificPart(JString arg0);
		jboolean hasDataType(JString arg0);
		jint match(android::content::ContentResolver arg0, android::content::Intent arg1, jboolean arg2, JString arg3);
		jint match(JString arg0, JString arg1, JString arg2, android::net::Uri arg3, JObject arg4, JString arg5);
		jboolean matchAction(JString arg0);
		JString matchCategories(JObject arg0);
		jint matchData(JString arg0, JString arg1, android::net::Uri arg2);
		jint matchDataAuthority(android::net::Uri arg0);
		JObject pathsIterator();
		void readFromXml(JObject arg0);
		JObject schemeSpecificPartsIterator();
		JObject schemesIterator();
		void setPriority(jint arg0);
		JObject typesIterator();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
		void writeToXml(JObject arg0);
	};
} // namespace android::content

