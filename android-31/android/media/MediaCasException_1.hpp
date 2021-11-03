#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class MediaCasException_1 : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCasException_1(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCasException_1(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

