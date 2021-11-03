#pragma once

#include "../../JObject.hpp"
#include "../lang/Enum.hpp"


namespace java::util
{
	class Locale_Category : public java::lang::Enum
	{
	public:
		// Fields
		static java::util::Locale_Category DISPLAY();
		static java::util::Locale_Category FORMAT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Locale_Category(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Locale_Category(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::Locale_Category valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::util

