#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class AudioDescriptor : public __JniBaseClass
	{
	public:
		// Fields
		static jint STANDARD_EDID();
		static jint STANDARD_NONE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioDescriptor(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioDescriptor(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jbyteArray getDescriptor();
		jint getEncapsulationType();
		jint getStandard();
	};
} // namespace android::media

