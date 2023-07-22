#pragma once

#include "../../JThrowable.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class Exception : public JThrowable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Exception(const char *className, const char *sig, Ts...agv) : JThrowable(className, sig, std::forward<Ts>(agv)...) {}
		Exception(QAndroidJniObject obj) : JThrowable(obj) {}
		
		// Constructors
		Exception();
		Exception(JString arg0);
		Exception(JThrowable arg0);
		Exception(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang

