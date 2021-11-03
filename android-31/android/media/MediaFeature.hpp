#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class MediaFeature : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaFeature(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaFeature(QJniObject obj);
		
		// Constructors
		MediaFeature();
		
		// Methods
	};
} // namespace android::media

