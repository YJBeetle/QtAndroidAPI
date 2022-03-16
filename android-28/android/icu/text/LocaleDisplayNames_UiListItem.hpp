#pragma once

#include "../../../JObject.hpp"

namespace android::icu::util
{
	class ULocale;
}
class JObject;
class JString;

namespace android::icu::text
{
	class LocaleDisplayNames_UiListItem : public JObject
	{
	public:
		// Fields
		android::icu::util::ULocale minimized();
		android::icu::util::ULocale modified();
		JString nameInDisplayLocale();
		JString nameInSelf();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocaleDisplayNames_UiListItem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocaleDisplayNames_UiListItem(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		LocaleDisplayNames_UiListItem(android::icu::util::ULocale arg0, android::icu::util::ULocale arg1, JString arg2, JString arg3);
		
		// Methods
		static JObject getComparator(JObject arg0, jboolean arg1);
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::icu::text

