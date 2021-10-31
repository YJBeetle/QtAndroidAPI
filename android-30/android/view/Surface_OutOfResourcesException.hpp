#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::view
{
	class Surface_OutOfResourcesException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Surface_OutOfResourcesException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		Surface_OutOfResourcesException(QJniObject obj);
		
		// Constructors
		Surface_OutOfResourcesException();
		Surface_OutOfResourcesException(jstring arg0);
		
		// Methods
	};
} // namespace android::view

