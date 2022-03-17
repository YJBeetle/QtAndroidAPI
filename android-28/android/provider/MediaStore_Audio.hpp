#pragma once

#include "../../JString.hpp"
#include "./MediaStore_Audio.def.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	inline MediaStore_Audio::MediaStore_Audio()
		: JObject(
			"android.provider.MediaStore$Audio",
			"()V"
		) {}
	
	// Methods
	inline JString MediaStore_Audio::keyFor(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio",
			"keyFor",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace android::provider

// Base class headers

