#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class MediaStore_Audio : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio(QAndroidJniObject obj);
		
		// Constructors
		MediaStore_Audio();
		
		// Methods
		static jstring keyFor(jstring arg0);
	};
} // namespace android::provider

