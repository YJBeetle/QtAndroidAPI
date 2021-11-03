#pragma once

#include "../../../JObject.hpp"

namespace java::util
{
	class UUID;
}

namespace android::media::audiofx
{
	class AudioEffect_Descriptor : public JObject
	{
	public:
		// Fields
		jstring connectMode();
		jstring implementor();
		jstring name();
		java::util::UUID type();
		java::util::UUID uuid();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioEffect_Descriptor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioEffect_Descriptor(QAndroidJniObject obj);
		
		// Constructors
		AudioEffect_Descriptor();
		AudioEffect_Descriptor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		
		// Methods
	};
} // namespace android::media::audiofx

