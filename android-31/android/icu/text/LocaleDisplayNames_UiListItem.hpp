#pragma once

#include "../../../JObject.hpp"

namespace android::icu::util
{
	class ULocale;
}

namespace android::icu::text
{
	class LocaleDisplayNames_UiListItem : public JObject
	{
	public:
		// Fields
		android::icu::util::ULocale minimized();
		android::icu::util::ULocale modified();
		jstring nameInDisplayLocale();
		jstring nameInSelf();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocaleDisplayNames_UiListItem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocaleDisplayNames_UiListItem(QAndroidJniObject obj);
		
		// Constructors
		LocaleDisplayNames_UiListItem(android::icu::util::ULocale arg0, android::icu::util::ULocale arg1, jstring arg2, jstring arg3);
		
		// Methods
		static JObject getComparator(JObject arg0, jboolean arg1);
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::icu::text

