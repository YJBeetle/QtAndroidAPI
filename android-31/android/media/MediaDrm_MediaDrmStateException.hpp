#pragma once

#include "../../java/lang/IllegalStateException.hpp"

class JString;

namespace android::media
{
	class MediaDrm_MediaDrmStateException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDrm_MediaDrmStateException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_MediaDrmStateException(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString getDiagnosticInfo();
		jint getErrorCode();
		jboolean isTransient();
	};
} // namespace android::media

