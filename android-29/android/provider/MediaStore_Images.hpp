#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class MediaStore_Images : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Images(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Images(QJniObject obj);
		
		// Constructors
		MediaStore_Images();
		
		// Methods
	};
} // namespace android::provider

