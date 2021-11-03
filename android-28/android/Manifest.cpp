#include "./Manifest.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	Manifest::Manifest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Manifest::Manifest()
		: JObject(
			"android.Manifest",
			"()V"
		) {}
	
	// Methods
} // namespace android

