#pragma once

#include "../../lang/Exception.def.hpp"

class JString;
class JThrowable;

namespace java::util::prefs
{
	class InvalidPreferencesFormatException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvalidPreferencesFormatException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		InvalidPreferencesFormatException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		InvalidPreferencesFormatException(JString arg0);
		InvalidPreferencesFormatException(JThrowable arg0);
		InvalidPreferencesFormatException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::util::prefs

