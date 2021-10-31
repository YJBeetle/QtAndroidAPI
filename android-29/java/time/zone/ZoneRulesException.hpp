#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../DateTimeException.hpp"


namespace java::time::zone
{
	class ZoneRulesException : public java::time::DateTimeException
	{
	public:
		// Fields
		
		ZoneRulesException(QAndroidJniObject obj);
		// Constructors
		ZoneRulesException(jstring arg0);
		ZoneRulesException(jstring arg0, jthrowable arg1);
		ZoneRulesException() = default;
		
		// Methods
	};
} // namespace java::time::zone

