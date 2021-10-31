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
		
		// QJniObject forward
		template<typename ...Ts> explicit PropertyMapper_PropertyConflictException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		PropertyMapper_PropertyConflictException(QJniObject obj);
		
		// Constructors
		PropertyMapper_PropertyConflictException(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
	};
} // namespace android::view::inspector

