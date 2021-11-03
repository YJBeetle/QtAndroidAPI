#pragma once

#include "../../../java/lang/RuntimeException.hpp"

class JString;

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
		PropertyMapper_PropertyConflictException(JString arg0, JString arg1, JString arg2);
		
		// Methods
	};
} // namespace android::view::inspector

