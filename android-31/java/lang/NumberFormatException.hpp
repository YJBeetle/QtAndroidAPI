#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"
#include "./IllegalArgumentException.hpp"


namespace java::lang
{
	class NumberFormatException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberFormatException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormatException(QJniObject obj);
		
		// Constructors
		NumberFormatException();
		NumberFormatException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

