#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"


namespace android::media
{
	class MediaCasStateException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCasStateException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		MediaCasStateException(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getDiagnosticInfo();
	};
} // namespace android::media

