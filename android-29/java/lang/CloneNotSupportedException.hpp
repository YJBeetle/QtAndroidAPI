#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"


namespace java::lang
{
	class CloneNotSupportedException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CloneNotSupportedException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		CloneNotSupportedException(QAndroidJniObject obj);
		
		// Constructors
		CloneNotSupportedException();
		CloneNotSupportedException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

