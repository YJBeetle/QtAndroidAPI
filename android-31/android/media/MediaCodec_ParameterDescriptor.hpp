#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaCodec_ParameterDescriptor : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodec_ParameterDescriptor(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_ParameterDescriptor(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getName();
		jint getType();
		jint hashCode();
	};
} // namespace android::media

