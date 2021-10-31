#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"


namespace java::io
{
	class IOException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IOException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		IOException(QJniObject obj);
		
		// Constructors
		IOException();
		IOException(jstring arg0);
		IOException(jthrowable arg0);
		IOException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::io

