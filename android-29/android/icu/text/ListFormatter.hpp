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
		
		ListFormatter(QAndroidJniObject obj);
		// Constructors
		ListFormatter() = default;
		
		// Methods
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		jstring format(jobjectArray arg0);
		jstring format(__JniBaseClass arg0);
		jstring getPatternForNumItems(jint arg0);
	};
} // namespace android::icu::text

