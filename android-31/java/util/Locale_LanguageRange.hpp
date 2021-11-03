#pragma once

#include "../../JObject.hpp"


namespace java::util
{
	class Locale_LanguageRange : public JObject
	{
	public:
		// Fields
		static jdouble MAX_WEIGHT();
		static jdouble MIN_WEIGHT();
		
		// QJniObject forward
		template<typename ...Ts> explicit Locale_LanguageRange(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Locale_LanguageRange(QJniObject obj);
		
		// Constructors
		Locale_LanguageRange(jstring arg0);
		Locale_LanguageRange(jstring arg0, jdouble arg1);
		
		// Methods
		static JObject mapEquivalents(JObject arg0, JObject arg1);
		static JObject parse(jstring arg0);
		static JObject parse(jstring arg0, JObject arg1);
		jboolean equals(jobject arg0);
		jstring getRange();
		jdouble getWeight();
		jint hashCode();
		jstring toString();
	};
} // namespace java::util

