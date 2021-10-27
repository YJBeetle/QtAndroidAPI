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
		
		ActivityNotFoundException(QAndroidJniObject obj);
		// Constructors
		ActivityNotFoundException();
		ActivityNotFoundException(jstring &arg0);
		ActivityNotFoundException(const QString &arg0);
		
		// Methods
	};
} // namespace android::content

