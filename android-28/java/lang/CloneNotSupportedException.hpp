#pragma once

#include "./Exception.hpp"

class JString;

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
		CloneNotSupportedException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

