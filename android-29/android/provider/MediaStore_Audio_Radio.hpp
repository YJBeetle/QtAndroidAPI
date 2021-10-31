#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class MediaStore_Audio_Radio : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ENTRY_CONTENT_TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio_Radio(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio_Radio(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

