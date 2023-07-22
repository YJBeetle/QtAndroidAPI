#pragma once

#include "../../java/lang/IllegalStateException.def.hpp"

class JString;

namespace android::media
{
	class MediaDrm_MediaDrmStateException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDrm_MediaDrmStateException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_MediaDrmStateException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		
		// Methods
		JString getDiagnosticInfo() const;
		jint getErrorCode() const;
		jboolean isTransient() const;
	};
} // namespace android::media

