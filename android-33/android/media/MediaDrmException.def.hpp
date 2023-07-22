#pragma once

#include "../../java/lang/Exception.def.hpp"

class JString;

namespace android::media
{
	class MediaDrmException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDrmException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrmException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		MediaDrmException(JString arg0);
		
		// Methods
	};
} // namespace android::media

