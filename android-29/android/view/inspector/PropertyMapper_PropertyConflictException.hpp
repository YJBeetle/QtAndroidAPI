#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"


namespace android::view::inspector
{
	class PropertyMapper_PropertyConflictException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		PropertyMapper_PropertyConflictException(QAndroidJniObject obj);
		// Constructors
		PropertyMapper_PropertyConflictException(jstring arg0, jstring arg1, jstring arg2);
		PropertyMapper_PropertyConflictException() = default;
		
		// Methods
	};
} // namespace android::view::inspector

