#pragma once

#include "../../java/lang/IllegalStateException.def.hpp"

class JString;

namespace android::media
{
	class MediaDrmResetException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDrmResetException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrmResetException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		MediaDrmResetException(JString arg0);
		
		// Methods
	};
} // namespace android::media

