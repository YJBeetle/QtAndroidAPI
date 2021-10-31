#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class MediaStore_Images : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Images(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Images(QAndroidJniObject obj);
		
		// Constructors
		MediaStore_Images();
		
		// Methods
	};
} // namespace android::provider

