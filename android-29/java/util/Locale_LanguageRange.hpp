#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class Locale_LanguageRange : public __JniBaseClass
	{
	public:
		// Fields
		static jdouble MAX_WEIGHT();
		static jdouble MIN_WEIGHT();
		
		Locale_LanguageRange(QAndroidJniObject obj);
		// Constructors
		Locale_LanguageRange(jstring arg0);
		Locale_LanguageRange(jstring arg0, jdouble arg1);
		Locale_LanguageRange() = default;
		
		// Methods
		static QAndroidJniObject mapEquivalents(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(jstring arg0, __JniBaseClass arg1);
		jboolean equals(jobject arg0);
		jstring getRange();
		jdouble getWeight();
		jint hashCode();
		jstring toString();
	};
} // namespace java::util

