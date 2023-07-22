#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
namespace android::icu::util
{
	class ULocale;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;
namespace java::util
{
	class Locale;
}

namespace android::os
{
	class LocaleList : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocaleList(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocaleList(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		LocaleList(JArray arg0);
		
		// Methods
		static android::os::LocaleList forLanguageTags(JString arg0);
		static android::os::LocaleList getAdjustedDefault();
		static android::os::LocaleList getDefault();
		static android::os::LocaleList getEmptyLocaleList();
		static jboolean isPseudoLocale(android::icu::util::ULocale arg0);
		static jboolean matchesLanguageAndScript(java::util::Locale arg0, java::util::Locale arg1);
		static void setDefault(android::os::LocaleList arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		java::util::Locale get(jint arg0) const;
		java::util::Locale getFirstMatch(JArray arg0) const;
		jint hashCode() const;
		jint indexOf(java::util::Locale arg0) const;
		jboolean isEmpty() const;
		jint size() const;
		JString toLanguageTags() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::os

