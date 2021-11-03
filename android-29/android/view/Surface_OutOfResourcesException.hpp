#pragma once

#include "../../java/lang/RuntimeException.hpp"

class JString;

namespace android::view
{
	class Surface_OutOfResourcesException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Surface_OutOfResourcesException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		Surface_OutOfResourcesException(QAndroidJniObject obj);
		
		// Constructors
		Surface_OutOfResourcesException();
		Surface_OutOfResourcesException(JString arg0);
		
		// Methods
	};
} // namespace android::view

