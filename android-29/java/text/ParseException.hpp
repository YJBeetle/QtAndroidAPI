#pragma once

#include "../lang/Exception.hpp"

class JString;

namespace java::text
{
	class ParseException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ParseException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ParseException(QJniObject obj);
		
		// Constructors
		ParseException(JString arg0, jint arg1);
		
		// Methods
		jint getErrorOffset() const;
	};
} // namespace java::text

