#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::lang
{
	class Exception : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Exception(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Exception(QJniObject obj);
		
		// Constructors
		Exception();
		Exception(jstring arg0);
		Exception(jthrowable arg0);
		Exception(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang

