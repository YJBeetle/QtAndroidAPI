#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util
{
	class UUID;
}

namespace android::media::audiofx
{
	class AudioEffect_Descriptor : public __JniBaseClass
	{
	public:
		// Fields
		jstring connectMode();
		jstring implementor();
		jstring name();
		QAndroidJniObject type();
		QAndroidJniObject uuid();
		
		AudioEffect_Descriptor(QAndroidJniObject obj);
		// Constructors
		AudioEffect_Descriptor();
		AudioEffect_Descriptor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::media::audiofx

