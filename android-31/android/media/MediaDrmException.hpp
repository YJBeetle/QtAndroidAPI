#pragma once

#include "../../java/lang/Exception.hpp"

class JString;

namespace android::media
{
	class MediaDrmException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDrmException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrmException(QJniObject obj);
		
		// Constructors
		MediaDrmException(JString arg0);
		
		// Methods
	};
} // namespace android::media

