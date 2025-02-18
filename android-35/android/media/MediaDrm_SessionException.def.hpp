#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

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
		MediaDrm_SessionException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		MediaDrm_SessionException(jint arg0, JString arg1);
		
		// Methods
		jint getErrorCode() const;
		jint getErrorContext() const;
		jint getOemError() const;
		jint getVendorError() const;
		jboolean isTransient() const;
	};
} // namespace android::media

