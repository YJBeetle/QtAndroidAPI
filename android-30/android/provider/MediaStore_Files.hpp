#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Files : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Files(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Files(QJniObject obj);
		
		// Constructors
		MediaStore_Files();
		
		// Methods
		static android::net::Uri getContentUri(jstring arg0);
		static android::net::Uri getContentUri(jstring arg0, jlong arg1);
	};
} // namespace android::provider

