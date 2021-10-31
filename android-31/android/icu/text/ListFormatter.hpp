#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class ListFormatter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ListFormatter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ListFormatter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::ListFormatter getInstance();
		static android::icu::text::ListFormatter getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::ListFormatter getInstance(java::util::Locale arg0);
		jstring format(jobjectArray arg0);
		jstring format(__JniBaseClass arg0);
		jstring getPatternForNumItems(jint arg0);
	};
} // namespace android::icu::text

