#pragma once

#include "../../lang/Enum.hpp"

class JArray;
class JString;

namespace java::time::format
{
	class SignStyle : public java::lang::Enum
	{
	public:
		// Fields
		static java::time::format::SignStyle ALWAYS();
		static java::time::format::SignStyle EXCEEDS_PAD();
		static java::time::format::SignStyle NEVER();
		static java::time::format::SignStyle NORMAL();
		static java::time::format::SignStyle NOT_NEGATIVE();
		
		// QJniObject forward
		template<typename ...Ts> explicit SignStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		SignStyle(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::format::SignStyle valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::time::format

