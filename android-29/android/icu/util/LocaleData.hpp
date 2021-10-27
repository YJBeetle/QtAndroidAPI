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
		
		LocaleData(QAndroidJniObject obj);
		// Constructors
		LocaleData() = default;
		
		// Methods
		static QAndroidJniObject getCLDRVersion();
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getMeasurementSystem(android::icu::util::ULocale arg0);
		static QAndroidJniObject getPaperSize(android::icu::util::ULocale arg0);
		jstring getDelimiter(jint arg0);
		jboolean getNoSubstitute();
		void setNoSubstitute(jboolean arg0);
	};
} // namespace android::icu::util

