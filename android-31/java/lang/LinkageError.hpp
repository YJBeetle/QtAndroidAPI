#pragma once

#include "../../JObject.hpp"
#include "./Error.hpp"


namespace java::lang
{
	class LinkageError : public java::lang::Error
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinkageError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		LinkageError(QAndroidJniObject obj);
		
		// Constructors
		LinkageError();
		LinkageError(jstring arg0);
		LinkageError(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang

