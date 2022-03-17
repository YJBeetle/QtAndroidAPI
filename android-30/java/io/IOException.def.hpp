#pragma once

#include "../lang/Exception.def.hpp"

class JString;
class JThrowable;

namespace java::io
{
	class IOException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IOException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		IOException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		IOException();
		IOException(JString arg0);
		IOException(JThrowable arg0);
		IOException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::io

