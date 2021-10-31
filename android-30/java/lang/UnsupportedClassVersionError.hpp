#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"
#include "./ClassFormatError.hpp"


namespace java::lang
{
	class UnsupportedClassVersionError : public java::lang::ClassFormatError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnsupportedClassVersionError(const char *className, const char *sig, Ts...agv) : java::lang::ClassFormatError(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedClassVersionError(QAndroidJniObject obj);
		
		// Constructors
		UnsupportedClassVersionError();
		UnsupportedClassVersionError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

