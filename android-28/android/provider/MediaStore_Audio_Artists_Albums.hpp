#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Audio_Artists_Albums : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio_Artists_Albums(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio_Artists_Albums(QAndroidJniObject obj);
		
		// Constructors
		MediaStore_Audio_Artists_Albums();
		
		// Methods
		static android::net::Uri getContentUri(jstring arg0, jlong arg1);
	};
} // namespace android::provider

