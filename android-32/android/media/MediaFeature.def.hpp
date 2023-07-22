#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaFeature : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaFeature(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaFeature(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaFeature();
		
		// Methods
	};
} // namespace android::media

