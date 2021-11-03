#pragma once

#include "../../java/lang/RuntimeException.hpp"

class JString;

namespace android::content
{
	class ActivityNotFoundException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ActivityNotFoundException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ActivityNotFoundException(QJniObject obj);
		
		// Constructors
		ActivityNotFoundException();
		ActivityNotFoundException(JString arg0);
		
		// Methods
	};
} // namespace android::content

