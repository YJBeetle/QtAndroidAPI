#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class MissingFormatWidthException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MissingFormatWidthException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		MissingFormatWidthException(QJniObject obj);
		
		// Constructors
		MissingFormatWidthException(jstring arg0);
		
		// Methods
		jstring getFormatSpecifier();
		jstring getMessage();
	};
} // namespace java::util

