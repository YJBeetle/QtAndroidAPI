#pragma once

#include "../../JObject.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"
#include "./IndexOutOfBoundsException.hpp"


namespace java::lang
{
	class StringIndexOutOfBoundsException : public java::lang::IndexOutOfBoundsException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StringIndexOutOfBoundsException(const char *className, const char *sig, Ts...agv) : java::lang::IndexOutOfBoundsException(className, sig, std::forward<Ts>(agv)...) {}
		StringIndexOutOfBoundsException(QAndroidJniObject obj);
		
		// Constructors
		StringIndexOutOfBoundsException();
		StringIndexOutOfBoundsException(jint arg0);
		StringIndexOutOfBoundsException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

