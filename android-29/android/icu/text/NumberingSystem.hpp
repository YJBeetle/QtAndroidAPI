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
	class NumberingSystem : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject LATIN();
		
		NumberingSystem(QAndroidJniObject obj);
		// Constructors
		NumberingSystem();
		
		// Methods
		static jarray getAvailableNames();
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		static QAndroidJniObject getInstance(jint arg0, jboolean arg1, jstring arg2);
		static QAndroidJniObject getInstance(jint arg0, jboolean arg1, const QString &arg2);
		static QAndroidJniObject getInstanceByName(jstring arg0);
		static QAndroidJniObject getInstanceByName(const QString &arg0);
		static jboolean isValidDigitString(jstring arg0);
		static jboolean isValidDigitString(const QString &arg0);
		jstring getDescription();
		jstring getName();
		jint getRadix();
		jboolean isAlgorithmic();
	};
} // namespace android::icu::text

