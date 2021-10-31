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
		
		// QJniObject forward
		template<typename ...Ts> explicit ZoneRulesException(const char *className, const char *sig, Ts...agv) : java::time::DateTimeException(className, sig, std::forward<Ts>(agv)...) {}
		ZoneRulesException(QJniObject obj);
		
		// Constructors
		ZoneRulesException(jstring arg0);
		ZoneRulesException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::time::zone

