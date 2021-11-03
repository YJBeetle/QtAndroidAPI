#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"


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
		ParseException(jstring arg0, jint arg1);
		
		// Methods
		jint getErrorOffset();
	};
} // namespace java::text

