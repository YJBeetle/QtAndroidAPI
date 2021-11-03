#pragma once

#include "../../../JObject.hpp"

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
class JString;
class JObject;
class JString;

namespace android::view::textservice
{
	class SpellCheckerSubtype : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SpellCheckerSubtype(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpellCheckerSubtype(QJniObject obj);
		
		// Constructors
		SpellCheckerSubtype(jint arg0, JString arg1, JString arg2);
		
		// Methods
		jboolean containsExtraValueKey(JString arg0);
		jint describeContents();
		jboolean equals(JObject arg0);
		JString getDisplayName(android::content::Context arg0, JString arg1, android::content::pm::ApplicationInfo arg2);
		JString getExtraValue();
		JString getExtraValueOf(JString arg0);
		JString getLanguageTag();
		JString getLocale();
		jint getNameResId();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textservice

