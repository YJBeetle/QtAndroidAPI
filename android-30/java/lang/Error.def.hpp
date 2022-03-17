#pragma once

#include "../../JThrowable.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class Error : public JThrowable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Error(const char *className, const char *sig, Ts...agv) : JThrowable(className, sig, std::forward<Ts>(agv)...) {}
		Error(QAndroidJniObject obj) : JThrowable(obj) {}
		
		// Constructors
		Error();
		Error(JString arg0);
		Error(JThrowable arg0);
		Error(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang

