#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"


namespace android::media
{
	class MediaCasStateException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		MediaCasStateException(QAndroidJniObject obj);
		// Constructors
		MediaCasStateException() = default;
		
		// Methods
		jstring getDiagnosticInfo();
	};
} // namespace android::media

