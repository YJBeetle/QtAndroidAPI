#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::lang
{
	class Error : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Error(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Error(QAndroidJniObject obj);
		
		// Constructors
		Error();
		Error(jstring arg0);
		Error(jthrowable arg0);
		Error(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang

