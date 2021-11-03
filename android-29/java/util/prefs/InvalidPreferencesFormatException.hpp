#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"


namespace java::util::prefs
{
	class InvalidPreferencesFormatException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvalidPreferencesFormatException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		InvalidPreferencesFormatException(QAndroidJniObject obj);
		
		// Constructors
		InvalidPreferencesFormatException(jstring arg0);
		InvalidPreferencesFormatException(jthrowable arg0);
		InvalidPreferencesFormatException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::util::prefs

