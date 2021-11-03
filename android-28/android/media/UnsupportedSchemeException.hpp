#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"


namespace android::media
{
	class UnsupportedSchemeException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnsupportedSchemeException(const char *className, const char *sig, Ts...agv) : android::media::MediaDrmException(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedSchemeException(QJniObject obj);
		
		// Constructors
		UnsupportedSchemeException(jstring arg0);
		
		// Methods
	};
} // namespace android::media

