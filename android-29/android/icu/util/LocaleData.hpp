#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::util
{
	class LocaleData_MeasurementSystem;
}
namespace android::icu::util
{
	class LocaleData_PaperSize;
}
namespace android::icu::util
{
	class ULocale;
}
namespace android::icu::util
{
	class VersionInfo;
}

namespace android::icu::util
{
	class LocaleData : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALT_QUOTATION_END();
		static jint ALT_QUOTATION_START();
		static jint QUOTATION_END();
		static jint QUOTATION_START();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocaleData(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LocaleData(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::util::VersionInfo getCLDRVersion();
		static android::icu::util::LocaleData getInstance();
		static android::icu::util::LocaleData getInstance(android::icu::util::ULocale arg0);
		static android::icu::util::LocaleData_MeasurementSystem getMeasurementSystem(android::icu::util::ULocale arg0);
		static android::icu::util::LocaleData_PaperSize getPaperSize(android::icu::util::ULocale arg0);
		jstring getDelimiter(jint arg0);
		jboolean getNoSubstitute();
		void setNoSubstitute(jboolean arg0);
	};
} // namespace android::icu::util

