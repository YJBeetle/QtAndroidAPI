#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"

namespace java::lang
{
	class Exception;
}

namespace android::content::res
{
	class Resources_NotFoundException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Resources_NotFoundException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		Resources_NotFoundException(QAndroidJniObject obj);
		
		// Constructors
		Resources_NotFoundException();
		Resources_NotFoundException(jstring arg0);
		Resources_NotFoundException(jstring arg0, java::lang::Exception arg1);
		
		// Methods
	};
} // namespace android::content::res

