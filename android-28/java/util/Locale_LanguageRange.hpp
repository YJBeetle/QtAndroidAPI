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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Locale_LanguageRange(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Locale_LanguageRange(QAndroidJniObject obj);
		
		// Constructors
		Locale_LanguageRange(jstring arg0);
		Locale_LanguageRange(jstring arg0, jdouble arg1);
		
		// Methods
		static __JniBaseClass mapEquivalents(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass parse(jstring arg0);
		static __JniBaseClass parse(jstring arg0, __JniBaseClass arg1);
		jboolean equals(jobject arg0);
		jstring getRange();
		jdouble getWeight();
		jint hashCode();
		jstring toString();
	};
} // namespace java::util

