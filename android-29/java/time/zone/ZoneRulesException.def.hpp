#pragma once

#include "../DateTimeException.def.hpp"

class JString;
class JThrowable;

namespace java::time::zone
{
	class ZoneRulesException : public java::time::DateTimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZoneRulesException(const char *className, const char *sig, Ts...agv) : java::time::DateTimeException(className, sig, std::forward<Ts>(agv)...) {}
		ZoneRulesException(QAndroidJniObject obj) : java::time::DateTimeException(obj) {}
		
		// Constructors
		ZoneRulesException(JString arg0);
		ZoneRulesException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::time::zone

