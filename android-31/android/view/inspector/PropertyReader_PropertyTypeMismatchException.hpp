#pragma once

#include "../../../java/lang/RuntimeException.hpp"

class JString;

namespace android::view::inspector
{
	class PropertyReader_PropertyTypeMismatchException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PropertyReader_PropertyTypeMismatchException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		PropertyReader_PropertyTypeMismatchException(QAndroidJniObject obj);
		
		// Constructors
		PropertyReader_PropertyTypeMismatchException(jint arg0, JString arg1, JString arg2);
		PropertyReader_PropertyTypeMismatchException(jint arg0, JString arg1, JString arg2, JString arg3);
		
		// Methods
	};
} // namespace android::view::inspector

