#pragma once

#include "../../JObject.hpp"


namespace android::graphics
{
	class ImageDecoder_Source : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageDecoder_Source(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImageDecoder_Source(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::graphics

