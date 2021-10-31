#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::content
{
	class ActivityNotFoundException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActivityNotFoundException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ActivityNotFoundException(QAndroidJniObject obj);
		
		// Constructors
		ActivityNotFoundException();
		ActivityNotFoundException(jstring arg0);
		
		// Methods
	};
} // namespace android::content

