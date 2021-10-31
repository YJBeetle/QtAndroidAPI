#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"

namespace android::media
{
	class MediaCasException_1;
}

namespace android::media
{
	class MediaCasException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCasException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		MediaCasException(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

