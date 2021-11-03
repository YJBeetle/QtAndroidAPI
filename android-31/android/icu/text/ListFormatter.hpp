#pragma once

#include "../../../JObject.hpp"

namespace android::icu::util
{
	class ULocale;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class ListFormatter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ListFormatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ListFormatter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::ListFormatter getInstance();
		static android::icu::text::ListFormatter getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::ListFormatter getInstance(java::util::Locale arg0);
		jstring format(jobjectArray arg0);
		jstring format(JObject arg0);
		jstring getPatternForNumItems(jint arg0);
	};
} // namespace android::icu::text

