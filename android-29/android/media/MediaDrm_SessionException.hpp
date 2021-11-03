#pragma once

#include "../../java/lang/RuntimeException.hpp"

class JString;

namespace android::media
{
	class MediaDrm_SessionException : public java::lang::RuntimeException
	{
	public:
		// Fields
		static jint ERROR_RESOURCE_CONTENTION();
		static jint ERROR_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDrm_SessionException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_SessionException(QJniObject obj);
		
		// Constructors
		MediaDrm_SessionException(jint arg0, JString arg1);
		
		// Methods
		jint getErrorCode() const;
	};
} // namespace android::media

