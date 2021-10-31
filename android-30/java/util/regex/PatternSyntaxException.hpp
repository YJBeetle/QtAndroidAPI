#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


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
		PatternSyntaxException(jstring arg0, jstring arg1, jint arg2);
		
		// Methods
		jstring getDescription();
		jint getIndex();
		jstring getMessage();
		jstring getPattern();
	};
} // namespace java::util::regex

