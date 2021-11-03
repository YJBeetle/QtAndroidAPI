#include "../../JString.hpp"
#include "./MediaStore_Audio.hpp"

namespace android::provider
{
	// Fields
	
	// QJniObject forward
	MediaStore_Audio::MediaStore_Audio(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaStore_Audio::MediaStore_Audio()
		: JObject(
			"android.provider.MediaStore$Audio",
			"()V"
		) {}
	
	// Methods
	JString MediaStore_Audio::keyFor(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio",
			"keyFor",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace android::provider

