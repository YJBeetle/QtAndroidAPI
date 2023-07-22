#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

class JString;
class JThrowable;

namespace android::database
{
	class SQLException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		SQLException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		SQLException();
		SQLException(JString arg0);
		SQLException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::database

