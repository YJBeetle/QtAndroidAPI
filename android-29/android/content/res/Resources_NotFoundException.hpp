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
		
		Resources_NotFoundException(QAndroidJniObject obj);
		// Constructors
		Resources_NotFoundException();
		Resources_NotFoundException(jstring &arg0);
		Resources_NotFoundException(const QString &arg0);
		Resources_NotFoundException(jstring &arg0, java::lang::Exception &arg1);
		Resources_NotFoundException(const QString &arg0, java::lang::Exception &arg1);
		
		// Methods
	};
} // namespace android::content::res

