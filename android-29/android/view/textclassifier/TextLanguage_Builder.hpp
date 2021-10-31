#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::util
{
	class ULocale;
}
namespace android::os
{
	class Bundle;
}
namespace android::view::textclassifier
{
	class TextLanguage;
}

namespace android::view::textclassifier
{
	class TextLanguage_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextLanguage_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextLanguage_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextLanguage_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject putLocale(android::icu::util::ULocale arg0, jfloat arg1);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setId(jstring arg0);
	};
} // namespace android::view::textclassifier

