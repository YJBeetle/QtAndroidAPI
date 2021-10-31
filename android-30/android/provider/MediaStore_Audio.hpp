#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class MediaStore_Audio : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio(QAndroidJniObject obj);
		
		// Constructors
		MediaStore_Audio();
		
		// Methods
		static jstring keyFor(jstring arg0);
	};
} // namespace android::provider

