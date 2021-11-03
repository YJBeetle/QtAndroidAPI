#pragma once

#include "../../lang/IllegalArgumentException.hpp"

class JString;

namespace java::util::regex
{
	class PatternSyntaxException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PatternSyntaxException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		PatternSyntaxException(QJniObject obj);
		
		// Constructors
		PatternSyntaxException(JString arg0, JString arg1, jint arg2);
		
		// Methods
		JString getDescription() const;
		jint getIndex() const;
		JString getMessage() const;
		JString getPattern() const;
	};
} // namespace java::util::regex

