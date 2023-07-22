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
		IntentFilter(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		IntentFilter();
		IntentFilter(android::content::IntentFilter &arg0);
		IntentFilter(JString arg0);
		IntentFilter(JString arg0, JString arg1);
		
		// Methods
		static android::content::IntentFilter create(JString arg0, JString arg1);
		JObject actionsIterator() const;
		void addAction(JString arg0) const;
		void addCategory(JString arg0) const;
		void addDataAuthority(JString arg0, JString arg1) const;
		void addDataPath(JString arg0, jint arg1) const;
		void addDataScheme(JString arg0) const;
		void addDataSchemeSpecificPart(JString arg0, jint arg1) const;
		void addDataType(JString arg0) const;
		JObject asPredicate() const;
		JObject asPredicateWithTypeResolution(android::content::ContentResolver arg0) const;
		JObject authoritiesIterator() const;
		JObject categoriesIterator() const;
		jint countActions() const;
		jint countCategories() const;
		jint countDataAuthorities() const;
		jint countDataPaths() const;
		jint countDataSchemeSpecificParts() const;
		jint countDataSchemes() const;
		jint countDataTypes() const;
		jint describeContents() const;
		void dump(JObject arg0, JString arg1) const;
		JString getAction(jint arg0) const;
		JString getCategory(jint arg0) const;
		android::content::IntentFilter_AuthorityEntry getDataAuthority(jint arg0) const;
		android::os::PatternMatcher getDataPath(jint arg0) const;
		JString getDataScheme(jint arg0) const;
		android::os::PatternMatcher getDataSchemeSpecificPart(jint arg0) const;
		JString getDataType(jint arg0) const;
		jint getPriority() const;
		jboolean hasAction(JString arg0) const;
		jboolean hasCategory(JString arg0) const;
		jboolean hasDataAuthority(android::net::Uri arg0) const;
		jboolean hasDataPath(JString arg0) const;
		jboolean hasDataScheme(JString arg0) const;
		jboolean hasDataSchemeSpecificPart(JString arg0) const;
		jboolean hasDataType(JString arg0) const;
		jint match(android::content::ContentResolver arg0, android::content::Intent arg1, jboolean arg2, JString arg3) const;
		jint match(JString arg0, JString arg1, JString arg2, android::net::Uri arg3, JObject arg4, JString arg5) const;
		jboolean matchAction(JString arg0) const;
		JString matchCategories(JObject arg0) const;
		jint matchData(JString arg0, JString arg1, android::net::Uri arg2) const;
		jint matchDataAuthority(android::net::Uri arg0) const;
		JObject pathsIterator() const;
		void readFromXml(JObject arg0) const;
		JObject schemeSpecificPartsIterator() const;
		JObject schemesIterator() const;
		void setPriority(jint arg0) const;
		JObject typesIterator() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
		void writeToXml(JObject arg0) const;
	};
} // namespace android::content

